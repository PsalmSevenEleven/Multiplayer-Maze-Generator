// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_ExitHatch.h"
#include "GameFramework/GameStateBase.h"

// Sets default values
ACPP_ExitHatch::ACPP_ExitHatch()
{
	//No need to tick, but we will need replication
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	bReplicates = true;
}

// Called when the game starts or when spawned
void ACPP_ExitHatch::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACPP_ExitHatch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


//Create the keys to activate the end objective
void ACPP_ExitHatch::CreateKeys(int Seed, int Width, int Height, float GridSize)
{
	//We only need to do this on the server
	if (GetLocalRole() == ROLE_Authority)
	{
		//Make a stream from the one we've been using for everything else
		FRandomStream Stream = FRandomStream(Seed);


		//What follows is a multi-exclusion version of a neat algorithm I found for grabbing a random integer from a range while excluding one in particular
		//Here's a link: https://stackoverflow.com/questions/34182699/random-integer-in-a-certain-range-excluding-one-number


		//Lists of excluded coordinates
		TArray<int> ExcludedX;
		TArray<int> ExcludedY;

		//Add the ExitHatch's current location so that there won't be any buttons in the same tile as it
		ExcludedX.Add(CurrentX);
		ExcludedY.Add(CurrentY);

		//Once for every key we want to create
		for (int i = 1; i <= NumKeys; i++)
		{
			int KeyX = Stream.RandRange(1, Width - 1);
			int KeyY = Stream.RandRange(1, Height - 1);

			if (ExcludedX.Contains(KeyX))
			{
				//This integer represents the number of excluded integers that that our randomly generated Y-coordinate is greater than
				int GreaterThan = 0;

				for (int j = 0; j < ExcludedY.Num(); j++)
				{
					if (KeyY >= ExcludedY[j])
					{
						GreaterThan++;
					}
				}

				KeyY += GreaterThan;
			}


			ExcludedX.Add(KeyX);
			ExcludedY.Add(KeyY);

			float KeyLocX = KeyX * GridSize;
			float KeyLocY = KeyY * GridSize;

			FActorSpawnParameters SpawnParams = FActorSpawnParameters();

			FVector KeyLocation = FVector(KeyLocX + 0.5 * GridSize, KeyLocY + 0.5 * GridSize, 0);
			FTransform KeyTransform = FTransform(FRotator(), KeyLocation, FVector(1));
			ACPP_ExitKey* NewKey = GetWorld()->SpawnActor<ACPP_ExitKey>(ExitKeyClass, KeyTransform, SpawnParams);
			NewKey->ParentHatch = this;
		}
	}
	
}

void ACPP_ExitHatch::CompleteKey()
{
	CompletedKeys++;
	if (CompletedKeys == NumKeys)
	{
		Unlock();
	}
}

