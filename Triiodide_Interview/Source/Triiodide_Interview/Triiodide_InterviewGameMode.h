// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPP_SurvivalPlayerController.h"
#include "Triiodide_InterviewGameMode.generated.h"


UCLASS(minimalapi)
class ATriiodide_InterviewGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:

	TArray<ACPP_SurvivalPlayerController*> Players;
	
	class ACPP_ExitHatch* LevelExitHatch;

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	int NumKeys;

	
	

private:

public:
	ATriiodide_InterviewGameMode();

	void CompleteKey();

	void Unlock();
};



