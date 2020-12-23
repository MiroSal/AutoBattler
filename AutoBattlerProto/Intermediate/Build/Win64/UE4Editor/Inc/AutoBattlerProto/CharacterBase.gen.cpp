// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/CharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterBase() {}
// Cross Module References
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ACharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_AttackEnd();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_BP_Attack();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_BP_DamageTaken();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_BP_EndTurn();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_BP_HealthAdded();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_BP_OnDeath();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_BP_SetActiveDecal();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_BP_SkillUsed();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_BP_StartTurn();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_GetCurrentSlot();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ASlotBase_NoRegister();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_GetHealth();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_GetSin();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_GetStr();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_IsAlive();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_SetCurrentSlot();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_SetHealth();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_SetSin();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_SetStr();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_SkillUsed();
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_ESkillType();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_UpdateDataText();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_ETurnEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FName NAME_ACharacterBase_BP_Attack = FName(TEXT("BP_Attack"));
	void ACharacterBase::BP_Attack()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_BP_Attack),NULL);
	}
	static FName NAME_ACharacterBase_BP_DamageTaken = FName(TEXT("BP_DamageTaken"));
	void ACharacterBase::BP_DamageTaken(const int32 Amount)
	{
		CharacterBase_eventBP_DamageTaken_Parms Parms;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_BP_DamageTaken),&Parms);
	}
	static FName NAME_ACharacterBase_BP_EndTurn = FName(TEXT("BP_EndTurn"));
	void ACharacterBase::BP_EndTurn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_BP_EndTurn),NULL);
	}
	static FName NAME_ACharacterBase_BP_HealthAdded = FName(TEXT("BP_HealthAdded"));
	void ACharacterBase::BP_HealthAdded(const int32 Amount)
	{
		CharacterBase_eventBP_HealthAdded_Parms Parms;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_BP_HealthAdded),&Parms);
	}
	static FName NAME_ACharacterBase_BP_OnDeath = FName(TEXT("BP_OnDeath"));
	void ACharacterBase::BP_OnDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_BP_OnDeath),NULL);
	}
	static FName NAME_ACharacterBase_BP_SetActiveDecal = FName(TEXT("BP_SetActiveDecal"));
	void ACharacterBase::BP_SetActiveDecal()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_BP_SetActiveDecal),NULL);
	}
	static FName NAME_ACharacterBase_BP_SkillUsed = FName(TEXT("BP_SkillUsed"));
	void ACharacterBase::BP_SkillUsed(const USkillBase* Skill)
	{
		CharacterBase_eventBP_SkillUsed_Parms Parms;
		Parms.Skill=Skill;
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_BP_SkillUsed),&Parms);
	}
	static FName NAME_ACharacterBase_BP_StartTurn = FName(TEXT("BP_StartTurn"));
	void ACharacterBase::BP_StartTurn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_BP_StartTurn),NULL);
	}
	void ACharacterBase::StaticRegisterNativesACharacterBase()
	{
		UClass* Class = ACharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackEnd", &ACharacterBase::execAttackEnd },
			{ "GetCurrentSlot", &ACharacterBase::execGetCurrentSlot },
			{ "GetHealth", &ACharacterBase::execGetHealth },
			{ "GetSin", &ACharacterBase::execGetSin },
			{ "GetStr", &ACharacterBase::execGetStr },
			{ "IsAlive", &ACharacterBase::execIsAlive },
			{ "SetCurrentSlot", &ACharacterBase::execSetCurrentSlot },
			{ "SetHealth", &ACharacterBase::execSetHealth },
			{ "SetSin", &ACharacterBase::execSetSin },
			{ "SetStr", &ACharacterBase::execSetStr },
			{ "SkillUsed", &ACharacterBase::execSkillUsed },
			{ "UpdateDataText", &ACharacterBase::execUpdateDataText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterBase_AttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_AttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_AttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "AttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_AttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_AttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_AttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_AttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_BP_Attack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_BP_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_BP_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "BP_Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_BP_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_BP_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_BP_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventBP_DamageTaken_Parms, Amount), METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::NewProp_Amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "BP_DamageTaken", nullptr, nullptr, sizeof(CharacterBase_eventBP_DamageTaken_Parms), Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_BP_DamageTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_BP_DamageTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_BP_EndTurn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_BP_EndTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_BP_EndTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "BP_EndTurn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_BP_EndTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_EndTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_BP_EndTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_BP_EndTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventBP_HealthAdded_Parms, Amount), METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::NewProp_Amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "BP_HealthAdded", nullptr, nullptr, sizeof(CharacterBase_eventBP_HealthAdded_Parms), Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_BP_HealthAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_BP_HealthAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_BP_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_BP_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_BP_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "BP_OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_BP_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_BP_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_BP_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_BP_SetActiveDecal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_BP_SetActiveDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_BP_SetActiveDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "BP_SetActiveDecal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_BP_SetActiveDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_SetActiveDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_BP_SetActiveDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_BP_SetActiveDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skill;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::NewProp_Skill_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::NewProp_Skill = { "Skill", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventBP_SkillUsed_Parms, Skill), Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::NewProp_Skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::NewProp_Skill_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::NewProp_Skill,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "BP_SkillUsed", nullptr, nullptr, sizeof(CharacterBase_eventBP_SkillUsed_Parms), Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_BP_SkillUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_BP_SkillUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_BP_StartTurn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_BP_StartTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_BP_StartTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "BP_StartTurn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_BP_StartTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_BP_StartTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_BP_StartTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_BP_StartTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_GetCurrentSlot_Statics
	{
		struct CharacterBase_eventGetCurrentSlot_Parms
		{
			ASlotBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterBase_GetCurrentSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventGetCurrentSlot_Parms, ReturnValue), Z_Construct_UClass_ASlotBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_GetCurrentSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_GetCurrentSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_GetCurrentSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_GetCurrentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "GetCurrentSlot", nullptr, nullptr, sizeof(CharacterBase_eventGetCurrentSlot_Parms), Z_Construct_UFunction_ACharacterBase_GetCurrentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetCurrentSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_GetCurrentSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetCurrentSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_GetCurrentSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_GetCurrentSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_GetHealth_Statics
	{
		struct CharacterBase_eventGetHealth_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "GetHealth", nullptr, nullptr, sizeof(CharacterBase_eventGetHealth_Parms), Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_GetSin_Statics
	{
		struct CharacterBase_eventGetSin_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_GetSin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventGetSin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_GetSin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_GetSin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_GetSin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_GetSin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "GetSin", nullptr, nullptr, sizeof(CharacterBase_eventGetSin_Parms), Z_Construct_UFunction_ACharacterBase_GetSin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetSin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_GetSin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetSin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_GetSin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_GetSin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_GetStr_Statics
	{
		struct CharacterBase_eventGetStr_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_GetStr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventGetStr_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_GetStr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_GetStr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_GetStr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_GetStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "GetStr", nullptr, nullptr, sizeof(CharacterBase_eventGetStr_Parms), Z_Construct_UFunction_ACharacterBase_GetStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_GetStr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_GetStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_GetStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_IsAlive_Statics
	{
		struct CharacterBase_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacterBase_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterBase_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacterBase_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterBase_eventIsAlive_Parms), &Z_Construct_UFunction_ACharacterBase_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_IsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "IsAlive", nullptr, nullptr, sizeof(CharacterBase_eventIsAlive_Parms), Z_Construct_UFunction_ACharacterBase_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics
	{
		struct CharacterBase_eventSetCurrentSlot_Parms
		{
			ASlotBase* NewCurrentSlot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCurrentSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics::NewProp_NewCurrentSlot = { "NewCurrentSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventSetCurrentSlot_Parms, NewCurrentSlot), Z_Construct_UClass_ASlotBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics::NewProp_NewCurrentSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "SetCurrentSlot", nullptr, nullptr, sizeof(CharacterBase_eventSetCurrentSlot_Parms), Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_SetCurrentSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_SetHealth_Statics
	{
		struct CharacterBase_eventSetHealth_Parms
		{
			int32 InHealth;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::NewProp_InHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::NewProp_InHealth = { "InHealth", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventSetHealth_Parms, InHealth), METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::NewProp_InHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::NewProp_InHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::NewProp_InHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "Comment", "////Character stats\n" },
		{ "ModuleRelativePath", "CharacterBase.h" },
		{ "ToolTip", "/Character stats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "SetHealth", nullptr, nullptr, sizeof(CharacterBase_eventSetHealth_Parms), Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_SetSin_Statics
	{
		struct CharacterBase_eventSetSin_Parms
		{
			int32 InSin;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_SetSin_Statics::NewProp_InSin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_SetSin_Statics::NewProp_InSin = { "InSin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventSetSin_Parms, InSin), METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_SetSin_Statics::NewProp_InSin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SetSin_Statics::NewProp_InSin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_SetSin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_SetSin_Statics::NewProp_InSin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_SetSin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_SetSin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "SetSin", nullptr, nullptr, sizeof(CharacterBase_eventSetSin_Parms), Z_Construct_UFunction_ACharacterBase_SetSin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SetSin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_SetSin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SetSin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_SetSin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_SetSin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_SetStr_Statics
	{
		struct CharacterBase_eventSetStr_Parms
		{
			int32 InStr;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_SetStr_Statics::NewProp_InStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_SetStr_Statics::NewProp_InStr = { "InStr", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventSetStr_Parms, InStr), METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_SetStr_Statics::NewProp_InStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SetStr_Statics::NewProp_InStr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_SetStr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_SetStr_Statics::NewProp_InStr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_SetStr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_SetStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "SetStr", nullptr, nullptr, sizeof(CharacterBase_eventSetStr_Parms), Z_Construct_UFunction_ACharacterBase_SetStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SetStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_SetStr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SetStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_SetStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_SetStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics
	{
		struct CharacterBase_eventSkillUsed_Parms
		{
			ACharacterBase* InCharacter;
			ESkillType InSkillType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSkillType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSkillType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSkillType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::NewProp_InSkillType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::NewProp_InSkillType = { "InSkillType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventSkillUsed_Parms, InSkillType), Z_Construct_UEnum_AutoBattlerProto_ESkillType, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::NewProp_InSkillType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::NewProp_InSkillType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::NewProp_InSkillType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventSkillUsed_Parms, InCharacter), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::NewProp_InSkillType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::NewProp_InSkillType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::NewProp_InCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when someone uses skill\n" },
		{ "ModuleRelativePath", "CharacterBase.h" },
		{ "ToolTip", "Called when someone uses skill" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "SkillUsed", nullptr, nullptr, sizeof(CharacterBase_eventSkillUsed_Parms), Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_SkillUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_SkillUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_UpdateDataText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_UpdateDataText_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//temp for stat visualization\n" },
		{ "ModuleRelativePath", "CharacterBase.h" },
		{ "ToolTip", "temp for stat visualization" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_UpdateDataText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "UpdateDataText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_UpdateDataText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_UpdateDataText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_UpdateDataText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_UpdateDataText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacterBase_NoRegister()
	{
		return ACharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatsText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterType_Underlying;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PassiveSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimarySkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimarySkill;
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterBase_AttackEnd, "AttackEnd" }, // 291479199
		{ &Z_Construct_UFunction_ACharacterBase_BP_Attack, "BP_Attack" }, // 1744925933
		{ &Z_Construct_UFunction_ACharacterBase_BP_DamageTaken, "BP_DamageTaken" }, // 427409050
		{ &Z_Construct_UFunction_ACharacterBase_BP_EndTurn, "BP_EndTurn" }, // 2222572367
		{ &Z_Construct_UFunction_ACharacterBase_BP_HealthAdded, "BP_HealthAdded" }, // 360489291
		{ &Z_Construct_UFunction_ACharacterBase_BP_OnDeath, "BP_OnDeath" }, // 2471537982
		{ &Z_Construct_UFunction_ACharacterBase_BP_SetActiveDecal, "BP_SetActiveDecal" }, // 242433733
		{ &Z_Construct_UFunction_ACharacterBase_BP_SkillUsed, "BP_SkillUsed" }, // 2840183148
		{ &Z_Construct_UFunction_ACharacterBase_BP_StartTurn, "BP_StartTurn" }, // 3808521065
		{ &Z_Construct_UFunction_ACharacterBase_GetCurrentSlot, "GetCurrentSlot" }, // 810369746
		{ &Z_Construct_UFunction_ACharacterBase_GetHealth, "GetHealth" }, // 2549758804
		{ &Z_Construct_UFunction_ACharacterBase_GetSin, "GetSin" }, // 1643011939
		{ &Z_Construct_UFunction_ACharacterBase_GetStr, "GetStr" }, // 3875496130
		{ &Z_Construct_UFunction_ACharacterBase_IsAlive, "IsAlive" }, // 1590769469
		{ &Z_Construct_UFunction_ACharacterBase_SetCurrentSlot, "SetCurrentSlot" }, // 2385160876
		{ &Z_Construct_UFunction_ACharacterBase_SetHealth, "SetHealth" }, // 656634837
		{ &Z_Construct_UFunction_ACharacterBase_SetSin, "SetSin" }, // 1258492990
		{ &Z_Construct_UFunction_ACharacterBase_SetStr, "SetStr" }, // 2358927858
		{ &Z_Construct_UFunction_ACharacterBase_SkillUsed, "SkillUsed" }, // 2828678829
		{ &Z_Construct_UFunction_ACharacterBase_UpdateDataText, "UpdateDataText" }, // 3660602916
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterBase.h" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_StatsText_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_StatsText = { "StatsText", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, StatsText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_StatsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_StatsText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_CurrentSlot_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_CurrentSlot = { "CurrentSlot", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, CurrentSlot), Z_Construct_UClass_ASlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_CurrentSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_CurrentSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "Comment", "//Is player or enemy\n" },
		{ "ModuleRelativePath", "CharacterBase.h" },
		{ "ToolTip", "Is player or enemy" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType = { "CharacterType", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, CharacterType), Z_Construct_UEnum_AutoBattlerProto_ETurnEnum, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePassiveSkillClasses_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePassiveSkillClasses = { "AllPossiblePassiveSkillClasses", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, AllPossiblePassiveSkillClasses), METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePassiveSkillClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePassiveSkillClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePassiveSkillClasses_Inner = { "AllPossiblePassiveSkillClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePrimarySkillClasses_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePrimarySkillClasses = { "AllPossiblePrimarySkillClasses", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, AllPossiblePrimarySkillClasses), METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePrimarySkillClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePrimarySkillClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePrimarySkillClasses_Inner = { "AllPossiblePrimarySkillClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_PassiveSkill_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_PassiveSkill = { "PassiveSkill", nullptr, (EPropertyFlags)0x0040000000020801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, PassiveSkill), Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_PassiveSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_PassiveSkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_PrimarySkill_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_PrimarySkill = { "PrimarySkill", nullptr, (EPropertyFlags)0x0040000000020801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, PrimarySkill), Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_PrimarySkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_PrimarySkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_Str_MetaData[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, Str), METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Str_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_Sin_MetaData[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_Sin = { "Sin", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, Sin), METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Sin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Sin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, Health), METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_StatsText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_CurrentSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePassiveSkillClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePassiveSkillClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePrimarySkillClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_AllPossiblePrimarySkillClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_PassiveSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_PrimarySkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_Str,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_Sin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterBase_Statics::ClassParams = {
		&ACharacterBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterBase, 2880960229);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<ACharacterBase>()
	{
		return ACharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterBase(Z_Construct_UClass_ACharacterBase, &ACharacterBase::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("ACharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
