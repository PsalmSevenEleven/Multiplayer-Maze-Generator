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

	//Start the flicker loop
	StartFlickerCheckTimer();
}

//Compiler gets mad if I delete it, so here it is
void ACPP_EnvironmentLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


//Called every FlickerCheckTime seconds, to see if the light should flicker
void ACPP_EnvironmentLight::FlickerCheck()
{
	//If we randomly return true, then flicker the light
	if (UKismetMathLibrary::RandomBoolWithWeight(FlickerChance))
	{
		Flicker();
	}
	//Otherwise, reset the check timer
	else
	{
		StartFlickerCheckTimer();
	}
}

//Starts the flicker check timer with a random delay to keep the lights from blinking in unison
void ACPP_EnvironmentLight::StartFlickerCheckTimer()
{
	FTimerHandle Handle = FTimerHandle();
	GetWorld()->GetTimerManager().SetTimer(Handle, FTimerDelegate::CreateLambda([&] {FlickerCheck(); }), FlickerCheckTime, false, 1.f);
}


