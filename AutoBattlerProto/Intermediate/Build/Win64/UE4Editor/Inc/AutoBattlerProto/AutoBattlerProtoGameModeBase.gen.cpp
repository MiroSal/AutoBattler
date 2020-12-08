// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/AutoBattlerProtoGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoBattlerProtoGameModeBase() {}
// Cross Module References
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_AAutoBattlerProtoGameModeBase_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_AAutoBattlerProtoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USoulTrialManager_NoRegister();
// End Cross Module References
	void AAutoBattlerProtoGameModeBase::StaticRegisterNativesAAutoBattlerProtoGameModeBase()
	{
		UClass* Class = AAutoBattlerProtoGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCombatManager", &AAutoBattlerProtoGameModeBase::execGetCombatManager },
			{ "GetSoulTrialManager", &AAutoBattlerProtoGameModeBase::execGetSoulTrialManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager_Statics
	{
		struct AutoBattlerProtoGameModeBase_eventGetCombatManager_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoBattlerProtoGameModeBase_eventGetCombatManager_Parms, ReturnValue), Z_Construct_UClass_UCombatManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoBattlerProtoGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoBattlerProtoGameModeBase, nullptr, "GetCombatManager", nullptr, nullptr, sizeof(AutoBattlerProtoGameModeBase_eventGetCombatManager_Parms), Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager_Statics
	{
		struct AutoBattlerProtoGameModeBase_eventGetSoulTrialManager_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoBattlerProtoGameModeBase_eventGetSoulTrialManager_Parms, ReturnValue), Z_Construct_UClass_USoulTrialManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutoBattlerProtoGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoBattlerProtoGameModeBase, nullptr, "GetSoulTrialManager", nullptr, nullptr, sizeof(AutoBattlerProtoGameModeBase_eventGetSoulTrialManager_Parms), Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAutoBattlerProtoGameModeBase_NoRegister()
	{
		return AAutoBattlerProtoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAutoBattlerProtoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAutoBattlerProtoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAutoBattlerProtoGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetCombatManager, "GetCombatManager" }, // 897556919
		{ &Z_Construct_UFunction_AAutoBattlerProtoGameModeBase_GetSoulTrialManager, "GetSoulTrialManager" }, // 4197951369
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoBattlerProtoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AutoBattlerProtoGameModeBase.h" },
		{ "ModuleRelativePath", "AutoBattlerProtoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAutoBattlerProtoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoBattlerProtoGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAutoBattlerProtoGameModeBase_Statics::ClassParams = {
		&AAutoBattlerProtoGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAutoBattlerProtoGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoBattlerProtoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAutoBattlerProtoGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAutoBattlerProtoGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAutoBattlerProtoGameModeBase, 2062074167);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<AAutoBattlerProtoGameModeBase>()
	{
		return AAutoBattlerProtoGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAutoBattlerProtoGameModeBase(Z_Construct_UClass_AAutoBattlerProtoGameModeBase, &AAutoBattlerProtoGameModeBase::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("AAutoBattlerProtoGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoBattlerProtoGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
