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
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_SurvivalCharacter();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_SurvivalCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_SurvivalCharacter::execServerInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerInteract_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACPP_SurvivalCharacter_ServerInteract = FName(TEXT("ServerInteract"));
	void ACPP_SurvivalCharacter::ServerInteract()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACPP_SurvivalCharacter_ServerInteract),NULL);
	}
	void ACPP_SurvivalCharacter::StaticRegisterNativesACPP_SurvivalCharacter()
	{
		UClass* Class = ACPP_SurvivalCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerInteract", &ACPP_SurvivalCharacter::execServerInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerInteract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_SurvivalCharacter, nullptr, "ServerInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerInteract_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerInteract_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerReach_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerReach;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootstepInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_SurvivalCharacter_ServerInteract, "ServerInteract" }, // 1369685363
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::FuncInfo) < 2048);
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
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x001000000008003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SurvivalCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "CPP_SurvivalCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SurvivalCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_FootstepComp_MetaData[] = {
		{ "Category", "CPP_SurvivalCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Footstep audio\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Footstep audio" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_FootstepComp = { "FootstepComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SurvivalCharacter, FootstepComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_FootstepComp_MetaData), Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_FootstepComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "CPP_SurvivalCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Amount to turn when given mouse input\n" },
#endif
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount to turn when given mouse input" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SurvivalCharacter, MouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MouseSensitivity_MetaData), Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MouseSensitivity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_PlayerReach_MetaData[] = {
		{ "Category", "CPP_SurvivalCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//How far away the player can interact with objects\n" },
#endif
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far away the player can interact with objects" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_PlayerReach = { "PlayerReach", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SurvivalCharacter, PlayerReach), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_PlayerReach_MetaData), Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_PlayerReach_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_FootstepInterval_MetaData[] = {
		{ "Category", "CPP_SurvivalCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Time between footsteps\n" },
#endif
		{ "ModuleRelativePath", "CPP_SurvivalCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time between footsteps" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_FootstepInterval = { "FootstepInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SurvivalCharacter, FootstepInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_FootstepInterval_MetaData), Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_FootstepInterval_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_FootstepComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_MouseSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_PlayerReach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::NewProp_FootstepInterval,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SurvivalCharacter_Statics::PropPointers) < 2048);
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

		const bool bIsValid = true
			&& Name_CameraBoom == ClassReps[(int32)ENetFields_Private::CameraBoom].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACPP_SurvivalCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_SurvivalCharacter);
	ACPP_SurvivalCharacter::~ACPP_SurvivalCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_SurvivalCharacter, ACPP_SurvivalCharacter::StaticClass, TEXT("ACPP_SurvivalCharacter"), &Z_Registration_Info_UClass_ACPP_SurvivalCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_SurvivalCharacter), 1066301315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_2704604251(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_SurvivalCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
