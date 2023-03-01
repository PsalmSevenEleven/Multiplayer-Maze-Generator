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

	//For this algorithm I'm using a 2d array to represent the grid on which keys can spawn
	TArray< TArray<int32> > Grid;

	//This represents a list of x coordinates for which the corresponding array is completely full,
	//and cannot accept any more keys
	TArray<int> FullXArrays;
	
	
	//Pre-initializing the x coordinates of the 2d array so that I can add to
	//any y-coordinate without having to worry about OOB exceptions
	for (int i = 0; i < Width; i++)
	{
		Grid.Add(TArray<int>());
	}
	
	//Setting the player start and hatch's current position as occupied so that keys will not spawn in those grid cells
	Grid[0].Add(0);
	Grid[CurrentX].Add(CurrentY);

	//Once for every key we want to create:
	for (int i = 1; i <= NumKeys; i++)
	{
		//Generate a random x coordinate.
		//The reason we subtract FullXArrays.Num() is that the algorithm will add one to
		//the x coordinate for every number in FullXArrays that it is greater than.
		//This keeps the x coordinate from exceeding Width and potentially spawning a key outside the map.
		int KeyX = Stream.RandRange(0, Width - 1 - FullXArrays.Num());

		//If FullXArrays has anything in it,
		//then make sure that you arent picking an x coordinate that's already full
		if(FullXArrays.Num()>0)
		{
			//The algorithm that this is based on works like this:
			//if we want to generate a number between 1 and 20 that isn't 10,
			//generate a number from 1 to 19 (which is [maximum desired value] - [# of values to exclude])
			//and add 1 to it if it's greater than or equal to 10.
			//5 is less than 10, so it's already valid.
			//10 is equal to 10, so adding one gives us 11, which is valid.
			//19 is greater than 10, so adding 1 to it will give us 20, which is the maximum original value.
			//We can do this multiple times if we want to exclude multiple values,
			//which is what's happening in this for loop
			for (int j = 0; j < FullXArrays.Num(); j++)
			{
				if (KeyX >= FullXArrays[j])
				{
					KeyX++;
				}
			}
		}
		
		//Now that we've established our x coordinate, generate a y coordinate in much the same way,
		//this time subtracting the number of occupied y coordinates corresponding to this x coordinate
		int KeyY = Stream.RandRange(0, Height - 1 - Grid[KeyX].Num());
		
		if (Grid[KeyX].Contains(KeyY))
		{
			for (int j = 0; j < Grid[KeyX].Num(); j++)
			{
				if (KeyY >= Grid[KeyX][j])
				{
					KeyY++;
				}
			}
		}

		//Add the current cell to the list of those being occupied
		Grid[KeyX].Add(KeyY);

		//If the new x coordinate is now full add it to FullXArrays
		if (Grid[KeyX].Num() == Height && !FullXArrays.Contains(KeyX))
		{
			FullXArrays.Add(KeyX);
		}

		//Key locations
		float KeyLocX = (KeyX * GridSize) + (0.5 * GridSize);
		float KeyLocY = (KeyY * GridSize) + (0.5 * GridSize);
		FVector KeyLocation = FVector(KeyLocX , KeyLocY, 0);
		
		//Spawn the key
		FActorSpawnParameters SpawnParams = FActorSpawnParameters();
		FTransform KeyTransform = FTransform(FRotator(0), KeyLocation, FVector(1));
		ACPP_ExitKey* NewKey = GetWorld()->SpawnActor<ACPP_ExitKey>(ExitKeyClass, KeyTransform, SpawnParams);
	}
}



