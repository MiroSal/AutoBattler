// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/EnemyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBase() {}
// Cross Module References
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_AEnemyBase();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ACharacterBase();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_AEnemyBase_ActionSkillUsed();
	AUTOBATTLERPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FSoulData();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_AEnemyBase_Attack();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType();
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_ESkillType();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_AEnemyBase_GetSlot();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ABaseSlot_NoRegister();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_AEnemyBase_HealthAdd();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_AEnemyBase_HealthReduce();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void AEnemyBase::StaticRegisterNativesAEnemyBase()
	{
		UClass* Class = AEnemyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActionSkillUsed", &AEnemyBase::execActionSkillUsed },
			{ "Attack", &AEnemyBase::execAttack },
			{ "GetPassiveSkillType", &AEnemyBase::execGetPassiveSkillType },
			{ "GetPrimarySkillType", &AEnemyBase::execGetPrimarySkillType },
			{ "GetSlot", &AEnemyBase::execGetSlot },
			{ "HealthAdd", &AEnemyBase::execHealthAdd },
			{ "HealthReduce", &AEnemyBase::execHealthReduce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyBase_ActionSkillUsed_Statics
	{
		struct EnemyBase_eventActionSkillUsed_Parms
		{
			FSoulData ActionInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyBase_ActionSkillUsed_Statics::NewProp_ActionInfo = { "ActionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventActionSkillUsed_Parms, ActionInfo), Z_Construct_UScriptStruct_FSoulData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_ActionSkillUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_ActionSkillUsed_Statics::NewProp_ActionInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_ActionSkillUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_ActionSkillUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "ActionSkillUsed", nullptr, nullptr, sizeof(EnemyBase_eventActionSkillUsed_Parms), Z_Construct_UFunction_AEnemyBase_ActionSkillUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_ActionSkillUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_ActionSkillUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_ActionSkillUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_ActionSkillUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_ActionSkillUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_Attack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics
	{
		struct EnemyBase_eventGetPassiveSkillType_Parms
		{
			ESkillType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventGetPassiveSkillType_Parms, ReturnValue), Z_Construct_UEnum_AutoBattlerProto_ESkillType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "GetPassiveSkillType", nullptr, nullptr, sizeof(EnemyBase_eventGetPassiveSkillType_Parms), Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics
	{
		struct EnemyBase_eventGetPrimarySkillType_Parms
		{
			ESkillType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventGetPrimarySkillType_Parms, ReturnValue), Z_Construct_UEnum_AutoBattlerProto_ESkillType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "GetPrimarySkillType", nullptr, nullptr, sizeof(EnemyBase_eventGetPrimarySkillType_Parms), Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_GetSlot_Statics
	{
		struct EnemyBase_eventGetSlot_Parms
		{
			ABaseSlot* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_GetSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventGetSlot_Parms, ReturnValue), Z_Construct_UClass_ABaseSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_GetSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_GetSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_GetSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_GetSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "GetSlot", nullptr, nullptr, sizeof(EnemyBase_eventGetSlot_Parms), Z_Construct_UFunction_AEnemyBase_GetSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_GetSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_GetSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_GetSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics
	{
		struct EnemyBase_eventHealthAdd_Parms
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
	void Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnemyBase_eventHealthAdd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyBase_eventHealthAdd_Parms), &Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventHealthAdd_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "HealthAdd", nullptr, nullptr, sizeof(EnemyBase_eventHealthAdd_Parms), Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_HealthAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_HealthAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics
	{
		struct EnemyBase_eventHealthReduce_Parms
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
	void Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnemyBase_eventHealthReduce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyBase_eventHealthReduce_Parms), &Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventHealthReduce_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "HealthReduce", nullptr, nullptr, sizeof(EnemyBase_eventHealthReduce_Parms), Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_HealthReduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_HealthReduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyBase_NoRegister()
	{
		return AEnemyBase::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Passive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Passive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Primary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PassiveSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimarySkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PrimarySkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyCountText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyCountText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyBase_ActionSkillUsed, "ActionSkillUsed" }, // 3052136898
		{ &Z_Construct_UFunction_AEnemyBase_Attack, "Attack" }, // 19490566
		{ &Z_Construct_UFunction_AEnemyBase_GetPassiveSkillType, "GetPassiveSkillType" }, // 1013916488
		{ &Z_Construct_UFunction_AEnemyBase_GetPrimarySkillType, "GetPrimarySkillType" }, // 2582768078
		{ &Z_Construct_UFunction_AEnemyBase_GetSlot, "GetSlot" }, // 2983944443
		{ &Z_Construct_UFunction_AEnemyBase_HealthAdd, "HealthAdd" }, // 2131147726
		{ &Z_Construct_UFunction_AEnemyBase_HealthReduce, "HealthReduce" }, // 2683167722
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyBase.h" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_Passive_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_Passive = { "Passive", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, Passive), Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Passive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Passive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_Primary_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, Primary), Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Primary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_PassiveSkill_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_PassiveSkill = { "PassiveSkill", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, PassiveSkill), Z_Construct_UClass_USkillBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_PassiveSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_PassiveSkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_PrimarySkill_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_PrimarySkill = { "PrimarySkill", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, PrimarySkill), Z_Construct_UClass_USkillBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_PrimarySkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_PrimarySkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyCountText_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyCountText = { "EnemyCountText", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, EnemyCountText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyCountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyCountText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_Passive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_Primary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_PassiveSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_PrimarySkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyCountText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBase_Statics::ClassParams = {
		&AEnemyBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyBase, 4052208684);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<AEnemyBase>()
	{
		return AEnemyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyBase(Z_Construct_UClass_AEnemyBase, &AEnemyBase::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("AEnemyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
