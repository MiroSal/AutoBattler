// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/AutoBattlerProtoGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoBattlerProtoGameInstance() {}
// Cross Module References
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UAutoBattlerProtoGameInstance_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UAutoBattlerProtoGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USoulTrialManager_NoRegister();
// End Cross Module References
	void UAutoBattlerProtoGameInstance::StaticRegisterNativesUAutoBattlerProtoGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UAutoBattlerProtoGameInstance_NoRegister()
	{
		return UAutoBattlerProtoGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics
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
	UObject* (*const Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoBattlerProtoGameInstance.h" },
		{ "ModuleRelativePath", "AutoBattlerProtoGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_CombatManager_MetaData[] = {
		{ "ModuleRelativePath", "AutoBattlerProtoGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_CombatManager = { "CombatManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoBattlerProtoGameInstance, CombatManager), Z_Construct_UClass_UCombatManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_CombatManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_CombatManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_SoulTrialManager_MetaData[] = {
		{ "ModuleRelativePath", "AutoBattlerProtoGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_SoulTrialManager = { "SoulTrialManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoBattlerProtoGameInstance, SoulTrialManager), Z_Construct_UClass_USoulTrialManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_SoulTrialManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_SoulTrialManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_CombatManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_SoulTrialManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoBattlerProtoGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::ClassParams = {
		&UAutoBattlerProtoGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoBattlerProtoGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoBattlerProtoGameInstance, 2440057100);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<UAutoBattlerProtoGameInstance>()
	{
		return UAutoBattlerProtoGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoBattlerProtoGameInstance(Z_Construct_UClass_UAutoBattlerProtoGameInstance, &UAutoBattlerProtoGameInstance::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("UAutoBattlerProtoGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoBattlerProtoGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
