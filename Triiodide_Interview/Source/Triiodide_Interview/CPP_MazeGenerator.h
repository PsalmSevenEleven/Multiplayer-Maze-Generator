// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/HierarchicalInstancedStaticMeshComponent.h"

#include "CPP_MazeGenerator.generated.h"

UCLASS()
class TRIIODIDE_INTERVIEW_API ACPP_MazeGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_MazeGenerator();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MazeWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MazeHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> Maze;

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

	
	TArray<FVector2D> Stack;

	
	int VisitedCells;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float GridSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CeilingHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMesh* MazeFloorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMesh* MazeWallMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMesh* MazeCeilingMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UHierarchicalInstancedStaticMeshComponent* MazeFloors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UHierarchicalInstancedStaticMeshComponent* MazeCeilings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UHierarchicalInstancedStaticMeshComponent* MazeWalls;

	

	UPROPERTY(ReplicatedUsing = OnRep_Seed)
		int Seed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRandomStream Stream;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool InitMaze();

	bool GenerateMaze();

	bool BuildMeshes();

	UFUNCTION()
	void OnRep_Seed();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
