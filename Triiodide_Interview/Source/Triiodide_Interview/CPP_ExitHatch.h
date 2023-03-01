// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include "CPP_ExitKey.h"
#include "CPP_ExitHatch.generated.h"

UCLASS()
class TRIIODIDE_INTERVIEW_API ACPP_ExitHatch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_ExitHatch();
	
	//Kind of key to generate
	UPROPERTY(EditAnywhere, Category = "Keys")
		TSubclassOf<ACPP_ExitKey> ExitKeyClass;
	

	//These store the current cell coords for the ExitHatch so that when it generates the keys, it can exclude its own cell
	int CurrentX;
	int CurrentY;


protected:


public:	
	

	//Generates the 'keys' that will activate the end objective
	void CreateKeys(int Seed, int Width, int Height, float GridSize);

	
	//Called when all of the keys have been activated
	//It's a BlueprintImplementableEvent because what the end objective does is pretty vague. 
	//It could be a door opening, a water level rising, a monster trap activating, etc.
	UFUNCTION(BlueprintImplementableEvent)
		void Unlock();

};
