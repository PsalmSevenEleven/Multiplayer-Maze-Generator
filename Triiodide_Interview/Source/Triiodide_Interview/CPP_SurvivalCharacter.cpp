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
	
}

// Called every frame
void ACPP_SurvivalCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void ACPP_SurvivalCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	

	//Getting references to the input component and player controller, and casting to the proper classes
	UEnhancedInputComponent* InputComp = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	ACPP_SurvivalPlayerController* PlayerControl = Cast<ACPP_SurvivalPlayerController>(Controller);


	//If they exist and the casts were successful, bind the player's controls
	if (InputComp && PlayerControl)
	{
		InputComp->BindAction(PlayerControl->MoveAction, ETriggerEvent::Triggered, this, &ACPP_SurvivalCharacter::Move);
		InputComp->BindAction(PlayerControl->MouseLookAction, ETriggerEvent::Triggered, this, &ACPP_SurvivalCharacter::Look);
		InputComp->BindAction(PlayerControl->InteractAction, ETriggerEvent::Started, this, &ACPP_SurvivalCharacter::Interact);
		InputComp->BindAction(PlayerControl->UseAction, ETriggerEvent::Started, this, &ACPP_SurvivalCharacter::Use);

		ULocalPlayer* LocalPlayer = PlayerControl->GetLocalPlayer();
		if (LocalPlayer)
		{

			UEnhancedInputLocalPlayerSubsystem* Subsystem =
				LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();

			if (Subsystem)
			{
				Subsystem->ClearAllMappings();
				Subsystem->AddMappingContext(PlayerControl->PawnMappingContext, 0);
			}
		}
	}

}

//Overridden to allow variable replication
void ACPP_SurvivalCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
}

//Moves the player around
void ACPP_SurvivalCharacter::Move(const FInputActionValue& ActionValue)
{
	FVector Input = ActionValue.Get<FInputActionValue::Axis3D>();
	AddMovementInput(GetActorRotation().RotateVector(Input));

	/*if (!FootstepTimerHandle.IsValid())
	{
		StartFootstepTimer();
	}*/
}

//Tells the player character what its ControlRotation variable should be
void ACPP_SurvivalCharacter::Look(const FInputActionValue& ActionValue)
{
	
	//Making sure this character is locally controlled
	if (GetLocalRole() != ROLE_SimulatedProxy)
	{
		//get the input from the player controller
		FRotator Input(
			FMath::ClampAngle(ActionValue[0], -89.9f, 89.9f),
			ActionValue[1],
			0
			);

		//Scale by MouseSensitivity
		Input *= GetWorld()->GetDeltaSeconds()* MouseSensitivity;
		
		//Add the input
		//pitch is inverted for whatever reason, thus the -
		AddControllerPitchInput(-Input.Pitch);
		AddControllerYawInput(Input.Yaw);
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

void ACPP_SurvivalCharacter::StartFootstepTimer()
{
	GetWorld()->GetTimerManager().SetTimer(FootstepTimerHandle, FTimerDelegate::CreateLambda([&] {FootstepComp->Play(); }), FootstepInterval, true);
}

void ACPP_SurvivalCharacter::StopFootstepTimer()
{
	FootstepComp->Play();
	GetWorld()->GetTimerManager().ClearTimer(FootstepTimerHandle);
}