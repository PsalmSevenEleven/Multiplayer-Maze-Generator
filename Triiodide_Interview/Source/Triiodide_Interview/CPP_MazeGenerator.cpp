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
	MazeFloors->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MazeFloors->SetupAttachment(RootComponent);

	MazeWalls = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>("Wall Meshes");
	MazeWalls->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MazeWalls->SetupAttachment(RootComponent);

	MazeCeilings = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>("Ceiling Meshes");
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
		InitMaze();
		GenerateMaze();
		BuildMeshes();
	}
}

void ACPP_MazeGenerator::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	MazeFloors->SetStaticMesh(MazeFloorMesh);
	MazeWalls->SetStaticMesh(MazeWallMesh);
	MazeCeilings->SetStaticMesh(MazeCeilingMesh);	
}

//This method makes sure we can generate a maze from the supplied parameters, 
// and then performs some setup before any actual algorithm voodoo.
void ACPP_MazeGenerator::InitMaze()
{
	//Make sure that the maze actually has some with and length,
	//because a maze with a 0 in either parameter would simply not exist
	ensure(MazeWidth > 0 && MazeHeight > 0);

	//Clean out the current maze, just in case it isn't already empty
	Maze.Empty();

	//Initialize the array with an appropriate number of empty values
	for (int i = 0; i < MazeWidth * MazeHeight; i++)
	{
		Maze.Add(0x00);
	}

	//Add the first "cell" to the array as a starting point...
	Stack.Add(FVector2D(0, 0));
	//...tell it that it's been visited (because it's our starting point)...
	Maze[0] = VISITED;
		
	//Initialize the 'random' stream with the seed determined by the server
	Stream = FRandomStream(Seed);
}


//This method actually generates the maze.
//I've chosen to use the Recursive Back-Tracker algorithm 
//for it's inherent scalability to 3 dimensions and relatively simple implementation

//Here's an excellent explanation of how the algorithm works, 
//as well as a straightforward C++ implementation (not Unreal, unfortunately)
// https://www.youtube.com/watch?v=Y37-gB83HKE
void ACPP_MazeGenerator::GenerateMaze()
{
	
	//Check that we can build a maze from the given parameters (also performs required setup)
	ensure(Maze.Num() > 0);
	
	//A quick lambda that will prove its worth shortly.
	//Basically just allows the programmer (me) to get a cell in the grid
	//while treating the current cell as the origin
	auto OffsetFunc = [&](int x, int y)
	{
		return (Stack.Top().Y + y) * MazeWidth + (Stack.Top().X + x);
	};

	//Once for every unvisited cell, write maze cell data to Maze[]
	//i does not increment in the for loop because it is used to track the number of visited cells,
	//meaning that the for loop can execute more than MazeHeight * MazeWidth times
	for (int i = 1; i< MazeHeight * MazeWidth; i += 0) 
	{
		//Temporary array to store all of the valid
		//(directly adjacent to the current cell, within the bounds of the maze, and un-visited) cell options
		TArray<FVector4> ValidNeighbors;
		
		//Check northern neighbor
		if (Stack.Top().Y > 0 && !(Maze[OffsetFunc(0, -1)] >> 4))
		{
			//If the cell in question meets the criteria, it gets added to ValidNeighbors, 
			//from which a random value is chosen at the end of these checks
			ValidNeighbors.Add(FVector4(0, -1, PATH_NORTH, PATH_SOUTH));
		}
		
		//Check southern neighbor
		if (Stack.Top().Y < (MazeHeight - 1) && !(Maze[OffsetFunc(0, 1)] >> 4))
		{
			ValidNeighbors.Add(FVector4(0, 1, PATH_SOUTH, PATH_NORTH));
		}

		//Check eastern neighbor
		if (Stack.Top().X > 0 && !(Maze[OffsetFunc(-1, 0)] >> 4))
		{
			ValidNeighbors.Add(FVector4(-1, 0, PATH_EAST, PATH_WEST));
		}

		//Check western neighbor
		if (Stack.Top().X < (MazeWidth - 1) && !(Maze[OffsetFunc(1, 0)] >> 4))
		{
			ValidNeighbors.Add(FVector4(1, 0, PATH_WEST, PATH_EAST));
		}

		
		//Make sure that there are actually valid neighbors before choosing a cell to progress to
		if (ValidNeighbors.Num() > 0)
		{
			//Random index...
			int RandIndex = FMath::RandRange(0, ValidNeighbors.Num() - 1);

			//...to choose a random direction.
			FVector4 Direction = ValidNeighbors[Stream.RandRange(0, ValidNeighbors.Num() - 1)];

			Maze[OffsetFunc(0,0)] |= (int)Direction.Z;
			Maze[OffsetFunc(Direction.X, Direction.Y)] |= (int)Direction.W;

			Stack.Add(FVector2D(Stack.Top().X + Direction.X, Stack.Top().Y + Direction.Y));
			
			//Now we're dealing with a new cell

			//Tell this new cell that it's been visited...
			Maze[OffsetFunc(0, 0)] |= VISITED;

			//...and increase the number of cells that we've visited by one
			i++;
		}
		else
		{
			//Pop the top cell off of the stack (effectively moving back a cell) and try again
			Stack.Pop();
		}
	}
}


//Constructing the actual maze meshes (floors, walls, etc.) from the information compiled in GenerateMaze()
void ACPP_MazeGenerator::BuildMeshes()
{
	
	//If we can't successfully generate a maze then the game should crash
	ensure (Stack.Num()>0);

	//We don't need the stack anymore, so we can free up that memory
	Stack.Empty();
	
	//Then for each cell in the maze array:
	for (int i = 0; i < Maze.Num(); i++)
	{
		ConstructFloorAndCeiling(i);

		//Add any lights
		ConstructLights(i);
		
		//create any southern and western walls
		ConstructWalls(i);
		
		//Now generate the northern and eastern edge walls that were missed by the earlier section
		ConstructBorders(i);
	}

	//This only needs to happen on the server because ExitHatch objects are replicated
	if (GetLocalRole() == ROLE_Authority)
	{
		CreateExitHatch();
	}
}

void ACPP_MazeGenerator::ConstructFloorAndCeiling(int Index)
{
	//Add in the floor
	FVector MeshLocation = FVector((Index % MazeWidth) * GridSize, (Index / MazeWidth) * GridSize, 0);

	FTransform MeshTransform = FTransform(FRotator(0), MeshLocation, FVector(1));

	MazeFloors->AddInstance(MeshTransform);


	//Add in the ceiling
	MeshLocation = FVector((Index % MazeWidth) * GridSize, (Index / MazeWidth) * GridSize, CeilingHeight);

	MeshTransform = FTransform(FRotator(0), MeshLocation, FVector(1));

	MazeCeilings->AddInstance(MeshTransform);
}

void ACPP_MazeGenerator::ConstructLights(int Index)
{
	//Add in the lights if the area is not set for darkness
	FVector MeshLocation = FVector(((Index % MazeWidth) * GridSize) + (GridSize / 2), ((Index / MazeWidth) * GridSize) + (GridSize / 2), CeilingHeight);

	//If we manage to exceed the threshold for spawning a light...
	if (Stream.FRandRange(-1, 1) > DarknessOffset + FMath::PerlinNoise2D(
			FVector2D(
				MeshLocation.X * DarknessScale + 0.1,
				MeshLocation.Y * DarknessScale + 0.1)
		)
	)
	{
		//...then spawn the light.
		FTransform MeshTransform = FTransform(FRotator(0), MeshLocation - FVector(0, 0, 30), FVector(1));

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

}

void ACPP_MazeGenerator::ConstructWalls(int Index)
{
	FVector MeshLocation = FVector((Index % MazeWidth) * GridSize, ((Index / MazeWidth) * GridSize) + GridSize, 0);

	FTransform MeshTransform;

	//Add in any required southern walls
	
	//If there is no path to the south and we don't exclude the wall due to low claustrophobia in the area,
	//OR if the cell is in the final row,
	if ((!(Maze[Index] & PATH_SOUTH) && Stream.FRandRange(-1,1) > ClaustrophobiaOffset + FMath::PerlinNoise2D(FVector2D(
					MeshLocation.X * ClaustrophobiaScale + 0.1,
					MeshLocation.Y * ClaustrophobiaScale + 0.1
				)
			)
		)
		||  (Index / MazeWidth >= MazeHeight - 1)
	)
	{
		//then add the wall.
		MeshTransform = FTransform(FRotator(0), MeshLocation, FVector(1));

		MazeWalls->AddInstance(MeshTransform);
	}


	//Add in any required western walls
	MeshLocation = FVector(((Index % MazeWidth) * GridSize) + GridSize, ((Index / MazeWidth) * GridSize), 0);

	//If there is no path to the west and we don't exclude the wall due to low claustrophobia in the area,
	//OR if the cell is in the final column,
	if ((!(Maze[Index] & PATH_WEST) && Stream.FRandRange(-1, 1) > ClaustrophobiaOffset + FMath::PerlinNoise2D(FVector2D(MeshLocation.X * ClaustrophobiaScale + 0.1, MeshLocation.Y * ClaustrophobiaScale + 0.1)))
		|| (Index % MazeWidth == MazeWidth -1)
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
}

//Adds in border walls to the north and east
void ACPP_MazeGenerator::ConstructBorders(int Index)
{
	FVector MeshLocation;
	FTransform MeshTransform;
	
	//If the cell is in the first row,
	if (Index % MazeWidth == 0)
	{
		//then add the wall.
		MeshLocation = FVector((Index % MazeWidth) * GridSize, ((Index / MazeWidth) * GridSize), 0);

		MeshTransform = FTransform(FRotator(0, 90, 0), MeshLocation, FVector(1));

		MazeWalls->AddInstance(MeshTransform);
	}
			
	//If the cell is in the first column,
	if (Index < MazeWidth)
	{
		//then add the wall.
		MeshLocation = FVector(((Index % MazeWidth) * GridSize), ((Index / MazeWidth) * GridSize), 0);

		MeshTransform = FTransform(FRotator(0), MeshLocation, FVector(1));

		MazeWalls->AddInstance(MeshTransform);
	}
}

void ACPP_MazeGenerator::CreateExitHatch()
{
	//Find a random tile (excluding the spawn tile) and place the end objective in the middle of it

	FActorSpawnParameters SpawnParams = FActorSpawnParameters();

	//Min is 1 here to exclude the spawn cell
	int HatchGridX = Stream.RandRange(1, MazeWidth - 1);
	float HatchLocX = HatchGridX * GridSize;

	int HatchGridY = Stream.RandRange(1, MazeHeight - 1);
	float HatchLocY = HatchGridY * GridSize;

	FVector HatchLocation = FVector(HatchLocX + 0.5 * GridSize, HatchLocY + 0.5 * GridSize, 0);
	FTransform HatchTransform = FTransform(FRotator(0), HatchLocation, FVector(1));

	ACPP_ExitHatch* Hatch = GetWorld()->SpawnActor<ACPP_ExitHatch>(EscapeHatchClass, HatchTransform, SpawnParams);

	Hatch->CurrentX = HatchGridX;
	Hatch->CurrentY = HatchGridY;

	//Tell the objective to place its 'keys' around the map.
	//These keys could be generators, valves, switches, or some other interactible that will unlock the level's objective
	Hatch->CreateKeys(Stream.GetCurrentSeed(), MazeWidth, MazeHeight, GridSize);
}

//Called by clients when Seed changes on the server.
//This allows the MazeGenerator to only build a maze after syncing up to the server's maze seed
void ACPP_MazeGenerator::OnRep_Seed()
{
	InitMaze();
	GenerateMaze();
	BuildMeshes();
}

//The only thing that needs to be replicated is the seed, and only once as the level begins
void ACPP_MazeGenerator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACPP_MazeGenerator, Seed);
}



