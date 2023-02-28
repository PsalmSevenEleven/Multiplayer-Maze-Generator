// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_ExitKey.h"

#include "CPP_ExitHatch.h"
// Sets default values
ACPP_ExitKey::ACPP_ExitKey()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	bReplicates = true;

}

// Called when the game starts or when spawned
void ACPP_ExitKey::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_ExitKey::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACPP_ExitKey::FinishActivation()
{
	ParentHatch->CompleteKey();
}

