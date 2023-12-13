// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Triiodide_Interview/CPP_EnvironmentLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_EnvironmentLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_EnvironmentLight();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_EnvironmentLight_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_EnvironmentLight::execFlickerCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlickerCheck();
		P_NATIVE_END;
	}
	static FName NAME_ACPP_EnvironmentLight_Flicker = FName(TEXT("Flicker"));
	void ACPP_EnvironmentLight::Flicker()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACPP_EnvironmentLight_Flicker),NULL);
	}
	void ACPP_EnvironmentLight::StaticRegisterNativesACPP_EnvironmentLight()
	{
		UClass* Class = ACPP_EnvironmentLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlickerCheck", &ACPP_EnvironmentLight::execFlickerCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_EnvironmentLight_Flicker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_EnvironmentLight_Flicker_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint native event for easier customizability\n" },
#endif
		{ "ModuleRelativePath", "CPP_EnvironmentLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint native event for easier customizability" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_EnvironmentLight_Flicker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_EnvironmentLight, nullptr, "Flicker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_EnvironmentLight_Flicker_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_EnvironmentLight_Flicker_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACPP_EnvironmentLight_Flicker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_EnvironmentLight_Flicker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_EnvironmentLight_FlickerCheck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_EnvironmentLight_FlickerCheck_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Try to flicker\n" },
#endif
		{ "ModuleRelativePath", "CPP_EnvironmentLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to flicker" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_EnvironmentLight_FlickerCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_EnvironmentLight, nullptr, "FlickerCheck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_EnvironmentLight_FlickerCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_EnvironmentLight_FlickerCheck_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACPP_EnvironmentLight_FlickerCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_EnvironmentLight_FlickerCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_EnvironmentLight);
	UClass* Z_Construct_UClass_ACPP_EnvironmentLight_NoRegister()
	{
		return ACPP_EnvironmentLight::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_EnvironmentLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Light;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlickerCheckTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlickerCheckTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlickerMinMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlickerMinMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlickerChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlickerChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightIntensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_EnvironmentLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnvironmentLight_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_EnvironmentLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_EnvironmentLight_Flicker, "Flicker" }, // 2083298836
		{ &Z_Construct_UFunction_ACPP_EnvironmentLight_FlickerCheck, "FlickerCheck" }, // 1888214523
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnvironmentLight_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_EnvironmentLight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_EnvironmentLight.h" },
		{ "ModuleRelativePath", "CPP_EnvironmentLight.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_Light_MetaData[] = {
		{ "Category", "CPP_EnvironmentLight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The actual point light\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_EnvironmentLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actual point light" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_EnvironmentLight, Light), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_Light_MetaData), Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_Light_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_AudioComp_MetaData[] = {
		{ "Category", "CPP_EnvironmentLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_EnvironmentLight.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_EnvironmentLight, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_AudioComp_MetaData), Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_AudioComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerCheckTime_MetaData[] = {
		{ "Category", "CPP_EnvironmentLight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The time between flicker checks\n" },
#endif
		{ "ModuleRelativePath", "CPP_EnvironmentLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time between flicker checks" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerCheckTime = { "FlickerCheckTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_EnvironmentLight, FlickerCheckTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerCheckTime_MetaData), Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerCheckTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerMinMultiplier_MetaData[] = {
		{ "Category", "CPP_EnvironmentLight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is multiplied by LightIntensity to determine how dark the flicker should go\n" },
#endif
		{ "ModuleRelativePath", "CPP_EnvironmentLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is multiplied by LightIntensity to determine how dark the flicker should go" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerMinMultiplier = { "FlickerMinMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_EnvironmentLight, FlickerMinMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerMinMultiplier_MetaData), Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerMinMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerChance_MetaData[] = {
		{ "Category", "CPP_EnvironmentLight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//How likely a light is to flicker, on a 0 to 1 scale\n" },
#endif
		{ "ModuleRelativePath", "CPP_EnvironmentLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How likely a light is to flicker, on a 0 to 1 scale" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerChance = { "FlickerChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_EnvironmentLight, FlickerChance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerChance_MetaData), Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerChance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_LightIntensity_MetaData[] = {
		{ "Category", "CPP_EnvironmentLight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The intensity of the light, used in the flicker\n" },
#endif
		{ "ModuleRelativePath", "CPP_EnvironmentLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The intensity of the light, used in the flicker" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_LightIntensity = { "LightIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_EnvironmentLight, LightIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_LightIntensity_MetaData), Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_LightIntensity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_EnvironmentLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_Light,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_AudioComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerCheckTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerMinMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_FlickerChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_EnvironmentLight_Statics::NewProp_LightIntensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_EnvironmentLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_EnvironmentLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_EnvironmentLight_Statics::ClassParams = {
		&ACPP_EnvironmentLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_EnvironmentLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnvironmentLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnvironmentLight_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_EnvironmentLight_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_EnvironmentLight_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACPP_EnvironmentLight()
	{
		if (!Z_Registration_Info_UClass_ACPP_EnvironmentLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_EnvironmentLight.OuterSingleton, Z_Construct_UClass_ACPP_EnvironmentLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_EnvironmentLight.OuterSingleton;
	}
	template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<ACPP_EnvironmentLight>()
	{
		return ACPP_EnvironmentLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_EnvironmentLight);
	ACPP_EnvironmentLight::~ACPP_EnvironmentLight() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_EnvironmentLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_EnvironmentLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_EnvironmentLight, ACPP_EnvironmentLight::StaticClass, TEXT("ACPP_EnvironmentLight"), &Z_Registration_Info_UClass_ACPP_EnvironmentLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_EnvironmentLight), 2653668607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_EnvironmentLight_h_2102793689(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_EnvironmentLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_CPP_EnvironmentLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
