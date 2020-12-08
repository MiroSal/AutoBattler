// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/CharacterBase.h"
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
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_DamageTaken();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_EndTurn();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_GetHealth();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_GetSin();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_GetStr();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_HealthAdded();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_OnDeath();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_SetActiveDecal();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_SetCurrentSlot();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ABaseSlot_NoRegister();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_SinAdd();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_SinReduce();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_StartTurn();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_StrAdd();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_StrReduce();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_StrSet();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ACharacterBase_UpdateDataText();
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_ETurnEnum();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_AAutoBattlerProtoGameModeBase_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USoulTrialManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UActivationInterface_NoRegister();
// End Cross Module References
	static FName NAME_ACharacterBase_BP_Attack = FName(TEXT("BP_Attack"));
	void ACharacterBase::BP_Attack()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_BP_Attack),NULL);
	}
	static FName NAME_ACharacterBase_DamageTaken = FName(TEXT("DamageTaken"));
	void ACharacterBase::DamageTaken(int32 Amount)
	{
		CharacterBase_eventDamageTaken_Parms Parms;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_DamageTaken),&Parms);
	}
	static FName NAME_ACharacterBase_EndTurn = FName(TEXT("EndTurn"));
	void ACharacterBase::EndTurn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_EndTurn),NULL);
	}
	static FName NAME_ACharacterBase_HealthAdded = FName(TEXT("HealthAdded"));
	void ACharacterBase::HealthAdded(int32 Amount)
	{
		CharacterBase_eventHealthAdded_Parms Parms;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_HealthAdded),&Parms);
	}
	static FName NAME_ACharacterBase_OnDeath = FName(TEXT("OnDeath"));
	void ACharacterBase::OnDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_OnDeath),NULL);
	}
	static FName NAME_ACharacterBase_SetActiveDecal = FName(TEXT("SetActiveDecal"));
	void ACharacterBase::SetActiveDecal()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_SetActiveDecal),NULL);
	}
	static FName NAME_ACharacterBase_StartTurn = FName(TEXT("StartTurn"));
	void ACharacterBase::StartTurn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterBase_StartTurn),NULL);
	}
	void ACharacterBase::StaticRegisterNativesACharacterBase()
	{
		UClass* Class = ACharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackEnd", &ACharacterBase::execAttackEnd },
			{ "GetHealth", &ACharacterBase::execGetHealth },
			{ "GetSin", &ACharacterBase::execGetSin },
			{ "GetStr", &ACharacterBase::execGetStr },
			{ "SetCurrentSlot", &ACharacterBase::execSetCurrentSlot },
			{ "SinAdd", &ACharacterBase::execSinAdd },
			{ "SinReduce", &ACharacterBase::execSinReduce },
			{ "StrAdd", &ACharacterBase::execStrAdd },
			{ "StrReduce", &ACharacterBase::execStrReduce },
			{ "StrSet", &ACharacterBase::execStrSet },
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
	struct Z_Construct_UFunction_ACharacterBase_DamageTaken_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_DamageTaken_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventDamageTaken_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_DamageTaken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_DamageTaken_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_DamageTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_DamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "DamageTaken", nullptr, nullptr, sizeof(CharacterBase_eventDamageTaken_Parms), Z_Construct_UFunction_ACharacterBase_DamageTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_DamageTaken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_DamageTaken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_DamageTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_DamageTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_DamageTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_EndTurn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_EndTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_EndTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "EndTurn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_EndTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_EndTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_EndTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_EndTurn_Statics::FuncParams);
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
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "GetHealth", nullptr, nullptr, sizeof(CharacterBase_eventGetHealth_Parms), Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetHealth_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_GetSin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "GetSin", nullptr, nullptr, sizeof(CharacterBase_eventGetSin_Parms), Z_Construct_UFunction_ACharacterBase_GetSin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetSin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_GetSin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetSin_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_GetStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "GetStr", nullptr, nullptr, sizeof(CharacterBase_eventGetStr_Parms), Z_Construct_UFunction_ACharacterBase_GetStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_GetStr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_GetStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_GetStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_GetStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_HealthAdded_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_HealthAdded_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventHealthAdded_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_HealthAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_HealthAdded_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_HealthAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_HealthAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "HealthAdded", nullptr, nullptr, sizeof(CharacterBase_eventHealthAdded_Parms), Z_Construct_UFunction_ACharacterBase_HealthAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_HealthAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_HealthAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_HealthAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_HealthAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_HealthAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_SetActiveDecal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_SetActiveDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_SetActiveDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "SetActiveDecal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_SetActiveDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SetActiveDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_SetActiveDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_SetActiveDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics
	{
		struct CharacterBase_eventSetCurrentSlot_Parms
		{
			ABaseSlot* NewCurrentSlot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCurrentSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterBase_SetCurrentSlot_Statics::NewProp_NewCurrentSlot = { "NewCurrentSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventSetCurrentSlot_Parms, NewCurrentSlot), Z_Construct_UClass_ABaseSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	struct Z_Construct_UFunction_ACharacterBase_SinAdd_Statics
	{
		struct CharacterBase_eventSinAdd_Parms
		{
			int32 Amount;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterBase_eventSinAdd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterBase_eventSinAdd_Parms), &Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventSinAdd_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "SinAdd", nullptr, nullptr, sizeof(CharacterBase_eventSinAdd_Parms), Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_SinAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_SinAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_SinReduce_Statics
	{
		struct CharacterBase_eventSinReduce_Parms
		{
			int32 Amount;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterBase_eventSinReduce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterBase_eventSinReduce_Parms), &Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventSinReduce_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "SinReduce", nullptr, nullptr, sizeof(CharacterBase_eventSinReduce_Parms), Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_SinReduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_SinReduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_StartTurn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_StartTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_StartTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "StartTurn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_StartTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_StartTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_StartTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_StartTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_StrAdd_Statics
	{
		struct CharacterBase_eventStrAdd_Parms
		{
			int32 Amount;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterBase_eventStrAdd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterBase_eventStrAdd_Parms), &Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventStrAdd_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "StrAdd", nullptr, nullptr, sizeof(CharacterBase_eventStrAdd_Parms), Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_StrAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_StrAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_StrReduce_Statics
	{
		struct CharacterBase_eventStrReduce_Parms
		{
			int32 Amount;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterBase_eventStrReduce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterBase_eventStrReduce_Parms), &Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventStrReduce_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "StrReduce", nullptr, nullptr, sizeof(CharacterBase_eventStrReduce_Parms), Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_StrReduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_StrReduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterBase_StrSet_Statics
	{
		struct CharacterBase_eventStrSet_Parms
		{
			int32 Amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACharacterBase_StrSet_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBase_eventStrSet_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterBase_StrSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterBase_StrSet_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterBase_StrSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterBase_StrSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterBase, nullptr, "StrSet", nullptr, nullptr, sizeof(CharacterBase_eventStrSet_Parms), Z_Construct_UFunction_ACharacterBase_StrSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_StrSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterBase_StrSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterBase_StrSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterBase_StrSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterBase_StrSet_Statics::FuncParams);
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
		{ "ModuleRelativePath", "CharacterBase.h" },
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterType_Underlying;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulTrialManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulTrialManager;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
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
		{ &Z_Construct_UFunction_ACharacterBase_DamageTaken, "DamageTaken" }, // 4022654439
		{ &Z_Construct_UFunction_ACharacterBase_EndTurn, "EndTurn" }, // 2688557642
		{ &Z_Construct_UFunction_ACharacterBase_GetHealth, "GetHealth" }, // 3012835797
		{ &Z_Construct_UFunction_ACharacterBase_GetSin, "GetSin" }, // 2889335638
		{ &Z_Construct_UFunction_ACharacterBase_GetStr, "GetStr" }, // 3571074222
		{ &Z_Construct_UFunction_ACharacterBase_HealthAdded, "HealthAdded" }, // 1948509
		{ &Z_Construct_UFunction_ACharacterBase_OnDeath, "OnDeath" }, // 3547108186
		{ &Z_Construct_UFunction_ACharacterBase_SetActiveDecal, "SetActiveDecal" }, // 791652923
		{ &Z_Construct_UFunction_ACharacterBase_SetCurrentSlot, "SetCurrentSlot" }, // 2740223315
		{ &Z_Construct_UFunction_ACharacterBase_SinAdd, "SinAdd" }, // 639640268
		{ &Z_Construct_UFunction_ACharacterBase_SinReduce, "SinReduce" }, // 2617642140
		{ &Z_Construct_UFunction_ACharacterBase_StartTurn, "StartTurn" }, // 2377388223
		{ &Z_Construct_UFunction_ACharacterBase_StrAdd, "StrAdd" }, // 2861245764
		{ &Z_Construct_UFunction_ACharacterBase_StrReduce, "StrReduce" }, // 863136254
		{ &Z_Construct_UFunction_ACharacterBase_StrSet, "StrSet" }, // 2130834172
		{ &Z_Construct_UFunction_ACharacterBase_UpdateDataText, "UpdateDataText" }, // 2492805129
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterBase.h" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_CurrentSlot_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_CurrentSlot = { "CurrentSlot", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, CurrentSlot), Z_Construct_UClass_ABaseSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_CurrentSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_CurrentSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType = { "CharacterType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, CharacterType), Z_Construct_UEnum_AutoBattlerProto_ETurnEnum, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_Str_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, Str), METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Str_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_Sin_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_Sin = { "Sin", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, Sin), METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Sin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Sin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, Health), METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, GameMode), Z_Construct_UClass_AAutoBattlerProtoGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_CombatManager_MetaData[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_CombatManager = { "CombatManager", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, CombatManager), Z_Construct_UClass_UCombatManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_CombatManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_CombatManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_SoulTrialManager_MetaData[] = {
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_SoulTrialManager = { "SoulTrialManager", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, SoulTrialManager), Z_Construct_UClass_USoulTrialManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_SoulTrialManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_SoulTrialManager_MetaData)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterBase_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBase_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterBase, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_CurrentSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_CharacterType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_Str,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_Sin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_CombatManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_SoulTrialManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_StatsText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBase_Statics::NewProp_Root,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UActivationInterface_NoRegister, (int32)VTABLE_OFFSET(ACharacterBase, IActivationInterface), false },
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
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(ACharacterBase, 1128045430);
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
