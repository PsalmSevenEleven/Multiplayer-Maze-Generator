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

	//Number of keys to generate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Keys")
		int NumKeys;

	//Kind of key to generate
	UPROPERTY(EditAnywhere, Category = "Keys")
		TSubclassOf<ACPP_ExitKey> ExitKeyClass;


	int CompletedKeys;

	//These store the current cell coords for the ExitHatch so that when it generates the keys, it can exclude its own cell
	int CurrentX;
	int CurrentY;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Generates the 'keys' that will activate the end objective
	void CreateKeys(int Seed, int Width, int Height, float GridSize);

	//Called by the keys when activated
	void CompleteKey();

	//Called when all of the keys have been activated
	//It's a BlueprintImplementableEvent because what the end objective does is pretty vague. 
	//It could be a door opening, a water level rising, a monster trap activating, etc.
	UFUNCTION(BlueprintImplementableEvent)
		void Unlock();

};
