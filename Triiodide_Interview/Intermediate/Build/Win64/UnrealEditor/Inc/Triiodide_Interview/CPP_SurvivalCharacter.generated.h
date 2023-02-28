// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIIODIDE_INTERVIEW_CPP_SurvivalCharacter_generated_h
#error "CPP_SurvivalCharacter.generated.h already included, missing '#pragma once' in CPP_SurvivalCharacter.h"
#endif
#define TRIIODIDE_INTERVIEW_CPP_SurvivalCharacter_generated_h

#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_SPARSE_DATA
#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_RPC_WRAPPERS \
	virtual void ServerLook_Implementation(FRotator Rot); \
	virtual void ServerInteract_Implementation(); \
 \
	DECLARE_FUNCTION(execServerLook); \
	DECLARE_FUNCTION(execServerInteract);


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerLook_Implementation(FRotator Rot); \
	virtual void ServerInteract_Implementation(); \
 \
	DECLARE_FUNCTION(execServerLook); \
	DECLARE_FUNCTION(execServerInteract);


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_EVENT_PARMS \
	struct CPP_SurvivalCharacter_eventServerLook_Parms \
	{ \
		FRotator Rot; \
	};


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_CALLBACK_WRAPPERS
#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_SurvivalCharacter(); \
	friend struct Z_Construct_UClass_ACPP_SurvivalCharacter_Statics; \
public: \
	DECLARE_CLASS(ACPP_SurvivalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Triiodide_Interview"), NO_API) \
	DECLARE_SERIALIZER(ACPP_SurvivalCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CameraBoom=NETFIELD_REP_START, \
		ControlRotation, \
		NETFIELD_REP_END=ControlRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACPP_SurvivalCharacter(); \
	friend struct Z_Construct_UClass_ACPP_SurvivalCharacter_Statics; \
public: \
	DECLARE_CLASS(ACPP_SurvivalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Triiodide_Interview"), NO_API) \
	DECLARE_SERIALIZER(ACPP_SurvivalCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CameraBoom=NETFIELD_REP_START, \
		ControlRotation, \
		NETFIELD_REP_END=ControlRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_SurvivalCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_SurvivalCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_SurvivalCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_SurvivalCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_SurvivalCharacter(ACPP_SurvivalCharacter&&); \
	NO_API ACPP_SurvivalCharacter(const ACPP_SurvivalCharacter&); \
public:


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_SurvivalCharacter(ACPP_SurvivalCharacter&&); \
	NO_API ACPP_SurvivalCharacter(const ACPP_SurvivalCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_SurvivalCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_SurvivalCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_SurvivalCharacter)


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_10_PROLOG \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_EVENT_PARMS


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_SPARSE_DATA \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_RPC_WRAPPERS \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_CALLBACK_WRAPPERS \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_INCLASS \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_SPARSE_DATA \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_CALLBACK_WRAPPERS \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<class ACPP_SurvivalCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
