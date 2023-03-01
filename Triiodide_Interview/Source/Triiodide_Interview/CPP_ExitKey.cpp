// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_ExitKey.h"

#include "CPP_ExitHatch.h"
#include "Triiodide_InterviewGameMode.h"
// Sets default values
ACPP_ExitKey::ACPP_ExitKey()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	bReplicates = true;

}



void ACPP_ExitKey::FinishActivation()
{
	Cast<ATriiodide_InterviewGameMode>(GetWorld()->GetAuthGameMode())->CompleteKey();
}

