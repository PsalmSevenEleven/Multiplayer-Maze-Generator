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
	if (GetLocalRole() != ROLE_Authority)
	{
		return;
	}
		
	//Make a stream from the one we've been using for everything else
	FRandomStream Stream = FRandomStream(Seed);

	//What follows is a multi-exclusion version of a neat algorithm I found for grabbing a random integer from a range while excluding one in particular
	//Here's a link: https://stackoverflow.com/questions/34182699/random-integer-in-a-certain-range-excluding-one-number

	TArray<int> FullXArrays;
	
	TArray< TArray<int32> > Grid;

	for (int i = 0; i < Width; i++)
	{
		Grid.Add(TArray<int>());
	}

	Grid[0].Add(0);
	Grid[CurrentX].Add(CurrentY);

	for (int i = 1; i <= NumKeys; i++)
	{
		int KeyX = Stream.RandRange(0, Width - 1);
		int KeyY = Stream.RandRange(0, Height - 1);

		if (Grid[KeyX].Num() == Width)
		{
			FullXArrays.Add(KeyX);
		}

		int GreaterThan = 0;

		for (int j = 0; j < FullXArrays.Num() - GreaterThan; j++)
		{
			if (KeyX >= FullXArrays[j])
			{
				GreaterThan++;
			}
		}

		KeyX += GreaterThan;

		/*if (Grid[KeyX].Contains(KeyY))
		{
			GreaterThan = 0;

			for (int j = 0; j < Grid[KeyX].Num() - GreaterThan; j++)
			{
				if (KeyY >= Grid[KeyX][j])
				{
					GreaterThan++;
				}
			}

			KeyY += GreaterThan;
		}*/

		Grid[KeyX].Add(KeyY);
		
		float KeyLocX = KeyX * GridSize;
		float KeyLocY = KeyY * GridSize;

		FActorSpawnParameters SpawnParams = FActorSpawnParameters();

		FVector KeyLocation = FVector(KeyLocX + 0.5 * GridSize, KeyLocY + 0.5 * GridSize, 0);
		FTransform KeyTransform = FTransform(FRotator(0), KeyLocation, FVector(1));
		ACPP_ExitKey* NewKey = GetWorld()->SpawnActor<ACPP_ExitKey>(ExitKeyClass, KeyTransform, SpawnParams);
		NewKey->ParentHatch = this;
	}
}



