// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/SoulTrialManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulTrialManager() {}
// Cross Module References
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_ETrialStatus();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterAttributes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USoulTrialManager_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USoulTrialManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UCharacterDataWidget_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UTrialHUDWidget_NoRegister();
// End Cross Module References
	static UEnum* ETrialStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AutoBattlerProto_ETrialStatus, Z_Construct_UPackage__Script_AutoBattlerProto(), TEXT("ETrialStatus"));
		}
		return Singleton;
	}
	template<> AUTOBATTLERPROTO_API UEnum* StaticEnum<ETrialStatus>()
	{
		return ETrialStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrialStatus(ETrialStatus_StaticEnum, TEXT("/Script/AutoBattlerProto"), TEXT("ETrialStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AutoBattlerProto_ETrialStatus_Hash() { return 1456208005U; }
	UEnum* Z_Construct_UEnum_AutoBattlerProto_ETrialStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AutoBattlerProto();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrialStatus"), 0, Get_Z_Construct_UEnum_AutoBattlerProto_ETrialStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETrialStatus::TS_HasCoin", (int64)ETrialStatus::TS_HasCoin },
				{ "ETrialStatus::TS_NoCoin", (int64)ETrialStatus::TS_NoCoin },
				{ "ETrialStatus::TS_Alive", (int64)ETrialStatus::TS_Alive },
				{ "ETrialStatus::TS_None", (int64)ETrialStatus::TS_None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "SoulTrialManager.h" },
				{ "TS_Alive.DisplayName", "Alive" },
				{ "TS_Alive.Name", "ETrialStatus::TS_Alive" },
				{ "TS_HasCoin.DisplayName", "Coin" },
				{ "TS_HasCoin.Name", "ETrialStatus::TS_HasCoin" },
				{ "TS_NoCoin.DisplayName", "No Coin" },
				{ "TS_NoCoin.Name", "ETrialStatus::TS_NoCoin" },
				{ "TS_None.DisplayName", "None" },
				{ "TS_None.Name", "ETrialStatus::TS_None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AutoBattlerProto,
				nullptr,
				"ETrialStatus",
				"ETrialStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrialStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrialStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrialStatus_Underlying;
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
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterAttributes, Str), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Str_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Sin_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Sin = { "Sin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterAttributes, Sin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Sin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Sin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterAttributes, Health), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_TrialStatus_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_TrialStatus = { "TrialStatus", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterAttributes, TrialStatus), Z_Construct_UEnum_AutoBattlerProto_ETrialStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_TrialStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_TrialStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_TrialStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_PassiveSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_PrimarySkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Str,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Sin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_TrialStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_TrialStatus_Underlying,
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
	uint32 Get_Z_Construct_UScriptStruct_FCharacterAttributes_Hash() { return 1809786192U; }
	void USoulTrialManager::StaticRegisterNativesUSoulTrialManager()
	{
	}
	UClass* Z_Construct_UClass_USoulTrialManager_NoRegister()
	{
		return USoulTrialManager::StaticClass();
	}
	struct Z_Construct_UClass_USoulTrialManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCharacterWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveCharacterWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrialHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrialHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrialHUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TrialHUDWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPossiblePassiveSkillClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllPossiblePassiveSkillClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllPossiblePassiveSkillClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPossiblePrimarySkillClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllPossiblePrimarySkillClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllPossiblePrimarySkillClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacterAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedCharacterAttributes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedCharacterAttributes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoulTrialManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_ActiveCharacterWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_ActiveCharacterWidget = { "ActiveCharacterWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, ActiveCharacterWidget), Z_Construct_UClass_UCharacterDataWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_ActiveCharacterWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_ActiveCharacterWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialHUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialHUDWidget = { "TrialHUDWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, TrialHUDWidget), Z_Construct_UClass_UTrialHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialHUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialHUDWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialHUDWidgetClass = { "TrialHUDWidgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, TrialHUDWidgetClass), Z_Construct_UClass_UTrialHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialHUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialHUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkillClasses_MetaData[] = {
		{ "Category", "SoulTrialManager" },
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkillClasses = { "AllPossiblePassiveSkillClasses", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, AllPossiblePassiveSkillClasses), METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkillClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkillClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkillClasses_Inner = { "AllPossiblePassiveSkillClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkillClasses_MetaData[] = {
		{ "Category", "SoulTrialManager" },
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkillClasses = { "AllPossiblePrimarySkillClasses", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, AllPossiblePrimarySkillClasses), METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkillClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkillClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkillClasses_Inner = { "AllPossiblePrimarySkillClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SelectedCharacterAttributes_MetaData[] = {
		{ "ModuleRelativePath", "SoulTrialManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SelectedCharacterAttributes = { "SelectedCharacterAttributes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoulTrialManager, SelectedCharacterAttributes), METADATA_PARAMS(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SelectedCharacterAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SelectedCharacterAttributes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SelectedCharacterAttributes_Inner = { "SelectedCharacterAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterAttributes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoulTrialManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_ActiveCharacterWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_TrialHUDWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkillClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePassiveSkillClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkillClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_AllPossiblePrimarySkillClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SelectedCharacterAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoulTrialManager_Statics::NewProp_SelectedCharacterAttributes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoulTrialManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoulTrialManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoulTrialManager_Statics::ClassParams = {
		&USoulTrialManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoulTrialManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(USoulTrialManager, 1562311624);
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
