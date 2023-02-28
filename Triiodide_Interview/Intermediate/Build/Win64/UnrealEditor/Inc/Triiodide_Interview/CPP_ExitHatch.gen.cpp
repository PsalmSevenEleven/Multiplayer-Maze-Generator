// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Triiodide_Interview/CPP_ExitHatch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_ExitHatch() {}
// Cross Module References
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_ExitHatch_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_ExitHatch();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_ExitKey_NoRegister();
// End Cross Module References
	static FName NAME_ACPP_ExitHatch_Unlock = FName(TEXT("Unlock"));
	void ACPP_ExitHatch::Unlock()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACPP_ExitHatch_Unlock),NULL);
	}
	void ACPP_ExitHatch::StaticRegisterNativesACPP_ExitHatch()
	{
	}
	struct Z_Construct_UFunction_ACPP_ExitHatch_Unlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_ExitHatch_Unlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_ExitHatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ExitHatch_Unlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_ExitHatch, nullptr, "Unlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_ExitHatch_Unlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ExitHatch_Unlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_ExitHatch_Unlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ExitHatch_Unlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_ExitHatch);
	UClass* Z_Construct_UClass_ACPP_ExitHatch_NoRegister()
	{
		return ACPP_ExitHatch::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_ExitHatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumKeys_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitKeyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExitKeyClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_ExitHatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_ExitHatch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_ExitHatch_Unlock, "Unlock" }, // 4212611222
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ExitHatch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_ExitHatch.h" },
		{ "ModuleRelativePath", "CPP_ExitHatch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "CPP_ExitHatch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_ExitHatch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ExitHatch, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_NumKeys_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "CPP_ExitHatch.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_NumKeys = { "NumKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ExitHatch, NumKeys), METADATA_PARAMS(Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_NumKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_NumKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_ExitKeyClass_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "CPP_ExitHatch.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_ExitKeyClass = { "ExitKeyClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ExitHatch, ExitKeyClass), Z_Construct_UClass_ACPP_ExitKey_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_ExitKeyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_ExitKeyClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_ExitHatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_NumKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ExitHatch_Statics::NewProp_ExitKeyClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_ExitHatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_ExitHatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_ExitHatch_Statics::ClassParams = {
		&ACPP_ExitHatch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_ExitHatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ExitHatch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_ExitHatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ExitHatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_ExitHatch()
	{
		if (!Z_Registration_Info_UClass_ACPP_ExitHatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_ExitHatch.OuterSingleton, Z_Construct_UClass_ACPP_ExitHatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_ExitHatch.OuterSingleton;
	}
	template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<ACPP_ExitHatch>()
	{
		return ACPP_ExitHatch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_ExitHatch);
	struct Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_ExitHatch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_ExitHatch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_ExitHatch, ACPP_ExitHatch::StaticClass, TEXT("ACPP_ExitHatch"), &Z_Registration_Info_UClass_ACPP_ExitHatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_ExitHatch), 1129329359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_ExitHatch_h_987892503(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_ExitHatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_ExitHatch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
