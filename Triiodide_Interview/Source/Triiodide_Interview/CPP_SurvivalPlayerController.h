// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPP_SurvivalPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TRIIODIDE_INTERVIEW_API ACPP_SurvivalPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	virtual void SetupInputComponent() override;


	UPROPERTY()
		class UInputMappingContext* PawnMappingContext;

	UPROPERTY()
		class UInputAction* MoveAction;
	
	UPROPERTY()
		class UInputAction* MouseLookAction;

	UPROPERTY()
		class UInputAction* InteractAction;

	UPROPERTY()
		class UInputAction* UseAction;
};