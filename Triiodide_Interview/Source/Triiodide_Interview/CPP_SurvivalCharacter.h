// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPP_InteractibleInterface.h"
#include "CPP_SurvivalCharacter.generated.h"

UCLASS()
class TRIIODIDE_INTERVIEW_API ACPP_SurvivalCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_SurvivalCharacter();


	/*Actor components*/

	//Camera boom
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Replicated)
		class USpringArmComponent* CameraBoom;

	//Player's camera
	UPROPERTY(EditAnywhere)
		class UCameraComponent* Camera;

	//Movement component
	UPROPERTY(EditAnywhere)
		UCharacterMovementComponent* MovementComp;

	//Footstep audio
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAudioComponent* FootstepComp;

	/*Control-related variables*/

	//Amount to turn when given mouse input
	UPROPERTY(EditAnywhere)
		float MouseSensitivity;

	//Player's control rotation
	UPROPERTY(Replicated)
		FRotator ControlRotation = FRotator();

	//How far away the player can interact with objects
	UPROPERTY(EditAnywhere)
		float PlayerReach;


	//Time between footsteps
	UPROPERTY(EditAnywhere)
		float FootstepInterval;

	FTimerHandle FootstepTimerHandle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Overridden to allow variable replication
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//Handle movement input
	void Move(const struct FInputActionValue& ActionValue);

	//Handle mouse input
	void Look(const struct FInputActionValue& ActionValue);

	//Interact with objects
	void Interact(const struct FInputActionValue& ActionValue);

	UFUNCTION(Server, Reliable)
		void ServerInteract();

	//Use current object. In this case it's just the player's flashlight, but it could be expanded to be any tool.
	void Use(const struct FInputActionValue& ActionValue);

	//Lets the server know where the player is looking
	UFUNCTION(Server, Unreliable)
		void ServerLook(FRotator Rot);

	void StartFootstepTimer(bool Reset);

	void StopFootstepTimer();
};
