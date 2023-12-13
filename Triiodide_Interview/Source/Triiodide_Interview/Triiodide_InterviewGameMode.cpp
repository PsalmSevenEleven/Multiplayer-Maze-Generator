// Copyright Epic Games, Inc. All Rights Reserved.

#include "Triiodide_InterviewGameMode.h"

#include "CPP_ExitHatch.h"
#include "CPP_Triiodide_InterviewGSBase.h"
#include "Triiodide_InterviewCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATriiodide_InterviewGameMode::ATriiodide_InterviewGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ATriiodide_InterviewGameMode::CompleteKey()
{
	ensure(GameState);
	
	GetGameState<ACPP_Triiodide_InterviewGSBase>()->CompletedKeys++;
	if (GetGameState<ACPP_Triiodide_InterviewGSBase>()->CompletedKeys == NumKeys)
	{
		Unlock();
	}
}

void ATriiodide_InterviewGameMode::Unlock()
{
	LevelExitHatch->Unlock();
}
