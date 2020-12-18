// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/AutoBattlerProtoGameInstance.h"
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
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USoulTrialManager_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UAutoBattlerProtoGameInstance::StaticRegisterNativesUAutoBattlerProtoGameInstance()
	{
		UClass* Class = UAutoBattlerProtoGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCombatManager", &UAutoBattlerProtoGameInstance::execGetCombatManager },
			{ "GetSoulTrialManager", &UAutoBattlerProtoGameInstance::execGetSoulTrialManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager_Statics
	{
		struct AutoBattlerProtoGameInstance_eventGetCombatManager_Parms
		{
			UCombatManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoBattlerProtoGameInstance_eventGetCombatManager_Parms, ReturnValue), Z_Construct_UClass_UCombatManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoBattlerProtoGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoBattlerProtoGameInstance, nullptr, "GetCombatManager", nullptr, nullptr, sizeof(AutoBattlerProtoGameInstance_eventGetCombatManager_Parms), Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager_Statics
	{
		struct AutoBattlerProtoGameInstance_eventGetSoulTrialManager_Parms
		{
			USoulTrialManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoBattlerProtoGameInstance_eventGetSoulTrialManager_Parms, ReturnValue), Z_Construct_UClass_USoulTrialManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoBattlerProtoGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoBattlerProtoGameInstance, nullptr, "GetSoulTrialManager", nullptr, nullptr, sizeof(AutoBattlerProtoGameInstance_eventGetSoulTrialManager_Parms), Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAutoBattlerProtoGameInstance_NoRegister()
	{
		return UAutoBattlerProtoGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulTrialManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SoulTrialManagerClass;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetCombatManager, "GetCombatManager" }, // 253980096
		{ &Z_Construct_UFunction_UAutoBattlerProtoGameInstance_GetSoulTrialManager, "GetSoulTrialManager" }, // 1592134808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoBattlerProtoGameInstance.h" },
		{ "ModuleRelativePath", "AutoBattlerProtoGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_SoulTrialManagerClass_MetaData[] = {
		{ "Category", "AutoBattlerProtoGameInstance" },
		{ "ModuleRelativePath", "AutoBattlerProtoGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_SoulTrialManagerClass = { "SoulTrialManagerClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoBattlerProtoGameInstance, SoulTrialManagerClass), Z_Construct_UClass_USoulTrialManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_SoulTrialManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_SoulTrialManagerClass_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::NewProp_SoulTrialManagerClass,
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
		FuncInfo,
		Z_Construct_UClass_UAutoBattlerProtoGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UAutoBattlerProtoGameInstance, 3062527938);
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
