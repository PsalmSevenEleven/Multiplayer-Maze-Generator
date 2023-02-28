// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_EnvironmentLight.h"

#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACPP_EnvironmentLight::ACPP_EnvironmentLight()
{
 	//Don't tick because we don't need it
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	//Create the point light component
	Light = CreateDefaultSubobject<UPointLightComponent>("Light");
	Light->SetupAttachment(RootComponent);

	//Create the audio component
	AudioComp = CreateDefaultSubobject<UAudioComponent>("Audio Component");
	AudioComp->SetupAttachment(Light);
}

// Called when the game starts or when spawned
void ACPP_EnvironmentLight::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle Handle = FTimerHandle();
	GetWorld()->GetTimerManager().SetTimer(Handle,this, &ACPP_EnvironmentLight::FlickerCheck, FlickerCheckTime, false, 1.f);
}

//Called every FlickerCheckTime seconds, to see if the light should flicker
void ACPP_EnvironmentLight::FlickerCheck()
{
	//If we randomly return true, then flicker the light
	if (UKismetMathLibrary::RandomBoolWithWeight(FlickerChance))
	{
		Flicker();
	}
	
	FTimerHandle Handle = FTimerHandle();
	GetWorld()->GetTimerManager().SetTimer(Handle,this, &ACPP_EnvironmentLight::FlickerCheck, FlickerCheckTime, false, 1.f);
	
}


