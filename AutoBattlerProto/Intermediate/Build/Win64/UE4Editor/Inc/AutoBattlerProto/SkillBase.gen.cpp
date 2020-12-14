// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/SkillBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillBase() {}
// Cross Module References
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USkillBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USkillBase_Activate();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USkillBase_BP_ActivateSkill();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USkillBase_DeactivateSkill();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USkillBase_GetAffectRange();
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_EAffectRange();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USkillBase_GetAllEnemies();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USkillBase_GetAllSouls();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USkillBase_GetOwningCharacter();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_USkillBase_InitSkills();
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_ESkillType();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
// End Cross Module References
	static FName NAME_USkillBase_BP_ActivateSkill = FName(TEXT("BP_ActivateSkill"));
	void USkillBase::BP_ActivateSkill()
	{
		ProcessEvent(FindFunctionChecked(NAME_USkillBase_BP_ActivateSkill),NULL);
	}
	void USkillBase::StaticRegisterNativesUSkillBase()
	{
		UClass* Class = USkillBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &USkillBase::execActivate },
			{ "DeactivateSkill", &USkillBase::execDeactivateSkill },
			{ "GetAffectRange", &USkillBase::execGetAffectRange },
			{ "GetAllEnemies", &USkillBase::execGetAllEnemies },
			{ "GetAllSouls", &USkillBase::execGetAllSouls },
			{ "GetOwningCharacter", &USkillBase::execGetOwningCharacter },
			{ "InitSkills", &USkillBase::execInitSkills },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkillBase_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillBase_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillBase_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillBase, nullptr, "Activate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillBase_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillBase_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillBase_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillBase_BP_ActivateSkill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillBase_BP_ActivateSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillBase_BP_ActivateSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillBase, nullptr, "BP_ActivateSkill", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillBase_BP_ActivateSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_BP_ActivateSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillBase_BP_ActivateSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillBase_BP_ActivateSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillBase_DeactivateSkill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillBase_DeactivateSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillBase_DeactivateSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillBase, nullptr, "DeactivateSkill", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillBase_DeactivateSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_DeactivateSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillBase_DeactivateSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillBase_DeactivateSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillBase_GetAffectRange_Statics
	{
		struct SkillBase_eventGetAffectRange_Parms
		{
			EAffectRange ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkillBase_GetAffectRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillBase_eventGetAffectRange_Parms, ReturnValue), Z_Construct_UEnum_AutoBattlerProto_EAffectRange, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkillBase_GetAffectRange_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillBase_GetAffectRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillBase_GetAffectRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillBase_GetAffectRange_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillBase_GetAffectRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillBase_GetAffectRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillBase, nullptr, "GetAffectRange", nullptr, nullptr, sizeof(SkillBase_eventGetAffectRange_Parms), Z_Construct_UFunction_USkillBase_GetAffectRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_GetAffectRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillBase_GetAffectRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_GetAffectRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillBase_GetAffectRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillBase_GetAffectRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics
	{
		struct SkillBase_eventGetAllEnemies_Parms
		{
			TArray<ACharacterBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillBase_eventGetAllEnemies_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillBase, nullptr, "GetAllEnemies", nullptr, nullptr, sizeof(SkillBase_eventGetAllEnemies_Parms), Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillBase_GetAllEnemies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillBase_GetAllEnemies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillBase_GetAllSouls_Statics
	{
		struct SkillBase_eventGetAllSouls_Parms
		{
			TArray<ACharacterBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkillBase_GetAllSouls_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillBase_eventGetAllSouls_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillBase_GetAllSouls_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillBase_GetAllSouls_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillBase_GetAllSouls_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillBase_GetAllSouls_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillBase_GetAllSouls_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillBase_GetAllSouls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillBase, nullptr, "GetAllSouls", nullptr, nullptr, sizeof(SkillBase_eventGetAllSouls_Parms), Z_Construct_UFunction_USkillBase_GetAllSouls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_GetAllSouls_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillBase_GetAllSouls_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_GetAllSouls_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillBase_GetAllSouls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillBase_GetAllSouls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillBase_GetOwningCharacter_Statics
	{
		struct SkillBase_eventGetOwningCharacter_Parms
		{
			ACharacterBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillBase_GetOwningCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillBase_eventGetOwningCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillBase_GetOwningCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillBase_GetOwningCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillBase_GetOwningCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillBase_GetOwningCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillBase, nullptr, "GetOwningCharacter", nullptr, nullptr, sizeof(SkillBase_eventGetOwningCharacter_Parms), Z_Construct_UFunction_USkillBase_GetOwningCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_GetOwningCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillBase_GetOwningCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_GetOwningCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillBase_GetOwningCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillBase_GetOwningCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillBase_InitSkills_Statics
	{
		struct SkillBase_eventInitSkills_Parms
		{
			FString SkillInfoText;
			ACharacterBase* Character;
			ESkillType SkillTypeEnum;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkillTypeEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkillTypeEnum_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkillInfoText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkillBase_InitSkills_Statics::NewProp_SkillTypeEnum = { "SkillTypeEnum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillBase_eventInitSkills_Parms, SkillTypeEnum), Z_Construct_UEnum_AutoBattlerProto_ESkillType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkillBase_InitSkills_Statics::NewProp_SkillTypeEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkillBase_InitSkills_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillBase_eventInitSkills_Parms, Character), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkillBase_InitSkills_Statics::NewProp_SkillInfoText = { "SkillInfoText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillBase_eventInitSkills_Parms, SkillInfoText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillBase_InitSkills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillBase_InitSkills_Statics::NewProp_SkillTypeEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillBase_InitSkills_Statics::NewProp_SkillTypeEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillBase_InitSkills_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillBase_InitSkills_Statics::NewProp_SkillInfoText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillBase_InitSkills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillBase_InitSkills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillBase, nullptr, "InitSkills", nullptr, nullptr, sizeof(SkillBase_eventInitSkills_Parms), Z_Construct_UFunction_USkillBase_InitSkills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_InitSkills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillBase_InitSkills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillBase_InitSkills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillBase_InitSkills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillBase_InitSkills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkillBase_NoRegister()
	{
		return USkillBase::StaticClass();
	}
	struct Z_Construct_UClass_USkillBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkillInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTypeToActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkillTypeToActivate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkillTypeToActivate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkillType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkillType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AffectRange;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AffectRange_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkillBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillBase_Activate, "Activate" }, // 591585386
		{ &Z_Construct_UFunction_USkillBase_BP_ActivateSkill, "BP_ActivateSkill" }, // 202025099
		{ &Z_Construct_UFunction_USkillBase_DeactivateSkill, "DeactivateSkill" }, // 3231681120
		{ &Z_Construct_UFunction_USkillBase_GetAffectRange, "GetAffectRange" }, // 2547593942
		{ &Z_Construct_UFunction_USkillBase_GetAllEnemies, "GetAllEnemies" }, // 1260243714
		{ &Z_Construct_UFunction_USkillBase_GetAllSouls, "GetAllSouls" }, // 2720791332
		{ &Z_Construct_UFunction_USkillBase_GetOwningCharacter, "GetOwningCharacter" }, // 557772218
		{ &Z_Construct_UFunction_USkillBase_InitSkills, "InitSkills" }, // 1048164242
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SkillBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBase_Statics::NewProp_OwningCharacter_MetaData[] = {
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillBase_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillBase, OwningCharacter), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillBase_Statics::NewProp_OwningCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillBase_Statics::NewProp_OwningCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBase_Statics::NewProp_CombatManager_MetaData[] = {
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillBase_Statics::NewProp_CombatManager = { "CombatManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillBase, CombatManager), Z_Construct_UClass_UCombatManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillBase_Statics::NewProp_CombatManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillBase_Statics::NewProp_CombatManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBase_Statics::NewProp_SkillInfo_MetaData[] = {
		{ "Category", "SkillBase" },
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkillBase_Statics::NewProp_SkillInfo = { "SkillInfo", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillBase, SkillInfo), METADATA_PARAMS(Z_Construct_UClass_USkillBase_Statics::NewProp_SkillInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillBase_Statics::NewProp_SkillInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBase_Statics::NewProp_SkillTypeToActivate_MetaData[] = {
		{ "Category", "SkillBase" },
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkillBase_Statics::NewProp_SkillTypeToActivate = { "SkillTypeToActivate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillBase, SkillTypeToActivate), Z_Construct_UEnum_AutoBattlerProto_ESkillType, METADATA_PARAMS(Z_Construct_UClass_USkillBase_Statics::NewProp_SkillTypeToActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillBase_Statics::NewProp_SkillTypeToActivate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkillBase_Statics::NewProp_SkillTypeToActivate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBase_Statics::NewProp_SkillType_MetaData[] = {
		{ "Category", "SkillBase" },
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkillBase_Statics::NewProp_SkillType = { "SkillType", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillBase, SkillType), Z_Construct_UEnum_AutoBattlerProto_ESkillType, METADATA_PARAMS(Z_Construct_UClass_USkillBase_Statics::NewProp_SkillType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillBase_Statics::NewProp_SkillType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkillBase_Statics::NewProp_SkillType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillBase_Statics::NewProp_AffectRange_MetaData[] = {
		{ "Category", "SkillBase" },
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkillBase_Statics::NewProp_AffectRange = { "AffectRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillBase, AffectRange), Z_Construct_UEnum_AutoBattlerProto_EAffectRange, METADATA_PARAMS(Z_Construct_UClass_USkillBase_Statics::NewProp_AffectRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillBase_Statics::NewProp_AffectRange_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkillBase_Statics::NewProp_AffectRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBase_Statics::NewProp_OwningCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBase_Statics::NewProp_CombatManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBase_Statics::NewProp_SkillInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBase_Statics::NewProp_SkillTypeToActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBase_Statics::NewProp_SkillTypeToActivate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBase_Statics::NewProp_SkillType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBase_Statics::NewProp_SkillType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBase_Statics::NewProp_AffectRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillBase_Statics::NewProp_AffectRange_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkillBase_Statics::ClassParams = {
		&USkillBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkillBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkillBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkillBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkillBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkillBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkillBase, 2535367850);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<USkillBase>()
	{
		return USkillBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkillBase(Z_Construct_UClass_USkillBase, &USkillBase::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("USkillBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
