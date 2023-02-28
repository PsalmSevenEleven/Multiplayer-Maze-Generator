// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/HierarchicalInstancedStaticMeshComponent.h"

#include "CPP_EnvironmentLight.h"

#include "CPP_MazeGenerator.generated.h"

UCLASS()
class TRIIODIDE_INTERVIEW_API ACPP_MazeGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_MazeGenerator();

	//Number of columns in the grid
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Maze Generation")
		int MazeWidth;

	//Number of rows in the grid
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Maze Generation")
		int MazeHeight;

	//Actual distance between cells, should be set based on floor tile size
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Maze Generation")
		float GridSize;

	//It's the height... of the ceiling. Should be set based on the height of wall models
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Maze Generation")
		float CeilingHeight;

	
	//The scale or the Perlin noise map used to remove walls from the maze.
	//This controls how granular the 'biomes' are.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Claustrophobia")
		float ClaustrophobiaScale;

	//The likelihood of a wall being placed can be raised or lowered by modifying this value.
	//Should be set between -1 and 1.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Claustrophobia")
		float ClaustrophobiaOffset;


	//These are similar to Claustrophobia, but with lights
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Darkness")
		float DarknessScale;

	//Represents a change in the likelihood of a light being spawned in a given cell
	//Should be set between -1 and 1.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Darkness")
		float DarknessOffset;


	//See line 51, but with light flicker
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Light Flicker")
		float FlickerScale;

	//Represents a change in the likelihood of a flicker happening.
	//Should be set between 0 and 1.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Light Flicker")
		float FlickerOffset;


	//The array that stores the information for every cell in the maze
	UPROPERTY(BlueprintReadOnly)
	TArray<int> Maze;


	//The stack of cells used in the generation algorithm
	TArray<FVector2D> Stack;


	//Number of "visited" cells for exiting the while loop
	int VisitedCells;


	//These are written to indicate places as opposed to values, 
	//letting me have 01111 represent an unvisited cell with all four directions as valid neighbors,
	//10001 represent a visited cell with only the north cell as a valid neighbor, etc.
	enum
	{
		PATH_NORTH = 0x01,
		PATH_SOUTH = 0x02,
		PATH_EAST = 0x04,
		PATH_WEST = 0x08,
		VISITED = 0x10,
	};


	//The actual mesh references to be used when building the maze
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Meshes")
		UStaticMesh* MazeFloorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Meshes")
		UStaticMesh* MazeWallMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Meshes")
		UStaticMesh* MazeCeilingMesh;


	//The class of light to be used by the generator
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lights")
		TSubclassOf<ACPP_EnvironmentLight> LightClass;


	//The Heirarchical Instanced Static Mesh components that handle the meshes in the maze
	UPROPERTY(EditAnywhere)
	UHierarchicalInstancedStaticMeshComponent* MazeFloors;

	UPROPERTY(EditAnywhere)
	UHierarchicalInstancedStaticMeshComponent* MazeCeilings;

	UPROPERTY(EditAnywhere)
	UHierarchicalInstancedStaticMeshComponent* MazeWalls;

	
	//The seed used in the maze generation
	UPROPERTY(ReplicatedUsing = OnRep_Seed)
		int Seed;

	//Random stream which seeded by Seed, 
	//actually referenced in determining random directions to move during maze generator algorithm
	FRandomStream Stream;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Maze setup
	bool InitMaze();

	//Generating maze info
	bool GenerateMaze();

	//Building out the maze based on the generated info
	bool BuildMeshes();

	//Called when the client recieves the maze seed from the server
	UFUNCTION()
	void OnRep_Seed();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
