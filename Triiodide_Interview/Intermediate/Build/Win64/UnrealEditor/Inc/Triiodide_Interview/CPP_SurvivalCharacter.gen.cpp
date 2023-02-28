// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Triiodide_Interview/CPP_SurvivalCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_SurvivalCharacter() {}
// Cross Module References
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_SurvivalCharacter_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_SurvivalCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_SurvivalCharacter::execServerLook)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerLook_Implementation(Z_Param_Rot);
		P_NATIVE_END;
	}
	static FName NAME_ACPP_SurvivalCharacter_ServerLook = FName(TEXT("ServerLook"));
	void ACPP_SurvivalCharacter::ServerLook(FRotator Rot)
	{
		CPP_SurvivalCharacter_eventServerLook_Parms Parms;
		Parms.Rot=Rot;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_SurvivalCharacter_ServerLook),&Parms);
	}
	void ACPP_SurvivalCharacter::StaticRegisterNativesACPP_SurvivalCharacter()
	{
		UClass* Class = ACPP_SurvivalCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerLook", &ACPP_SurvivalCharacter::execServerLook },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook_Statics::NewProp_Rot = { "Rot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_SurvivalCharacter_eventServerLook_Parms, Rot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook_Statics::NewProp_Rot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Lets the server know where the player is looking\n" },
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
		{ "ToolTip", "Lets the server know where the player is looking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_SurvivalCharacter, nullptr, "ServerLook", nullptr, nullptr, sizeof(CPP_SurvivalCharacter_eventServerLook_Parms), Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_SurvivalCharacter);
	UClass* Z_Construct_UClass_ACPP_SurvivalCharacter_NoRegister()
	{
		return ACPP_SurvivalCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_SurvivalCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerLook, "ServerLook" }, // 2716260038
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_SurvivalCharacter.h" },
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "CPP_SurvivalCharacter" },
		{ "Comment", "/*Actor components*///Camera boom\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
		{ "ToolTip", "Actor components//Camera boom" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x001000000008003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_SurvivalCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "CPP_SurvivalCharacter" },
		{ "Comment", "//Player's camera\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
		{ "ToolTip", "Player's camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_SurvivalCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MovementComp_MetaData[] = {
		{ "Category", "CPP_SurvivalCharacter" },
		{ "Comment", "//Movement component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
		{ "ToolTip", "Movement component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_SurvivalCharacter, MovementComp), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MovementComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "CPP_SurvivalCharacter" },
		{ "Comment", "/*Control-related variables*///Amount to turn when given mouse input\n" },
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
		{ "ToolTip", "Control-related variables//Amount to turn when given mouse input" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_SurvivalCharacter, MouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Comment", "//Player's control rotation\n" },
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
		{ "ToolTip", "Player's control rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_SurvivalCharacter, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_ControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_ControlRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MouseSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_ControlRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_SurvivalCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::ClassParams = {
		&ACPP_SurvivalCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_SurvivalCharacter()
	{
		if (!Z_Registration_Info_UClass_ACPP_SurvivalCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_SurvivalCharacter.OuterSingleton, Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_SurvivalCharacter.OuterSingleton;
	}
	template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<ACPP_SurvivalCharacter>()
	{
		return ACPP_SurvivalCharacter::StaticClass();
	}

	void ACPP_SurvivalCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CameraBoom(TEXT("CameraBoom"));
		static const FName Name_ControlRotation(TEXT("ControlRotation"));

		const bool bIsValid = true
			&& Name_CameraBoom == ClassReps[(int32)ENetFields_Private::CameraBoom].Property->GetFName()
			&& Name_ControlRotation == ClassReps[(int32)ENetFields_Private::ControlRotation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACPP_SurvivalCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_SurvivalCharacter);
	struct Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_SurvivalCharacter, ACPP_SurvivalCharacter::StaticClass, TEXT("ACPP_SurvivalCharacter"), &Z_Registration_Info_UClass_ACPP_SurvivalCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_SurvivalCharacter), 1314707467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_2680438024(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
