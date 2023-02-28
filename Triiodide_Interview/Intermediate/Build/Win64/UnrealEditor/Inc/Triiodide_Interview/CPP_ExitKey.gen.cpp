// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Triiodide_Interview/CPP_ExitKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_ExitKey() {}
// Cross Module References
	TRIIODIDE_INTERVIEW_API UFunction* Z_Construct_UDelegateFunction_Triiodide_Interview_KeyActivatedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_ExitKey_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_ACPP_ExitKey();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Triiodide_Interview_KeyActivatedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Triiodide_Interview_KeyActivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_ExitKey.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Triiodide_Interview_KeyActivatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Triiodide_Interview, nullptr, "KeyActivatedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Triiodide_Interview_KeyActivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Triiodide_Interview_KeyActivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Triiodide_Interview_KeyActivatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Triiodide_Interview_KeyActivatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ACPP_ExitKey::execFinishActivation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishActivation();
		P_NATIVE_END;
	}
	static FName NAME_ACPP_ExitKey_StartActivation = FName(TEXT("StartActivation"));
	void ACPP_ExitKey::StartActivation()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACPP_ExitKey_StartActivation),NULL);
	}
	void ACPP_ExitKey::StaticRegisterNativesACPP_ExitKey()
	{
		UClass* Class = ACPP_ExitKey::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishActivation", &ACPP_ExitKey::execFinishActivation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_ExitKey_FinishActivation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_ExitKey_FinishActivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_ExitKey.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ExitKey_FinishActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_ExitKey, nullptr, "FinishActivation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_ExitKey_FinishActivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ExitKey_FinishActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_ExitKey_FinishActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ExitKey_FinishActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_ExitKey_StartActivation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_ExitKey_StartActivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_ExitKey.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ExitKey_StartActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_ExitKey, nullptr, "StartActivation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_ExitKey_StartActivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ExitKey_StartActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_ExitKey_StartActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ExitKey_StartActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_ExitKey);
	UClass* Z_Construct_UClass_ACPP_ExitKey_NoRegister()
	{
		return ACPP_ExitKey::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_ExitKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_ExitKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_ExitKey_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_ExitKey_FinishActivation, "FinishActivation" }, // 3846035319
		{ &Z_Construct_UFunction_ACPP_ExitKey_StartActivation, "StartActivation" }, // 1685567243
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ExitKey_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_ExitKey.h" },
		{ "ModuleRelativePath", "CPP_ExitKey.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_ExitKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_ExitKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_ExitKey_Statics::ClassParams = {
		&ACPP_ExitKey::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_ExitKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ExitKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_ExitKey()
	{
		if (!Z_Registration_Info_UClass_ACPP_ExitKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_ExitKey.OuterSingleton, Z_Construct_UClass_ACPP_ExitKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_ExitKey.OuterSingleton;
	}
	template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<ACPP_ExitKey>()
	{
		return ACPP_ExitKey::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_ExitKey);
	struct Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_ExitKey_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_ExitKey_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_ExitKey, ACPP_ExitKey::StaticClass, TEXT("ACPP_ExitKey"), &Z_Registration_Info_UClass_ACPP_ExitKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_ExitKey), 820849274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_ExitKey_h_1237165729(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_ExitKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_ExitKey_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
