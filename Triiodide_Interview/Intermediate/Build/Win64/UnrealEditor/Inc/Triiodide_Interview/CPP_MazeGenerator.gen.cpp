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
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_MazeGenerator_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_MazeGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_EnvironmentLight_NoRegister();
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
		{ "Comment", "//Called when the client recieves the maze seed from the server\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "Called when the client recieves the maze seed from the server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_MazeGenerator_OnRep_Seed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_MazeGenerator, nullptr, "OnRep_Seed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_MazeGenerator_OnRep_Seed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MazeGenerator_OnRep_Seed_Statics::Function_MetaDataParams)) };
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
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MazeWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MazeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MazeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CeilingHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CeilingHeight;
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
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Maze_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maze_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Maze;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_MazeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_MazeGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_MazeGenerator_OnRep_Seed, "OnRep_Seed" }, // 4152577368
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_MazeGenerator.h" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWidth_MetaData[] = {
		{ "Category", "Maze Generation" },
		{ "Comment", "//Number of columns in the grid\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "Number of columns in the grid" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWidth = { "MazeWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeWidth), METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeHeight_MetaData[] = {
		{ "Category", "Maze Generation" },
		{ "Comment", "//Number of rows in the grid\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "Number of rows in the grid" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeHeight = { "MazeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeHeight), METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "Maze Generation" },
		{ "Comment", "//Actual distance between cells, should be set based on floor tile size\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "Actual distance between cells, should be set based on floor tile size" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, GridSize), METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_CeilingHeight_MetaData[] = {
		{ "Category", "Maze Generation" },
		{ "Comment", "//It's the height... of the ceiling. Should be set based on the height of wall models\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "It's the height... of the ceiling. Should be set based on the height of wall models" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_CeilingHeight = { "CeilingHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, CeilingHeight), METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_CeilingHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_CeilingHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaScale_MetaData[] = {
		{ "Category", "Claustrophobia" },
		{ "Comment", "//The scale or the Perlin noise map used to remove walls from the maze.\n//This controls how granular the 'biomes' are.\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "The scale or the Perlin noise map used to remove walls from the maze.\nThis controls how granular the 'biomes' are." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaScale = { "ClaustrophobiaScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, ClaustrophobiaScale), METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaOffset_MetaData[] = {
		{ "Category", "Claustrophobia" },
		{ "Comment", "//The likelihood of a wall being placed can be raised or lowered by modifying this value.\n//Should be set between -1 and 1.\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "The likelihood of a wall being placed can be raised or lowered by modifying this value.\nShould be set between -1 and 1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaOffset = { "ClaustrophobiaOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, ClaustrophobiaOffset), METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessScale_MetaData[] = {
		{ "Category", "Darkness" },
		{ "Comment", "//These are similar to Claustrophobia, but with lights\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "These are similar to Claustrophobia, but with lights" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessScale = { "DarknessScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, DarknessScale), METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessOffset_MetaData[] = {
		{ "Category", "Darkness" },
		{ "Comment", "//Represents a change in the likelihood of a light being spawned in a given cell\n//Should be set between -1 and 1.\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "Represents a change in the likelihood of a light being spawned in a given cell\nShould be set between -1 and 1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessOffset = { "DarknessOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, DarknessOffset), METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerScale_MetaData[] = {
		{ "Category", "Light Flicker" },
		{ "Comment", "//See line 51, but with light flicker\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "See line 51, but with light flicker" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerScale = { "FlickerScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, FlickerScale), METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerOffset_MetaData[] = {
		{ "Category", "Light Flicker" },
		{ "Comment", "//Represents a change in the likelihood of a flicker happening.\n//Should be set between 0 and 1.\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "Represents a change in the likelihood of a flicker happening.\nShould be set between 0 and 1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerOffset = { "FlickerOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, FlickerOffset), METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerOffset_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze_Inner = { "Maze", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze_MetaData[] = {
		{ "Category", "CPP_MazeGenerator" },
		{ "Comment", "//The array that stores the information for every cell in the maze\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "The array that stores the information for every cell in the maze" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze = { "Maze", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, Maze), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloorMesh_MetaData[] = {
		{ "Category", "Meshes" },
		{ "Comment", "//The actual mesh references to be used when building the maze\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "The actual mesh references to be used when building the maze" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloorMesh = { "MazeFloorMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeFloorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWallMesh_MetaData[] = {
		{ "Category", "Meshes" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWallMesh = { "MazeWallMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeWallMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWallMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWallMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilingMesh_MetaData[] = {
		{ "Category", "Meshes" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilingMesh = { "MazeCeilingMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, MazeCeilingMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilingMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_LightClass_MetaData[] = {
		{ "Category", "Lights" },
		{ "Comment", "//The class of light to be used by the generator\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "The class of light to be used by the generator" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_LightClass = { "LightClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, LightClass), Z_Construct_UClass_ACPP_EnvironmentLight_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_LightClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_LightClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Seed_MetaData[] = {
		{ "Comment", "//The seed used in the maze generation\n" },
		{ "ModuleRelativePath", "CPP_MazeGenerator.h" },
		{ "ToolTip", "The seed used in the maze generation" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Seed = { "Seed", "OnRep_Seed", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_MazeGenerator, Seed), METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Seed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_MazeGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_CeilingHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_ClaustrophobiaOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_DarknessOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_FlickerOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Maze,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeFloorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeWallMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_MazeCeilingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_LightClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MazeGenerator_Statics::NewProp_Seed,
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
		METADATA_PARAMS(Z_Construct_UClass_ACPP_MazeGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MazeGenerator_Statics::Class_MetaDataParams))
	};
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
	struct Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_MazeGenerator, ACPP_MazeGenerator::StaticClass, TEXT("ACPP_MazeGenerator"), &Z_Registration_Info_UClass_ACPP_MazeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_MazeGenerator), 3939824244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_626299951(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
