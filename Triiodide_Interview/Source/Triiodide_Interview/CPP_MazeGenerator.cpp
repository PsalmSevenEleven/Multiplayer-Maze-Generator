// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MazeGenerator.h"

#include "CPP_ExitHatch.h"

#include "Net/UnrealNetwork.h"

// Sets default values
ACPP_MazeGenerator::ACPP_MazeGenerator()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	bReplicates = true;

	MazeFloors = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>("Floor Meshes");
	MazeFloors->SetStaticMesh(MazeFloorMesh);
	MazeFloors->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MazeFloors->SetupAttachment(RootComponent);

	MazeWalls = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>("Wall Meshes");
	MazeWalls->SetStaticMesh(MazeWallMesh);
	MazeWalls->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MazeWalls->SetupAttachment(RootComponent);

	MazeCeilings = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>("Ceiling Meshes");
	MazeCeilings->SetStaticMesh(MazeCeilingMesh);
	MazeCeilings->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MazeCeilings->SetupAttachment(RootComponent);

	
	
}

// Called when the game starts or when spawned
void ACPP_MazeGenerator::BeginPlay()
{
	Super::BeginPlay();
	
	//If this maze generator is on the server, 
	//then create a random seed, replicate it down to the clients, 
	//and generate a maze with it
	if (GetLocalRole() == ROLE_Authority)
	{
		Seed = FMath::RandRange(1, 256);
		BuildMeshes();
	}
}

// Called every frame
void ACPP_MazeGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


//This method makes sure we can generate a maze from the supplied parameters, 
// and then performs some setup before any actual algorithm voodoo.
bool ACPP_MazeGenerator::InitMaze()
{
	//Make sure that the maze actually has some with and length,
	//because a maze with a 0 in either parameter would simply not exist
	if (MazeWidth <= 0 || MazeHeight <= 0)
	{
		//Otherwise disallow the program to attempt to generate a maze
		return false;
	}

	//Clean out the current maze, just in case it isn't already empty
	Maze.Empty();

	//Initialize the array with an appropriate number of empty values
	for (int i = 0; i< MazeWidth * MazeHeight; i++)
	{
		Maze.Add(0x00);
	}

	//Add the first "cell" to the array as a starting point...
	Stack.Add(FVector2D(0,0));
	//...tell it that it's been visited (because it's our starting point)...
	Maze[0] = VISITED;
	//... and set the number of visited cells to 1, because we start in a cell
	VisitedCells = 1;

	Stream = FRandomStream(Seed);

	//Confirm that we can indeed generate a maze from these params
	return true;
}


//This method actually generates the maze.
//I've chosen to use the Recursive Back-Tracker algorithm 
//for it's inherent scalability to 3 dimensions and relatively simple implementation

//Here's an excellent explanation of how the algorithm works, 
//as well as a straightforward C++ implementation (not Unreal, unfortunately)
// https://www.youtube.com/watch?v=Y37-gB83HKE
bool ACPP_MazeGenerator::GenerateMaze()
{
	
	//Check that we can build a maze from the given parameters (also performs required setup)
	if (InitMaze())
	{
		//A quick lambda that will prove its worth shortly.
		//Basically just allows the programmer (me) to get a cell in the grid
		//while treating the current cell as the origin
		auto OffsetFunc = [&](int x, int y)
		{
			return (Stack.Top().Y + y) * MazeWidth + (Stack.Top().X + x);
		};

		//While loop so I don't have to use Tick(), 
		//as I'd much prefer to handle this sort of thing in a constructor or BeginPlay()
		while (VisitedCells < MazeHeight * MazeWidth)
		{
			//Temporary array to store all of the valid 
			//(directly adjacent to the current cell, within the bounds of the maze, and un-visited) 
			//cell options
			TArray<int> ValidNeighbors;


			//Check northern neighbor
			if (Stack.Top().Y > 0 && !(Maze[OffsetFunc(0, -1)] >> 4))
			{
				//If the cell in question meets the criteria, it gets added to ValidNeighbors, 
				//from which a random value is chosen at the end of these checks
				ValidNeighbors.Add(0);
			}

			//Check southern neighbor
			if (Stack.Top().Y < (MazeHeight - 1) && !(Maze[OffsetFunc(0, 1)] >> 4))
			{
				ValidNeighbors.Add(1);
			}

			//Check eastern neighbor
			if (Stack.Top().X > 0 && !(Maze[OffsetFunc(-1, 0)] >> 4))
			{
				ValidNeighbors.Add(2);
			}

			//Check western neighbor
			if (Stack.Top().X < (MazeWidth - 1) && !(Maze[OffsetFunc(1, 0)] >> 4))
			{
				ValidNeighbors.Add(3);
			}

			//Make sure that there are actually valid neighbors before choosing a cell to progress to
			if (ValidNeighbors.Num() > 0)
			{
				//Random index...
				int RandIndex = FMath::RandRange(0, ValidNeighbors.Num() - 1);


				

				//...to choose a random direction.
				int Direction = ValidNeighbors[Stream.RandRange(0, ValidNeighbors.Num() - 1)];

				//Now that we have our direction we can actually progress to the next cell, 
				//which is what this last bit of logic does
				switch (Direction)
				{
					//North neighbor chosen
				case 0:

					//Tell the current cell that it has a path to the north...
					Maze[OffsetFunc(0, 0)] |= PATH_NORTH;

					//...and the cell to the north that it has a path to the south.
					Maze[OffsetFunc(0, -1)] |= PATH_SOUTH;

					//Add the northern neighbor cell to the top of the stack
					Stack.Add(FVector2D(Stack.Top().X + 0, Stack.Top().Y - 1));
					break;

					//South neighbor chosen
				case 1:

					//Same procedure as before, 
					//but with an opposite offset so that we're dealing with the southern neighbor cell

					Maze[OffsetFunc(0, 0)] |= PATH_SOUTH;
					Maze[OffsetFunc(0, 1)] |= PATH_NORTH;

					Stack.Add(FVector2D(Stack.Top().X + 0, Stack.Top().Y + 1));
					break;

					//East neighbor chosen
				case 2:

					//Same thing as the other cases, but now the offset is in the x axis
					Maze[OffsetFunc(0, 0)] |= PATH_EAST;
					Maze[OffsetFunc(-1, 0)] |= PATH_WEST;

					Stack.Add(FVector2D(Stack.Top().X - 1, Stack.Top().Y + 0));
					break;

					//West neighbor chosen
				case 3:

					Maze[OffsetFunc(0, 0)] |= PATH_WEST;
					Maze[OffsetFunc(1, 0)] |= PATH_EAST;

					Stack.Add(FVector2D(Stack.Top().X + 1, Stack.Top().Y + 0));
					break;

					//If we somehow end up with an unlisted value, just don't do anything
				default:
					break;
				}

				//Now we're dealing with a new cell, which was just choswen in the previous switch statement

				//Tell this new cell that it's been visited...
				Maze[OffsetFunc(0, 0)] |= VISITED;

				//...and increase the number of cells that we've visited by one
				VisitedCells++;

			}
			else
			{
				//Pop the top cell off of the stack (effectively moving back a cell) and try again
				Stack.Pop();
			}
		}

		//If we made it through all of that, there should be a brand-new maze, and we can return success
		return true;
	}

	//But if we couldn't build a maze from the given width and length, then return failure
	return false;
}


//Constructing the actual maze meshes (floors, walls, etc.) from the information compiled in GenerateMaze()
bool ACPP_MazeGenerator::BuildMeshes()
{
	
	//If we can successfully generate a maze...
	if (GenerateMaze())
	{
		
		//...then for each cell in the maze array:
		for (int i = 0; i < Maze.Num(); i++)
		{
			//Add in the floor
			FVector MeshLocation = FVector((i % MazeWidth) * GridSize, (i / MazeWidth) * GridSize, 0);

			FTransform MeshTransform = FTransform(FRotator(), MeshLocation, FVector(1));

			MazeFloors->AddInstance(MeshTransform);


			//Add in the ceiling
			MeshLocation = FVector((i % MazeWidth) * GridSize, (i / MazeWidth) * GridSize, CeilingHeight);

			MeshTransform = FTransform(FRotator(), MeshLocation, FVector(1));

			MazeCeilings->AddInstance(MeshTransform);


			//Add in the lights if the area is not set for darkness
			MeshLocation = FVector(((i % MazeWidth) * GridSize) + (GridSize / 2), ((i / MazeWidth) * GridSize) + (GridSize / 2), CeilingHeight);


			//If we manage to exceed the threshold for spawning a light...
			if (Stream.FRandRange(-1, 1) > DarknessOffset + FMath::PerlinNoise2D(
				FVector2D(
					MeshLocation.X * DarknessScale + 0.1,
					MeshLocation.Y * DarknessScale + 0.1)
					)
				)
			{
				//...then spawn the light.
				MeshTransform = FTransform(FRotator(), MeshLocation - FVector(0, 0, 30), FVector(1));

				FActorSpawnParameters SpawnInfo = FActorSpawnParameters();

				ACPP_EnvironmentLight* NewLight = GetWorld()->SpawnActor<ACPP_EnvironmentLight>(LightClass, MeshTransform, SpawnInfo);


				//Determine the likelihood of the light you just spawned flickering
				float FlickerModifier = DarknessOffset + FMath::PerlinNoise2D(FVector2D(MeshLocation.X * DarknessScale + 0.1, MeshLocation.Y * DarknessScale + 0.1));

				//If the light would be more likely to flicker, then make it so
				if (FlickerModifier > 0)
				{
					NewLight->FlickerChance += FlickerModifier;
				}
			}


			//Add in any required southern walls
			MeshLocation = FVector((i % MazeWidth) * GridSize, ((i / MazeWidth) * GridSize) + GridSize, 0);
			
			//If there is no path to the south and we don't exclude the wall due to low claustrophobia in the area,
			//OR if the cell is in the final row,
			
			if ((!(Maze[i] & PATH_SOUTH) && Stream.FRandRange(-1,1) > ClaustrophobiaOffset + FMath::PerlinNoise2D(FVector2D(
						MeshLocation.X * ClaustrophobiaScale + 0.1,
					MeshLocation.Y * ClaustrophobiaScale + 0.1
						)
					)
				)
				||  (i / MazeWidth >= MazeHeight - 1)
			)
			{
				//then add the wall.
				MeshTransform = FTransform(FRotator(), MeshLocation, FVector(1));

				MazeWalls->AddInstance(MeshTransform);
			}


			//Add in any required western walls
			MeshLocation = FVector(((i % MazeWidth) * GridSize) + GridSize, ((i / MazeWidth) * GridSize), 0);

			//If there is no path to the west and we don't exclude the wall due to low claustrophobia in the area,
			//OR if the cell is in the final column,
			if ((!(Maze[i] & PATH_WEST) && Stream.FRandRange(-1, 1) > ClaustrophobiaOffset + FMath::PerlinNoise2D(FVector2D(MeshLocation.X * ClaustrophobiaScale + 0.1, MeshLocation.Y * ClaustrophobiaScale + 0.1)))
				|| (i % MazeWidth == MazeWidth -1)
			)
			{
				//then add the wall.
				MeshTransform = FTransform(FRotator(0, 90, 0), MeshLocation, FVector(1));

				MazeWalls->AddInstance(MeshTransform);
			}

			//The reason we consider only southern and western walls is that if we 
			//were to also build northern and eastern walls, 
			//there would be dozens of duplicates, as for any cell that is not connected to its neighbor
			//its neighbor is also not connected to it


			//Now generate the northern and eastern edge walls that were missed by the earlier section

			//If the cell is in the first row,
			if (i % MazeWidth == 0)
			{
				//then add the wall.
				MeshLocation = FVector((i % MazeWidth) * GridSize, ((i / MazeWidth) * GridSize), 0);

				MeshTransform = FTransform(FRotator(0, 90, 0), MeshLocation, FVector(1));

				MazeWalls->AddInstance(MeshTransform);
			}
			
			//If the cell is in the first column,
			if (i < MazeWidth)
			{
				//then add the wall.
				MeshLocation = FVector(((i % MazeWidth) * GridSize), ((i / MazeWidth) * GridSize), 0);

				MeshTransform = FTransform(FRotator(), MeshLocation, FVector(1));

				MazeWalls->AddInstance(MeshTransform);
			}

		}

		//This only needs to happen on the server because ExitHatch objects are replicated
		if (GetLocalRole() == ROLE_Authority)
		{
			//Find a random tile (excluding the spawn tile) and place the end objective in the middle of it

			FActorSpawnParameters SpawnParams = FActorSpawnParameters();

			int HatchGridX = Stream.RandRange(1, MazeWidth - 1);
			float HatchLocX = HatchGridX * GridSize;

			int HatchGridY = Stream.RandRange(1, MazeHeight - 1);
			float HatchLocY = HatchGridY * GridSize;

			FVector HatchLocation = FVector(HatchLocX + 0.5 * GridSize, HatchLocY + 0.5 * GridSize, 0);
			FTransform HatchTransform = FTransform(FRotator(), HatchLocation, FVector(1));

			ACPP_ExitHatch* Hatch = GetWorld()->SpawnActor<ACPP_ExitHatch>(EscapeHatchClass, HatchTransform, SpawnParams);

			Hatch->CurrentX = HatchGridX;
			Hatch->CurrentY = HatchGridY;

			//Tell the objective to place its 'keys' around the map.
			//These keys could be generators, valves, switches, or some other interactible that will unlock the elevel's objective
			Hatch->CreateKeys(Stream.GetCurrentSeed(), MazeWidth, MazeHeight, GridSize);
		}


		//If we successfully generated a maze earlier, then we can return true
		return true;
	}

	//But is there is no maze to generate, return false
	return false;
}

//Called by clients when Seed changes on the server.
//This allows the MazeGenerator to only build a maze after syncing up to the server's maze seed
void ACPP_MazeGenerator::OnRep_Seed()
{
	BuildMeshes();
}

//The only thing that needs to be replicated is the seed, and only once as the level begins
void ACPP_MazeGenerator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACPP_MazeGenerator, Seed);
}



