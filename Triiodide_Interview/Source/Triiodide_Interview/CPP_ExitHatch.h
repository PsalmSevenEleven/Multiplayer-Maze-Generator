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

	UPROPERTY(EditAnywhere)
		USkeletalMeshComponent* SkeletalMesh;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Keys")
		int NumKeys;

	UPROPERTY(EditAnywhere, Category = "Keys")
		TSubclassOf<ACPP_ExitKey> ExitKeyClass;


	int CompletedKeys;

	int CurrentX;
	int CurrentY;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CreateKeys(int Seed, int Width, int Height, float GridSize);

	void CompleteKey();

	UFUNCTION(BlueprintImplementableEvent)
		void Unlock();

};
