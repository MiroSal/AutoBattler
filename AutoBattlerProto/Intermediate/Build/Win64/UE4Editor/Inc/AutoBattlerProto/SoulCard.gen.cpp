// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lautturi/SoulCard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulCard() {}
// Cross Module References
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ASoulCard_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ASoulCard();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ACharacterBase();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ASoulCard_ActionSkillUsed();
	AUTOBATTLERPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FSoulData();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ASoulCard_CanClick();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ASoulCard_GetSlot();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ABaseSlot_NoRegister();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ASoulCard_HealthAdd();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_ASoulCard_HealthReduce();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_USkillBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void ASoulCard::StaticRegisterNativesASoulCard()
	{
		UClass* Class = ASoulCard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActionSkillUsed", &ASoulCard::execActionSkillUsed },
			{ "CanClick", &ASoulCard::execCanClick },
			{ "GetSlot", &ASoulCard::execGetSlot },
			{ "HealthAdd", &ASoulCard::execHealthAdd },
			{ "HealthReduce", &ASoulCard::execHealthReduce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASoulCard_ActionSkillUsed_Statics
	{
		struct SoulCard_eventActionSkillUsed_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASoulCard_ActionSkillUsed_Statics::NewProp_ActionInfo = { "ActionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoulCard_eventActionSkillUsed_Parms, ActionInfo), Z_Construct_UScriptStruct_FSoulData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASoulCard_ActionSkillUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoulCard_ActionSkillUsed_Statics::NewProp_ActionInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASoulCard_ActionSkillUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASoulCard_ActionSkillUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASoulCard, nullptr, "ActionSkillUsed", nullptr, nullptr, sizeof(SoulCard_eventActionSkillUsed_Parms), Z_Construct_UFunction_ASoulCard_ActionSkillUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulCard_ActionSkillUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASoulCard_ActionSkillUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulCard_ActionSkillUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASoulCard_ActionSkillUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASoulCard_ActionSkillUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASoulCard_CanClick_Statics
	{
		struct SoulCard_eventCanClick_Parms
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
	void Z_Construct_UFunction_ASoulCard_CanClick_Statics::NewProp_bCanClick_SetBit(void* Obj)
	{
		((SoulCard_eventCanClick_Parms*)Obj)->bCanClick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASoulCard_CanClick_Statics::NewProp_bCanClick = { "bCanClick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoulCard_eventCanClick_Parms), &Z_Construct_UFunction_ASoulCard_CanClick_Statics::NewProp_bCanClick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASoulCard_CanClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoulCard_CanClick_Statics::NewProp_bCanClick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASoulCard_CanClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASoulCard_CanClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASoulCard, nullptr, "CanClick", nullptr, nullptr, sizeof(SoulCard_eventCanClick_Parms), Z_Construct_UFunction_ASoulCard_CanClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulCard_CanClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASoulCard_CanClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulCard_CanClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASoulCard_CanClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASoulCard_CanClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASoulCard_GetSlot_Statics
	{
		struct SoulCard_eventGetSlot_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASoulCard_GetSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoulCard_eventGetSlot_Parms, ReturnValue), Z_Construct_UClass_ABaseSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASoulCard_GetSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoulCard_GetSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASoulCard_GetSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASoulCard_GetSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASoulCard, nullptr, "GetSlot", nullptr, nullptr, sizeof(SoulCard_eventGetSlot_Parms), Z_Construct_UFunction_ASoulCard_GetSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulCard_GetSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASoulCard_GetSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulCard_GetSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASoulCard_GetSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASoulCard_GetSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASoulCard_HealthAdd_Statics
	{
		struct SoulCard_eventHealthAdd_Parms
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
	void Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoulCard_eventHealthAdd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoulCard_eventHealthAdd_Parms), &Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoulCard_eventHealthAdd_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASoulCard, nullptr, "HealthAdd", nullptr, nullptr, sizeof(SoulCard_eventHealthAdd_Parms), Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASoulCard_HealthAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASoulCard_HealthAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASoulCard_HealthReduce_Statics
	{
		struct SoulCard_eventHealthReduce_Parms
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
	void Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoulCard_eventHealthReduce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoulCard_eventHealthReduce_Parms), &Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoulCard_eventHealthReduce_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASoulCard, nullptr, "HealthReduce", nullptr, nullptr, sizeof(SoulCard_eventHealthReduce_Parms), Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASoulCard_HealthReduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASoulCard_HealthReduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASoulCard_NoRegister()
	{
		return ASoulCard::StaticClass();
	}
	struct Z_Construct_UClass_ASoulCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoCoinColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoCoinColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AliveColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AliveColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivatedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeactivatedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatedColor;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PassiveSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimarySkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimarySkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTestAction_MetaData[];
#endif
		static void NewProp_bTestAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAlive_MetaData[];
#endif
		static void NewProp_bIsAlive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAlive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasCoin_MetaData[];
#endif
		static void NewProp_bHasCoin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCoin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulStatusText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulStatusText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASoulCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASoulCard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASoulCard_ActionSkillUsed, "ActionSkillUsed" }, // 76861076
		{ &Z_Construct_UFunction_ASoulCard_CanClick, "CanClick" }, // 146881444
		{ &Z_Construct_UFunction_ASoulCard_GetSlot, "GetSlot" }, // 3826665111
		{ &Z_Construct_UFunction_ASoulCard_HealthAdd, "HealthAdd" }, // 2351564174
		{ &Z_Construct_UFunction_ASoulCard_HealthReduce, "HealthReduce" }, // 1252853054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoulCard.h" },
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::NewProp_NoCoinColor_MetaData[] = {
		{ "Category", "SoulCard" },
		{ "Comment", "//temp\n" },
		{ "ModuleRelativePath", "SoulCard.h" },
		{ "ToolTip", "temp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_NoCoinColor = { "NoCoinColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoulCard, NoCoinColor), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::NewProp_NoCoinColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::NewProp_NoCoinColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::NewProp_AliveColor_MetaData[] = {
		{ "Category", "SoulCard" },
		{ "Comment", "//temp\n" },
		{ "ModuleRelativePath", "SoulCard.h" },
		{ "ToolTip", "temp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_AliveColor = { "AliveColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoulCard, AliveColor), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::NewProp_AliveColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::NewProp_AliveColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::NewProp_DeactivatedColor_MetaData[] = {
		{ "Category", "SoulCard" },
		{ "Comment", "//temp\n" },
		{ "ModuleRelativePath", "SoulCard.h" },
		{ "ToolTip", "temp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_DeactivatedColor = { "DeactivatedColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoulCard, DeactivatedColor), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::NewProp_DeactivatedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::NewProp_DeactivatedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::NewProp_ActivatedColor_MetaData[] = {
		{ "Category", "SoulCard" },
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_ActivatedColor = { "ActivatedColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoulCard, ActivatedColor), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::NewProp_ActivatedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::NewProp_ActivatedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePassiveSkills_MetaData[] = {
		{ "Category", "SoulCard" },
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePassiveSkills = { "AllPossiblePassiveSkills", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoulCard, AllPossiblePassiveSkills), METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePassiveSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePassiveSkills_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePassiveSkills_Inner = { "AllPossiblePassiveSkills", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePrimarySkills_MetaData[] = {
		{ "Category", "SoulCard" },
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePrimarySkills = { "AllPossiblePrimarySkills", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoulCard, AllPossiblePrimarySkills), METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePrimarySkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePrimarySkills_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePrimarySkills_Inner = { "AllPossiblePrimarySkills", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkillBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::NewProp_PassiveSkill_MetaData[] = {
		{ "Category", "SoulCard" },
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_PassiveSkill = { "PassiveSkill", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoulCard, PassiveSkill), Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::NewProp_PassiveSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::NewProp_PassiveSkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::NewProp_PrimarySkill_MetaData[] = {
		{ "Category", "SoulCard" },
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_PrimarySkill = { "PrimarySkill", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoulCard, PrimarySkill), Z_Construct_UClass_USkillBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::NewProp_PrimarySkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::NewProp_PrimarySkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::NewProp_bTestAction_MetaData[] = {
		{ "Category", "SoulCard" },
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	void Z_Construct_UClass_ASoulCard_Statics::NewProp_bTestAction_SetBit(void* Obj)
	{
		((ASoulCard*)Obj)->bTestAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_bTestAction = { "bTestAction", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASoulCard), &Z_Construct_UClass_ASoulCard_Statics::NewProp_bTestAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::NewProp_bTestAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::NewProp_bTestAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::NewProp_bIsAlive_MetaData[] = {
		{ "Category", "SoulCard" },
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	void Z_Construct_UClass_ASoulCard_Statics::NewProp_bIsAlive_SetBit(void* Obj)
	{
		((ASoulCard*)Obj)->bIsAlive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_bIsAlive = { "bIsAlive", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASoulCard), &Z_Construct_UClass_ASoulCard_Statics::NewProp_bIsAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::NewProp_bIsAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::NewProp_bIsAlive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::NewProp_bHasCoin_MetaData[] = {
		{ "Category", "SoulCard" },
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	void Z_Construct_UClass_ASoulCard_Statics::NewProp_bHasCoin_SetBit(void* Obj)
	{
		((ASoulCard*)Obj)->bHasCoin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_bHasCoin = { "bHasCoin", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASoulCard), &Z_Construct_UClass_ASoulCard_Statics::NewProp_bHasCoin_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::NewProp_bHasCoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::NewProp_bHasCoin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulCard_Statics::NewProp_SoulStatusText_MetaData[] = {
		{ "Category", "SoulCard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SoulCard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoulCard_Statics::NewProp_SoulStatusText = { "SoulStatusText", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoulCard, SoulStatusText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::NewProp_SoulStatusText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::NewProp_SoulStatusText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoulCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_NoCoinColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_AliveColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_DeactivatedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_ActivatedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePassiveSkills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePassiveSkills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePrimarySkills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_AllPossiblePrimarySkills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_PassiveSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_PrimarySkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_bTestAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_bIsAlive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_bHasCoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoulCard_Statics::NewProp_SoulStatusText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASoulCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoulCard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASoulCard_Statics::ClassParams = {
		&ASoulCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASoulCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASoulCard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASoulCard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASoulCard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASoulCard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASoulCard, 17460396);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<ASoulCard>()
	{
		return ASoulCard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASoulCard(Z_Construct_UClass_ASoulCard, &ASoulCard::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("ASoulCard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASoulCard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
