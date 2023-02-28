// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MazeGenerator.h"

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

bool ACPP_MazeGenerator::BuildMeshes()
{
	
	if (GenerateMaze())
	{
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


			//Add in any required southern walls
			if (!(Maze[i] & PATH_SOUTH))
			{
				MeshLocation = FVector((i % MazeWidth) * GridSize, ((i / MazeWidth) * GridSize) + GridSize, 0);

				MeshTransform = FTransform(FRotator(), MeshLocation, FVector(1));

				MazeWalls->AddInstance(MeshTransform);
			}

			//Add in any required western walls
			if (!(Maze[i] & PATH_WEST))
			{
				MeshLocation = FVector(((i % MazeWidth) * GridSize) + GridSize, ((i / MazeWidth) * GridSize) , 0);

				MeshTransform = FTransform(FRotator(0, 90, 0), MeshLocation, FVector(1));

				MazeWalls->AddInstance(MeshTransform);
			}

			if (i % MazeHeight == 0)
			{
				MeshLocation = FVector((i % MazeWidth) * GridSize, ((i / MazeWidth) * GridSize), 0);

				MeshTransform = FTransform(FRotator(0, 90, 0), MeshLocation, FVector(1));

				MazeWalls->AddInstance(MeshTransform);
			}

			if (i % MazeWidth == 0)
			{
				MeshLocation = FVector(((i / MazeWidth) * GridSize), ((i % MazeWidth) * GridSize), 0);

				MeshTransform = FTransform(FRotator(), MeshLocation, FVector(1));

				MazeWalls->AddInstance(MeshTransform);
			}

		}

		return true;
	}

	return false;
}

void ACPP_MazeGenerator::OnRep_Seed()
{

	BuildMeshes();
}

void ACPP_MazeGenerator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACPP_MazeGenerator, Seed);
}



