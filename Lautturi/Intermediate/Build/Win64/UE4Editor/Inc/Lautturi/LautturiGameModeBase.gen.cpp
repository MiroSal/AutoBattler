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
	LAUTTURI_API UFunction* Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager();
	LAUTTURI_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	LAUTTURI_API UFunction* Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager();
	LAUTTURI_API UClass* Z_Construct_UClass_USoulTrialManager_NoRegister();
	LAUTTURI_API UClass* Z_Construct_UClass_ULautturiGameInstance_NoRegister();
// End Cross Module References
	void ALautturiGameModeBase::StaticRegisterNativesALautturiGameModeBase()
	{
		UClass* Class = ALautturiGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCombatManager", &ALautturiGameModeBase::execGetCombatManager },
			{ "GetSoulTrialManager", &ALautturiGameModeBase::execGetSoulTrialManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager_Statics
	{
		struct LautturiGameModeBase_eventGetCombatManager_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LautturiGameModeBase_eventGetCombatManager_Parms, ReturnValue), Z_Construct_UClass_UCombatManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LautturiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALautturiGameModeBase, nullptr, "GetCombatManager", nullptr, nullptr, sizeof(LautturiGameModeBase_eventGetCombatManager_Parms), Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager_Statics
	{
		struct LautturiGameModeBase_eventGetSoulTrialManager_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LautturiGameModeBase_eventGetSoulTrialManager_Parms, ReturnValue), Z_Construct_UClass_USoulTrialManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LautturiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALautturiGameModeBase, nullptr, "GetSoulTrialManager", nullptr, nullptr, sizeof(LautturiGameModeBase_eventGetSoulTrialManager_Parms), Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALautturiGameModeBase_NoRegister()
	{
		return ALautturiGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALautturiGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gameinstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gameinstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALautturiGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Lautturi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALautturiGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALautturiGameModeBase_GetCombatManager, "GetCombatManager" }, // 301180405
		{ &Z_Construct_UFunction_ALautturiGameModeBase_GetSoulTrialManager, "GetSoulTrialManager" }, // 3031370769
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_Gameinstance_MetaData[] = {
		{ "ModuleRelativePath", "LautturiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_Gameinstance = { "Gameinstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALautturiGameModeBase, Gameinstance), Z_Construct_UClass_ULautturiGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_Gameinstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_Gameinstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALautturiGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALautturiGameModeBase_Statics::NewProp_Gameinstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALautturiGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALautturiGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALautturiGameModeBase_Statics::ClassParams = {
		&ALautturiGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALautturiGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ALautturiGameModeBase, 424295944);
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
