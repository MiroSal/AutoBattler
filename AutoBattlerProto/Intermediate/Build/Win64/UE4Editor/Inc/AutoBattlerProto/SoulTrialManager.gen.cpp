// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/SoulTrialManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulTrialManager() {}
// Cross Module References
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	AUTOBATTLERPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FChosenSoul();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USoulTrialManager_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USoulTrialManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USoulTrialManager_DestoryAllOnTrialSoulsList();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USoulTrialManager_GetChosenSoul();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics
	{
		struct _Script_AutoBattlerProto_eventFerryIsFullDelegate_Parms
		{
			bool bCanClick;
		};
		static void NewProp_bCanClick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanClick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics::NewProp_bCanClick_SetBit(void* Obj)
	{
		((_Script_AutoBattlerProto_eventFerryIsFullDelegate_Parms*)Obj)->bCanClick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics::NewProp_bCanClick = { "bCanClick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_AutoBattlerProto_eventFerryIsFullDelegate_Parms), &Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics::NewProp_bCanClick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics::NewProp_bCanClick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoBattlerProto, nullptr, "FerryIsFullDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AutoBattlerProto_eventFerryIsFullDelegate_Parms), Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature_Statics
	{
		struct _Script_AutoBattlerProto_eventSoulAddedToJourneyDelegate_Parms
		{
			APlayerCharacter* SoulCard;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulCard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature_Statics::NewProp_SoulCard = { "SoulCard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AutoBattlerProto_eventSoulAddedToJourneyDelegate_Parms, SoulCard), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature_Statics::NewProp_SoulCard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoBattlerProto, nullptr, "SoulAddedToJourneyDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AutoBattlerProto_eventSoulAddedToJourneyDelegate_Parms), Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FChosenSoul::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOBATTLERPROTO_API uint32 Get_Z_Construct_UScriptStruct_FChosenSoul_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChosenSoul, Z_Construct_UPackage__Script_AutoBattlerProto(), TEXT("ChosenSoul"), sizeof(FChosenSoul), Get_Z_Construct_UScriptStruct_FChosenSoul_Hash());
	}
	return Singleton;
}
template<> AUTOBATTLERPROTO_API UScriptStruct* StaticStruct<FChosenSoul>()
{
	return FChosenSoul::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChosenSoul(FChosenSoul::StaticStruct, TEXT("/Script/AutoBattlerProto"), TEXT("ChosenSoul"), false, nullptr, nullptr);
static struct FScriptStruct_AutoBattlerProto_StaticRegisterNativesFChosenSoul
{
	FScriptStruct_AutoBattlerProto_StaticRegisterNativesFChosenSoul()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChosenSoul")),new UScriptStruct::TCppStructOps<FChosenSoul>);
	}
} ScriptStruct_AutoBattlerProto_StaticRegisterNativesFChosenSoul;
	struct Z_Construct_UScriptStruct_FChosenSoul_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Soul_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Soul;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenSpawned_MetaData[];
#endif
		static void NewProp_bHasBeenSpawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenSpawned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChosenSoul_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChosenSoul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChosenSoul>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChosenSoul_Statics::NewProp_Soul_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChosenSoul_Statics::NewProp_Soul = { "Soul", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChosenSoul, Soul), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChosenSoul_Statics::NewProp_Soul_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChosenSoul_Statics::NewProp_Soul_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChosenSoul_Statics::NewProp_bHasBeenSpawned_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChosenSoul_Statics::NewProp_bHasBeenSpawned_SetBit(void* Obj)
	{
		((FChosenSoul*)Obj)->bHasBeenSpawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChosenSoul_Statics::NewProp_bHasBeenSpawned = { "bHasBeenSpawned", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChosenSoul), &Z_Construct_UScriptStruct_FChosenSoul_Statics::NewProp_bHasBeenSpawned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChosenSoul_Statics::NewProp_bHasBeenSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChosenSoul_Statics::NewProp_bHasBeenSpawned_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChosenSoul_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChosenSoul_Statics::NewProp_Soul,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChosenSoul_Statics::NewProp_bHasBeenSpawned,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChosenSoul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
		nullptr,
		&NewStructOps,
		"ChosenSoul",
		sizeof(FChosenSoul),
		alignof(FChosenSoul),
		Z_Construct_UScriptStruct_FChosenSoul_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChosenSoul_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChosenSoul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChosenSoul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChosenSoul()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChosenSoul_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoBattlerProto();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChosenSoul"), sizeof(FChosenSoul), Get_Z_Construct_UScriptStruct_FChosenSoul_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChosenSoul_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChosenSoul_Hash() { return 3082285530U; }
	void USoulTrialManager::StaticRegisterNativesUSoulTrialManager()
	{
		UClass* Class = USoulTrialManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTrialSoulList", &USoulTrialManager::execAddTrialSoulList },
			{ "DestoryAllOnTrialSoulsList", &USoulTrialManager::execDestoryAllOnTrialSoulsList },
			{ "GetChosenSoul", &USoulTrialManager::execGetChosenSoul },
			{ "RemoveTrialSoulList", &USoulTrialManager::execRemoveTrialSoulList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList_Statics
	{
		struct SoulTrialManager_eventAddTrialSoulList_Parms
		{
			ACharacterBase* Soul;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Soul;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList_Statics::NewProp_Soul = { "Soul", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoulTrialManager_eventAddTrialSoulList_Parms, Soul), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList_Statics::NewProp_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoulTrialManager, nullptr, "AddTrialSoulList", nullptr, nullptr, sizeof(SoulTrialManager_eventAddTrialSoulList_Parms), Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoulTrialManager_DestoryAllOnTrialSoulsList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoulTrialManager_DestoryAllOnTrialSoulsList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoulTrialManager_DestoryAllOnTrialSoulsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoulTrialManager, nullptr, "DestoryAllOnTrialSoulsList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoulTrialManager_DestoryAllOnTrialSoulsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulTrialManager_DestoryAllOnTrialSoulsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoulTrialManager_DestoryAllOnTrialSoulsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoulTrialManager_DestoryAllOnTrialSoulsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoulTrialManager_GetChosenSoul_Statics
	{
		struct SoulTrialManager_eventGetChosenSoul_Parms
		{
			APlayerCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoulTrialManager_GetChosenSoul_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoulTrialManager_eventGetChosenSoul_Parms, ReturnValue), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoulTrialManager_GetChosenSoul_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoulTrialManager_GetChosenSoul_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoulTrialManager_GetChosenSoul_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoulTrialManager_GetChosenSoul_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoulTrialManager, nullptr, "GetChosenSoul", nullptr, nullptr, sizeof(SoulTrialManager_eventGetChosenSoul_Parms), Z_Construct_UFunction_USoulTrialManager_GetChosenSoul_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulTrialManager_GetChosenSoul_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoulTrialManager_GetChosenSoul_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulTrialManager_GetChosenSoul_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoulTrialManager_GetChosenSoul()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoulTrialManager_GetChosenSoul_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList_Statics
	{
		struct SoulTrialManager_eventRemoveTrialSoulList_Parms
		{
			ACharacterBase* Soul;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Soul;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList_Statics::NewProp_Soul = { "Soul", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoulTrialManager_eventRemoveTrialSoulList_Parms, Soul), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList_Statics::NewProp_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoulTrialManager, nullptr, "RemoveTrialSoulList", nullptr, nullptr, sizeof(SoulTrialManager_eventRemoveTrialSoulList_Parms), Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoulTrialManager_NoRegister()
	{
		return USoulTrialManager::StaticClass();
	}
	struct Z_Construct_UClass_USoulTrialManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulsToJourney_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SoulsToJourney;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulsToJourney_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SoulsToJourney_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrialSouls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrialSouls;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrialSouls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChosenSouls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChosenSouls;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChosenSouls_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoulTrialManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoulTrialManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoulTrialManager_AddTrialSoulList, "AddTrialSoulList" }, // 4132136017
		{ &Z_Construct_UFunction_USoulTrialManager_DestoryAllOnTrialSoulsList, "DestoryAllOnTrialSoulsList" }, // 1991159793
		{ &Z_Construct_UFunction_USoulTrialManager_GetChosenSoul, "GetChosenSoul" }, // 1835723283
		{ &Z_Construct_UFunction_USoulTrialManager_RemoveTrialSoulList, "RemoveTrialSoulList" }, // 4283537340
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SoulTrialManager.h" },
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulTest_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulTest = { "SoulTest", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, SoulTest), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulsToJourney_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulsToJourney = { "SoulsToJourney", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, SoulsToJourney), METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulsToJourney_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulsToJourney_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulsToJourney_Key_KeyProp = { "SoulsToJourney_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulsToJourney_ValueProp = { "SoulsToJourney", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialSouls_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialSouls = { "TrialSouls", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, TrialSouls), METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialSouls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialSouls_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialSouls_Inner = { "TrialSouls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_ChosenSouls_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_ChosenSouls = { "ChosenSouls", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, ChosenSouls), METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_ChosenSouls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_ChosenSouls_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_ChosenSouls_Inner = { "ChosenSouls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChosenSoul, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoulTrialManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulsToJourney,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulsToJourney_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulsToJourney_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialSouls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialSouls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_ChosenSouls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_ChosenSouls_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoulTrialManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoulTrialManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoulTrialManager_Statics::ClassParams = {
		&USoulTrialManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoulTrialManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoulTrialManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoulTrialManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoulTrialManager, 988509830);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<USoulTrialManager>()
	{
		return USoulTrialManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoulTrialManager(Z_Construct_UClass_USoulTrialManager, &USoulTrialManager::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("USoulTrialManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoulTrialManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
