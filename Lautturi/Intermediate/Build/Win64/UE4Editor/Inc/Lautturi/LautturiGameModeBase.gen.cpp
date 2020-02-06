// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/LautturiGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLautturiGameModeBase() {}
// Cross Module References
	LAUTTURI_API UClass* Z_Construct_UClass_ALautturiGameModeBase_NoRegister();
	LAUTTURI_API UClass* Z_Construct_UClass_ALautturiGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Lautturi();
	LAUTTURI_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	LAUTTURI_API UClass* Z_Construct_UClass_USoulTrialManager_NoRegister();
// End Cross Module References
	void ALautturiGameModeBase::StaticRegisterNativesALautturiGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALautturiGameModeBase_NoRegister()
	{
		return ALautturiGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALautturiGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulTrialManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulTrialManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALautturiGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Lautturi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALautturiGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LautturiGameModeBase.h" },
		{ "ModuleRelativePath", "LautturiGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_CombatManager_MetaData[] = {
		{ "ModuleRelativePath", "LautturiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_CombatManager = { "CombatManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALautturiGameModeBase, CombatManager), Z_Construct_UClass_UCombatManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_CombatManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_CombatManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_SoulTrialManager_MetaData[] = {
		{ "ModuleRelativePath", "LautturiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_SoulTrialManager = { "SoulTrialManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALautturiGameModeBase, SoulTrialManager), Z_Construct_UClass_USoulTrialManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_SoulTrialManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_SoulTrialManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALautturiGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_CombatManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_SoulTrialManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALautturiGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALautturiGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALautturiGameModeBase_Statics::ClassParams = {
		&ALautturiGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALautturiGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALautturiGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALautturiGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALautturiGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALautturiGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALautturiGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALautturiGameModeBase, 2799767569);
	template<> LAUTTURI_API UClass* StaticClass<ALautturiGameModeBase>()
	{
		return ALautturiGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALautturiGameModeBase(Z_Construct_UClass_ALautturiGameModeBase, &ALautturiGameModeBase::StaticClass, TEXT("/Script/Lautturi"), TEXT("ALautturiGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALautturiGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
