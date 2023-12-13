// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Triiodide_Interview/CPP_MazeGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_MazeGenerator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_EnvironmentLight_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_ExitHatch_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_MazeGenerator();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_MazeGenerator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_MazeGenerator::execOnRep_Seed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Seed();
		P_NATIVE_END;
	}
	void ACPP_MazeGenerator::StaticRegisterNativesACPP_MazeGenerator()
	{
		UClass* Class = ACPP_MazeGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Seed", &ACPP_MazeGenerator::execOnRep_Seed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_MazeGenerator_OnRep_Seed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_MazeGenerator_OnRep_Seed_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Called when the client receives the maze seed from the server\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the client receives the maze seed from the server" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_MazeGenerator_OnRep_Seed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_MazeGenerator, nullptr, "OnRep_Seed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MazeGenerator_OnRep_Seed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_MazeGenerator_OnRep_Seed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACPP_MazeGenerator_OnRep_Seed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_MazeGenerator_OnRep_Seed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_MazeGenerator);
	UClass* Z_Construct_UClass_ACPP_MazeGenerator_NoRegister()
	{
		return ACPP_MazeGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_MazeGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MazeWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MazeWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MazeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MazeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CeilingHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CeilingHeight;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Maze_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maze_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Maze;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaustrophobiaScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClaustrophobiaScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaustrophobiaOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClaustrophobiaOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DarknessScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DarknessScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DarknessOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DarknessOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlickerScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlickerScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlickerOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlickerOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MazeFloors_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MazeFloors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MazeCeilings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MazeCeilings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MazeWalls_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MazeWalls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MazeFloorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MazeFloorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MazeWallMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MazeWallMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MazeCeilingMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MazeCeilingMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LightClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscapeHatchClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EscapeHatchClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_MazeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_MazeGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_MazeGenerator_OnRep_Seed, "OnRep_Seed" }, // 1779767362
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_MazeGenerator.h" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWidth_MetaData[] = {
		{ "Category", "Maze Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Number of columns in the grid\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of columns in the grid" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWidth = { "MazeWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWidth_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeHeight_MetaData[] = {
		{ "Category", "Maze Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Number of rows in the grid\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of rows in the grid" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeHeight = { "MazeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeHeight_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "Maze Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Actual distance between cells, should be set based on floor tile size\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actual distance between cells, should be set based on floor tile size" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, GridSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_GridSize_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_GridSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_CeilingHeight_MetaData[] = {
		{ "Category", "Maze Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//It's the height... of the ceiling. Should be set based on the height of wall models\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It's the height... of the ceiling. Should be set based on the height of wall models" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_CeilingHeight = { "CeilingHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, CeilingHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_CeilingHeight_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_CeilingHeight_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze_Inner = { "Maze", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze_MetaData[] = {
		{ "Category", "CPP_MazeGenerator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The array that stores the information for every cell in the maze\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The array that stores the information for every cell in the maze" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze = { "Maze", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, Maze), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Seed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The seed used in the maze generation\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The seed used in the maze generation" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Seed = { "Seed", "OnRep_Seed", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Seed_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Seed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaScale_MetaData[] = {
		{ "Category", "Claustrophobia" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The scale or the Perlin noise map used to remove walls from the maze.\n//This controls how granular the 'biomes' are.\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The scale or the Perlin noise map used to remove walls from the maze.\nThis controls how granular the 'biomes' are." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaScale = { "ClaustrophobiaScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, ClaustrophobiaScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaScale_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaOffset_MetaData[] = {
		{ "Category", "Claustrophobia" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The likelihood of a wall being placed can be raised or lowered by modifying this value.\n//Should be set between -1 and 1.\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The likelihood of a wall being placed can be raised or lowered by modifying this value.\nShould be set between -1 and 1." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaOffset = { "ClaustrophobiaOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, ClaustrophobiaOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaOffset_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessScale_MetaData[] = {
		{ "Category", "Darkness" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//These are similar to Claustrophobia, but with lights\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These are similar to Claustrophobia, but with lights" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessScale = { "DarknessScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, DarknessScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessScale_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessOffset_MetaData[] = {
		{ "Category", "Darkness" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Represents a change in the likelihood of a light being spawned in a given cell\n//Should be set between -1 and 1.\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a change in the likelihood of a light being spawned in a given cell\nShould be set between -1 and 1." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessOffset = { "DarknessOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, DarknessOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessOffset_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerScale_MetaData[] = {
		{ "Category", "Light Flicker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//See line 51, but with light flicker\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See line 51, but with light flicker" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerScale = { "FlickerScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, FlickerScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerScale_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerOffset_MetaData[] = {
		{ "Category", "Light Flicker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Represents a change in the likelihood of a flicker happening.\n//Should be set between 0 and 1.\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a change in the likelihood of a flicker happening.\nShould be set between 0 and 1." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerOffset = { "FlickerOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, FlickerOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerOffset_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloors_MetaData[] = {
		{ "Category", "CPP_MazeGenerator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Heirarchical Instanced Static Mesh components that handle the meshes in the maze\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Heirarchical Instanced Static Mesh components that handle the meshes in the maze" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloors = { "MazeFloors", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeFloors), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloors_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilings_MetaData[] = {
		{ "Category", "CPP_MazeGenerator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilings = { "MazeCeilings", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeCeilings), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilings_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWalls_MetaData[] = {
		{ "Category", "CPP_MazeGenerator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWalls = { "MazeWalls", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeWalls), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWalls_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWalls_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloorMesh_MetaData[] = {
		{ "Category", "Meshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The actual mesh references to be used when building the maze\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actual mesh references to be used when building the maze" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloorMesh = { "MazeFloorMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeFloorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloorMesh_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloorMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWallMesh_MetaData[] = {
		{ "Category", "Meshes" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWallMesh = { "MazeWallMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeWallMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWallMesh_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWallMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilingMesh_MetaData[] = {
		{ "Category", "Meshes" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilingMesh = { "MazeCeilingMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeCeilingMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilingMesh_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilingMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_LightClass_MetaData[] = {
		{ "Category", "Lights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The class of light to be used by the generator\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class of light to be used by the generator" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_LightClass = { "LightClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, LightClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACPP_EnvironmentLight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_LightClass_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_LightClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_EscapeHatchClass_MetaData[] = {
		{ "Category", "Escape Hatch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The class of exit hatch to use in the level\n" },
#endif
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class of exit hatch to use in the level" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_EscapeHatchClass = { "EscapeHatchClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MazeGenerator, EscapeHatchClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACPP_ExitHatch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_EscapeHatchClass_MetaData), Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_EscapeHatchClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_MazeGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_CeilingHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWalls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWallMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_LightClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_EscapeHatchClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_MazeGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_MazeGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::ClassParams = {
		&ACPP_MazeGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_MazeGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_MazeGenerator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACPP_MazeGenerator()
	{
		if (!Z_Registration_Info_UClass_ACPP_MazeGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_MazeGenerator.OuterSingleton, Z_Construct_UClass_ACPP_MazeGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_MazeGenerator.OuterSingleton;
	}
	template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<ACPP_MazeGenerator>()
	{
		return ACPP_MazeGenerator::StaticClass();
	}

	void ACPP_MazeGenerator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Seed(TEXT("Seed"));

		const bool bIsValid = true
			&& Name_Seed == ClassReps[(int32)ENetFields_Private::Seed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACPP_MazeGenerator"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_MazeGenerator);
	ACPP_MazeGenerator::~ACPP_MazeGenerator() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_MazeGenerator, ACPP_MazeGenerator::StaticClass, TEXT("ACPP_MazeGenerator"), &Z_Registration_Info_UClass_ACPP_MazeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_MazeGenerator), 2325908326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_2807616996(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
