// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Triiodide_Interview/Triiodide_InterviewGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriiodide_InterviewGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ATriiodide_InterviewGameMode();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ATriiodide_InterviewGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
// End Cross Module References
	void ATriiodide_InterviewGameMode::StaticRegisterNativesATriiodide_InterviewGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriiodide_InterviewGameMode);
	UClass* Z_Construct_UClass_ATriiodide_InterviewGameMode_NoRegister()
	{
		return ATriiodide_InterviewGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Triiodide_InterviewGameMode.h" },
		{ "ModuleRelativePath", "Triiodide_InterviewGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriiodide_InterviewGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::ClassParams = {
		&ATriiodide_InterviewGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriiodide_InterviewGameMode()
	{
		if (!Z_Registration_Info_UClass_ATriiodide_InterviewGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriiodide_InterviewGameMode.OuterSingleton, Z_Construct_UClass_ATriiodide_InterviewGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriiodide_InterviewGameMode.OuterSingleton;
	}
	template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<ATriiodide_InterviewGameMode>()
	{
		return ATriiodide_InterviewGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriiodide_InterviewGameMode);
	ATriiodide_InterviewGameMode::~ATriiodide_InterviewGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriiodide_InterviewGameMode, ATriiodide_InterviewGameMode::StaticClass, TEXT("ATriiodide_InterviewGameMode"), &Z_Registration_Info_UClass_ATriiodide_InterviewGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriiodide_InterviewGameMode), 2945101167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewGameMode_h_3051477619(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_GitHub_Triiodide_Training_Project_Triiodide_Interview_Source_Triiodide_Interview_Triiodide_InterviewGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
