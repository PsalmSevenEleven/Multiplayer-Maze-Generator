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


#pragma region Components
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Replicated)
		class USpringArmComponent* CameraBoom;
	
	UPROPERTY(EditAnywhere)
		class UCameraComponent* Camera;

	//Footstep audio
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAudioComponent* FootstepComp;

#pragma endregion Components


	//Amount to turn when given mouse input
	UPROPERTY(EditAnywhere)
		float MouseSensitivity;
	

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
	
	//Handle movement input
	void Move(const struct FInputActionValue& ActionValue);

	//Handle mouse input
	void Look(const struct FInputActionValue& ActionValue);

	//Interact with objects
	void Interact(const struct FInputActionValue& ActionValue);

	UFUNCTION(Server, Reliable)
		void ServerInteract();

	//Use current object. In this case it's just the player's flashlight, but it could be expanded to be any tool.
	virtual void Use(const struct FInputActionValue& ActionValue);

	void StartFootstepTimer();

	void StopFootstepTimer();
};
