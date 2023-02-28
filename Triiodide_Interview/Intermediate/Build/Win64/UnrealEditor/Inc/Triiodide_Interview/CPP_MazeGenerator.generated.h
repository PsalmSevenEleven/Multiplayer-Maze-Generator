// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIIODIDE_INTERVIEW_CPP_MazeGenerator_generated_h
#error "CPP_MazeGenerator.generated.h already included, missing '#pragma once' in CPP_MazeGenerator.h"
#endif
#define TRIIODIDE_INTERVIEW_CPP_MazeGenerator_generated_h

#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_SPARSE_DATA
#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Seed);


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Seed);


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_MazeGenerator(); \
	friend struct Z_Construct_UClass_ACPP_MazeGenerator_Statics; \
public: \
	DECLARE_CLASS(ACPP_MazeGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Triiodide_Interview"), NO_API) \
	DECLARE_SERIALIZER(ACPP_MazeGenerator) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Seed=NETFIELD_REP_START, \
		NETFIELD_REP_END=Seed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACPP_MazeGenerator(); \
	friend struct Z_Construct_UClass_ACPP_MazeGenerator_Statics; \
public: \
	DECLARE_CLASS(ACPP_MazeGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Triiodide_Interview"), NO_API) \
	DECLARE_SERIALIZER(ACPP_MazeGenerator) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Seed=NETFIELD_REP_START, \
		NETFIELD_REP_END=Seed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_MazeGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_MazeGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_MazeGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_MazeGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_MazeGenerator(ACPP_MazeGenerator&&); \
	NO_API ACPP_MazeGenerator(const ACPP_MazeGenerator&); \
public:


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_MazeGenerator(ACPP_MazeGenerator&&); \
	NO_API ACPP_MazeGenerator(const ACPP_MazeGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_MazeGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_MazeGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_MazeGenerator)


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_14_PROLOG
#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_SPARSE_DATA \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_RPC_WRAPPERS \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_INCLASS \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_SPARSE_DATA \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_INCLASS_NO_PURE_DECLS \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<class ACPP_MazeGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_MazeGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
