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
	AUTOBATTLERPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterAttributes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USoulTrialManager_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USoulTrialManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USoulTrialManager_DestroyCharactersFromTrial();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter();
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
class UScriptStruct* FCharacterAttributes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOBATTLERPROTO_API uint32 Get_Z_Construct_UScriptStruct_FCharacterAttributes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterAttributes, Z_Construct_UPackage__Script_AutoBattlerProto(), TEXT("CharacterAttributes"), sizeof(FCharacterAttributes), Get_Z_Construct_UScriptStruct_FCharacterAttributes_Hash());
	}
	return Singleton;
}
template<> AUTOBATTLERPROTO_API UScriptStruct* StaticStruct<FCharacterAttributes>()
{
	return FCharacterAttributes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterAttributes(FCharacterAttributes::StaticStruct, TEXT("/Script/AutoBattlerProto"), TEXT("CharacterAttributes"), false, nullptr, nullptr);
static struct FScriptStruct_AutoBattlerProto_StaticRegisterNativesFCharacterAttributes
{
	FScriptStruct_AutoBattlerProto_StaticRegisterNativesFCharacterAttributes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterAttributes")),new UScriptStruct::TCppStructOps<FCharacterAttributes>);
	}
} ScriptStruct_AutoBattlerProto_StaticRegisterNativesFCharacterAttributes;
	struct Z_Construct_UScriptStruct_FCharacterAttributes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PassiveSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimarySkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PrimarySkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Str_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Str;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Sin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAttributes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterAttributes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_PassiveSkill_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_PassiveSkill = { "PassiveSkill", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterAttributes, PassiveSkill), Z_Construct_UClass_USkillBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_PassiveSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_PassiveSkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_PrimarySkill_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_PrimarySkill = { "PrimarySkill", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterAttributes, PrimarySkill), Z_Construct_UClass_USkillBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_PrimarySkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_PrimarySkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Str_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterAttributes, Str), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Str_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Sin_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Sin = { "Sin", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterAttributes, Sin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Sin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Sin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterAttributes, Health), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_PassiveSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_PrimarySkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Str,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Sin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Health,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
		nullptr,
		&NewStructOps,
		"CharacterAttributes",
		sizeof(FCharacterAttributes),
		alignof(FCharacterAttributes),
		Z_Construct_UScriptStruct_FCharacterAttributes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterAttributes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterAttributes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoBattlerProto();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterAttributes"), sizeof(FCharacterAttributes), Get_Z_Construct_UScriptStruct_FCharacterAttributes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterAttributes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterAttributes_Hash() { return 3952926695U; }
	void USoulTrialManager::StaticRegisterNativesUSoulTrialManager()
	{
		UClass* Class = USoulTrialManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyCharactersFromTrial", &USoulTrialManager::execDestroyCharactersFromTrial },
			{ "GetChosenCharacter", &USoulTrialManager::execGetChosenCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoulTrialManager_DestroyCharactersFromTrial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoulTrialManager_DestroyCharactersFromTrial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoulTrialManager_DestroyCharactersFromTrial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoulTrialManager, nullptr, "DestroyCharactersFromTrial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoulTrialManager_DestroyCharactersFromTrial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulTrialManager_DestroyCharactersFromTrial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoulTrialManager_DestroyCharactersFromTrial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoulTrialManager_DestroyCharactersFromTrial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter_Statics
	{
		struct SoulTrialManager_eventGetChosenCharacter_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoulTrialManager_eventGetChosenCharacter_Parms, ReturnValue), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoulTrialManager, nullptr, "GetChosenCharacter", nullptr, nullptr, sizeof(SoulTrialManager_eventGetChosenCharacter_Parms), Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPossiblePassiveSkills_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllPossiblePassiveSkills;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllPossiblePassiveSkills_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPossiblePrimarySkills_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllPossiblePrimarySkills;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllPossiblePrimarySkills_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FerryIsFullDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FerryIsFullDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulAddedToJourneyDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SoulAddedToJourneyDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharactersAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharactersAttributes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharactersAttributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharactersToCombat_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharactersToCombat;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharactersToCombat_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllCharactersInTrial_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllCharactersInTrial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllCharactersInTrial_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoulTrialManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoulTrialManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoulTrialManager_DestroyCharactersFromTrial, "DestroyCharactersFromTrial" }, // 1179043995
		{ &Z_Construct_UFunction_USoulTrialManager_GetChosenCharacter, "GetChosenCharacter" }, // 2685871397
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SoulTrialManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkills_MetaData[] = {
		{ "Category", "SoulTrialManager" },
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkills = { "AllPossiblePassiveSkills", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, AllPossiblePassiveSkills), METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkills_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkills_Inner = { "AllPossiblePassiveSkills", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkills_MetaData[] = {
		{ "Category", "SoulTrialManager" },
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkills = { "AllPossiblePrimarySkills", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, AllPossiblePrimarySkills), METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkills_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkills_Inner = { "AllPossiblePrimarySkills", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_FerryIsFullDelegate_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_FerryIsFullDelegate = { "FerryIsFullDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, FerryIsFullDelegate), Z_Construct_UDelegateFunction_AutoBattlerProto_FerryIsFullDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_FerryIsFullDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_FerryIsFullDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulAddedToJourneyDelegate_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulAddedToJourneyDelegate = { "SoulAddedToJourneyDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, SoulAddedToJourneyDelegate), Z_Construct_UDelegateFunction_AutoBattlerProto_SoulAddedToJourneyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulAddedToJourneyDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulAddedToJourneyDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersAttributes_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersAttributes = { "CharactersAttributes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, CharactersAttributes), METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersAttributes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersAttributes_Inner = { "CharactersAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterAttributes, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersToCombat_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersToCombat = { "CharactersToCombat", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, CharactersToCombat), METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersToCombat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersToCombat_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersToCombat_Inner = { "CharactersToCombat", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllCharactersInTrial_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllCharactersInTrial = { "AllCharactersInTrial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, AllCharactersInTrial), METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllCharactersInTrial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllCharactersInTrial_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllCharactersInTrial_Inner = { "AllCharactersInTrial", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoulTrialManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_FerryIsFullDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SoulAddedToJourneyDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersToCombat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_CharactersToCombat_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllCharactersInTrial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllCharactersInTrial_Inner,
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
		0x009000A0u,
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
	IMPLEMENT_CLASS(USoulTrialManager, 2647005796);
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
