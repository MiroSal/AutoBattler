// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/ActivationInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivationInterface() {}
// Cross Module References
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UActivationInterface_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UActivationInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
// End Cross Module References
	void UActivationInterface::StaticRegisterNativesUActivationInterface()
	{
	}
	UClass* Z_Construct_UClass_UActivationInterface_NoRegister()
	{
		return UActivationInterface::StaticClass();
	}
	struct Z_Construct_UClass_UActivationInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivationInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivationInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActivationInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivationInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IActivationInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivationInterface_Statics::ClassParams = {
		&UActivationInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UActivationInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivationInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivationInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivationInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivationInterface, 458695266);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<UActivationInterface>()
	{
		return UActivationInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivationInterface(Z_Construct_UClass_UActivationInterface, &UActivationInterface::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("UActivationInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivationInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
