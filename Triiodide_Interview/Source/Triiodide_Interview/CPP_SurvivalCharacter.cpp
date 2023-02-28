// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_SurvivalCharacter.h"

#include "Kismet/KismetMathLibrary.h"

/*Components*/
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/AudioComponent.h"

/*Enhanced Input*/
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "CPP_SurvivalPlayerController.h"

/*Multiplayer*/
#include "Net/UnrealNetwork.h"

// Sets default values
ACPP_SurvivalCharacter::ACPP_SurvivalCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create the camera boom and camera
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("Camera Boom");
	CameraBoom->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(CameraBoom);

	//Create the audio component
	FootstepComp = CreateDefaultSubobject<UAudioComponent>("Audio Component");
	FootstepComp->SetupAttachment(RootComponent);

	//I may add an option to change this later, should I have time
	MouseSensitivity = 75.f;
}

// Called when the game starts or when spawned
void ACPP_SurvivalCharacter::BeginPlay()
{
	Super::BeginPlay();

	//Make sure the actor replicates
	bReplicates = true;

	//I usually grab this now so that I don't have to keep calling GetCharacterMovement()
	MovementComp = GetCharacterMovement();
}

// Called every frame
void ACPP_SurvivalCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//If the camera boom and camera exist set their rotations to the value we calculate in the Look() method
	if (CameraBoom && Controller)
	{
		CameraBoom->SetWorldRotation(ControlRotation);
		Controller->SetControlRotation(ControlRotation);
	}

	if (UKismetMathLibrary::VSize2D(FVector2D(GetVelocity().X, GetVelocity().Y)) > 1)
	{
		StartFootstepTimer(false);
	}
	else
	{
		StopFootstepTimer();
	}
}

// Called to bind functionality to input
void ACPP_SurvivalCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	

	//Getting references to the input component and player controller, and casting to the proper classes
	UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	ACPP_SurvivalPlayerController* SPC = Cast<ACPP_SurvivalPlayerController>(Controller);


	//If they exist and the casts were successful, bind the player's controls
	if (EIC && SPC)
	{
		EIC->BindAction(SPC->MoveAction, ETriggerEvent::Triggered, this, &ACPP_SurvivalCharacter::Move);
		EIC->BindAction(SPC->MouseLookAction, ETriggerEvent::Triggered, this, &ACPP_SurvivalCharacter::Look);
		EIC->BindAction(SPC->InteractAction, ETriggerEvent::Started, this, &ACPP_SurvivalCharacter::Interact);
		EIC->BindAction(SPC->UseAction, ETriggerEvent::Started, this, &ACPP_SurvivalCharacter::Use);

		ULocalPlayer* LocalPlayer = SPC->GetLocalPlayer();
		if (LocalPlayer)
		{

			UEnhancedInputLocalPlayerSubsystem* Subsystem =
				LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();

			if (Subsystem)
			{
				Subsystem->ClearAllMappings();
				Subsystem->AddMappingContext(SPC->PawnMappingContext, 0);
			}
		}
	}

}

//Overridden to allow variable replication
void ACPP_SurvivalCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACPP_SurvivalCharacter, ControlRotation);
}

//Moves the player around
void ACPP_SurvivalCharacter::Move(const FInputActionValue& ActionValue)
{
	FVector Input = ActionValue.Get<FInputActionValue::Axis3D>();
	MovementComp->AddInputVector(GetActorRotation().RotateVector(Input));

	
}

//Tells the player character what its ControlRotation variable should be
void ACPP_SurvivalCharacter::Look(const FInputActionValue& ActionValue)
{
	//Making sure this character is locally controlled
	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		//get the input from the player controller
		FRotator Input(ActionValue[0], ActionValue[1], ActionValue[2]);

		//Scale by MouseSensitivity
		Input *= GetWorld()->GetDeltaSeconds()* MouseSensitivity;

		//Add to the player's current control rotation
		Input += ControlRotation;

		//Keep the player from navel-gazing or playing limbo
		Input.Pitch = FMath::ClampAngle(Input.Pitch, -89.9f, 89.9f);

		//Make sure the player doesn't start rolling sideways
		Input.Roll = 0.f;

		//Set the value of ControlRotation
		ControlRotation = Input;

		//Replicate ControlRotation
		ServerLook(Input);
	}
}

void ACPP_SurvivalCharacter::Interact(const FInputActionValue& ActionValue)
{
	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		ServerInteract();
	}
}

void ACPP_SurvivalCharacter::ServerInteract_Implementation()
{
	FHitResult Hit;
	FCollisionQueryParams Params;
	GetWorld()->LineTraceSingleByChannel(Hit, Camera->GetComponentLocation(), Camera->GetComponentLocation() + Camera->GetForwardVector() * PlayerReach, ECC_Visibility, Params);

	if (Hit.GetActor() && Hit.GetActor()->Implements<UCPP_InteractibleInterface>())
	{
		ICPP_InteractibleInterface::Execute_Interact(Hit.GetActor());
	}
}

void ACPP_SurvivalCharacter::Use(const FInputActionValue& ActionValue)
{

}

//Setting ControlRotation on the server
void ACPP_SurvivalCharacter::ServerLook_Implementation(FRotator Rot)
{
	ControlRotation = Rot;
}

void ACPP_SurvivalCharacter::StartFootstepTimer(bool Reset)
{
	static bool StartTimer = true;

	if (Reset)
	{
		StartTimer = true;
		return;
	}

	if (StartTimer)
	{
		GetWorld()->GetTimerManager().SetTimer(FootstepTimerHandle, FTimerDelegate::CreateLambda([&] {FootstepComp->Play(); }), FootstepInterval, true);
		StartTimer = false;
	}
}

void ACPP_SurvivalCharacter::StopFootstepTimer()
{
	FootstepComp->Play();
	GetWorld()->GetTimerManager().ClearTimer(FootstepTimerHandle);
	StartFootstepTimer(true);
}