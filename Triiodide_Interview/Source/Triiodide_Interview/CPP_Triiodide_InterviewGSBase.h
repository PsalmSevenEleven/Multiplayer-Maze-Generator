// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CPP_Triiodide_InterviewGSBase.generated.h"

/**
 * 
 */
UCLASS()
class TRIIODIDE_INTERVIEW_API ACPP_Triiodide_InterviewGSBase : public AGameStateBase
{
	GENERATED_BODY()
public:

	//The number of keys that the players have currently completed (turning a crank, flipping a lever, etc.)
	int CompletedKeys;
};
