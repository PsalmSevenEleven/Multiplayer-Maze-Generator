// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_InteractibleInterface.h"
#include "CPP_ExitKey.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKeyActivatedDelegate);

UCLASS()
class TRIIODIDE_INTERVIEW_API ACPP_ExitKey : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_ExitKey();

	class ACPP_ExitHatch* ParentHatch;

	FKeyActivatedDelegate ActivatedDelegate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
		void StartActivation();

	UFUNCTION(BlueprintCallable)
		void FinishActivation();
};
