// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Triiodide_Interview/CPP_InteractibleInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_InteractibleInterface() {}
// Cross Module References
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_UCPP_InteractibleInterface_NoRegister();
	TRIIODIDE_INTERVIEW_API UClass* Z_Construct_UClass_UCPP_InteractibleInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Triiodide_Interview();
// End Cross Module References
	DEFINE_FUNCTION(ICPP_InteractibleInterface::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation();
		P_NATIVE_END;
	}
	void ICPP_InteractibleInterface::Interact()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void UCPP_InteractibleInterface::StaticRegisterNativesUCPP_InteractibleInterface()
	{
		UClass* Class = UCPP_InteractibleInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &ICPP_InteractibleInterface::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPP_InteractibleInterface_Interact_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_InteractibleInterface_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_InteractibleInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_InteractibleInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_InteractibleInterface, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_InteractibleInterface_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_InteractibleInterface_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_InteractibleInterface_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_InteractibleInterface_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_InteractibleInterface);
	UClass* Z_Construct_UClass_UCPP_InteractibleInterface_NoRegister()
	{
		return UCPP_InteractibleInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCPP_InteractibleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPP_InteractibleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Triiodide_Interview,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPP_InteractibleInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_InteractibleInterface_Interact, "Interact" }, // 3069401480
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_InteractibleInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_InteractibleInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPP_InteractibleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICPP_InteractibleInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_InteractibleInterface_Statics::ClassParams = {
		&UCPP_InteractibleInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCPP_InteractibleInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_InteractibleInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPP_InteractibleInterface()
	{
		if (!Z_Registration_Info_UClass_UCPP_InteractibleInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_InteractibleInterface.OuterSingleton, Z_Construct_UClass_UCPP_InteractibleInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCPP_InteractibleInterface.OuterSingleton;
	}
	template<> TRIIODIDE_INTERVIEW_API UClass* StaticClass<UCPP_InteractibleInterface>()
	{
		return UCPP_InteractibleInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_InteractibleInterface);
	static FName NAME_UCPP_InteractibleInterface_Interact = FName(TEXT("Interact"));
	void ICPP_InteractibleInterface::Execute_Interact(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCPP_InteractibleInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCPP_InteractibleInterface_Interact);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICPP_InteractibleInterface*)(O->GetNativeInterfaceAddress(UCPP_InteractibleInterface::StaticClass())))
		{
			I->Interact_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_InteractibleInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_InteractibleInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_InteractibleInterface, UCPP_InteractibleInterface::StaticClass, TEXT("UCPP_InteractibleInterface"), &Z_Registration_Info_UClass_UCPP_InteractibleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_InteractibleInterface), 1877157186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_InteractibleInterface_h_1397459415(TEXT("/Script/Triiodide_Interview"),
		Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_InteractibleInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Triiodide_Interview_Source_Triiodide_Interview_CPP_InteractibleInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
