// Copyright Epic Games, Inc. All Rights Reserved.

#include "Triiodide_InterviewGameMode.h"
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
