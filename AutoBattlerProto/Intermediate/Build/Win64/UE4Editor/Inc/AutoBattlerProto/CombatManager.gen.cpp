// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/CombatManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatManager() {}
// Cross Module References
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AutoBattlerProto();
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_ESkillType();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
	AUTOBATTLERPROTO_API UEnum* Z_Construct_UEnum_AutoBattlerProto_ETurnEnum();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UCombatManager_NoRegister();
	AUTOBATTLERPROTO_API UClass* Z_Construct_UClass_UCombatManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AUTOBATTLERPROTO_API UFunction* Z_Construct_UFunction_UCombatManager_StartCombat();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics
	{
		struct _Script_AutoBattlerProto_eventSkillUsedDelegate_Parms
		{
			ACharacterBase* Character;
			ESkillType SkillType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkillType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkillType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::NewProp_SkillType = { "SkillType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AutoBattlerProto_eventSkillUsedDelegate_Parms, SkillType), Z_Construct_UEnum_AutoBattlerProto_ESkillType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::NewProp_SkillType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AutoBattlerProto_eventSkillUsedDelegate_Parms, Character), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::NewProp_SkillType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::NewProp_SkillType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoBattlerProto, nullptr, "SkillUsedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AutoBattlerProto_eventSkillUsedDelegate_Parms), Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETurnEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AutoBattlerProto_ETurnEnum, Z_Construct_UPackage__Script_AutoBattlerProto(), TEXT("ETurnEnum"));
		}
		return Singleton;
	}
	template<> AUTOBATTLERPROTO_API UEnum* StaticEnum<ETurnEnum>()
	{
		return ETurnEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETurnEnum(ETurnEnum_StaticEnum, TEXT("/Script/AutoBattlerProto"), TEXT("ETurnEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AutoBattlerProto_ETurnEnum_Hash() { return 2190050094U; }
	UEnum* Z_Construct_UEnum_AutoBattlerProto_ETurnEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AutoBattlerProto();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETurnEnum"), 0, Get_Z_Construct_UEnum_AutoBattlerProto_ETurnEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETurnEnum::TE_Player", (int64)ETurnEnum::TE_Player },
				{ "ETurnEnum::TE_Enemy", (int64)ETurnEnum::TE_Enemy },
				{ "ETurnEnum::TE_None", (int64)ETurnEnum::TE_None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "CombatManager.h" },
				{ "TE_Enemy.DisplayName", "Enemy" },
				{ "TE_Enemy.Name", "ETurnEnum::TE_Enemy" },
				{ "TE_None.DisplayName", "None" },
				{ "TE_None.Name", "ETurnEnum::TE_None" },
				{ "TE_Player.DisplayName", "Player" },
				{ "TE_Player.Name", "ETurnEnum::TE_Player" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AutoBattlerProto,
				nullptr,
				"ETurnEnum",
				"ETurnEnum",
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
	void UCombatManager::StaticRegisterNativesUCombatManager()
	{
		UClass* Class = UCombatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartCombat", &UCombatManager::execStartCombat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatManager_StartCombat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatManager_StartCombat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatManager_StartCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatManager, nullptr, "StartCombat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatManager_StartCombat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatManager_StartCombat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatManager_StartCombat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombatManager_StartCombat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCombatManager_NoRegister()
	{
		return UCombatManager::StaticClass();
	}
	struct Z_Construct_UClass_UCombatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillUsedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SkillUsedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEnemyCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentEnemyCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalEnemyCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalEnemyCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFirstTurn_MetaData[];
#endif
		static void NewProp_bIsFirstTurn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFirstTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCombatTurn_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentCombatTurn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentCombatTurn_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnemyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionQueue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatEnemyListeners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CombatEnemyListeners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatEnemyListeners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatPlayerListeners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CombatPlayerListeners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatPlayerListeners_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoBattlerProto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatManager_StartCombat, "StartCombat" }, // 384583086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatManager.h" },
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_SkillUsedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_SkillUsedDelegate = { "SkillUsedDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, SkillUsedDelegate), Z_Construct_UDelegateFunction_AutoBattlerProto_SkillUsedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_SkillUsedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_SkillUsedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyCount_MetaData[] = {
		{ "Comment", "//Temp for stat visualization\n" },
		{ "ModuleRelativePath", "CombatManager.h" },
		{ "ToolTip", "Temp for stat visualization" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyCount = { "CurrentEnemyCount", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, CurrentEnemyCount), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_TotalEnemyCount_MetaData[] = {
		{ "Comment", "//Temp for stat visualization\n" },
		{ "ModuleRelativePath", "CombatManager.h" },
		{ "ToolTip", "Temp for stat visualization" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_TotalEnemyCount = { "TotalEnemyCount", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, TotalEnemyCount), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_TotalEnemyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_TotalEnemyCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_bIsFirstTurn_MetaData[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	void Z_Construct_UClass_UCombatManager_Statics::NewProp_bIsFirstTurn_SetBit(void* Obj)
	{
		((UCombatManager*)Obj)->bIsFirstTurn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_bIsFirstTurn = { "bIsFirstTurn", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCombatManager), &Z_Construct_UClass_UCombatManager_Statics::NewProp_bIsFirstTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_bIsFirstTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_bIsFirstTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentCombatTurn_MetaData[] = {
		{ "Category", "CombatManager" },
		{ "Comment", "//is it player or enemy turn\n" },
		{ "ModuleRelativePath", "CombatManager.h" },
		{ "ToolTip", "is it player or enemy turn" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentCombatTurn = { "CurrentCombatTurn", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, CurrentCombatTurn), Z_Construct_UEnum_AutoBattlerProto_ETurnEnum, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentCombatTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentCombatTurn_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentCombatTurn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_ActiveCharacter_MetaData[] = {
		{ "Comment", "//Active at current turn\n" },
		{ "ModuleRelativePath", "CombatManager.h" },
		{ "ToolTip", "Active at current turn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_ActiveCharacter = { "ActiveCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, ActiveCharacter), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_ActiveCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_ActiveCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_EnemyIndex_MetaData[] = {
		{ "Comment", "//Keeps track whose enemy's turn\n" },
		{ "ModuleRelativePath", "CombatManager.h" },
		{ "ToolTip", "Keeps track whose enemy's turn" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_EnemyIndex = { "EnemyIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, EnemyIndex), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_EnemyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_EnemyIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "Comment", "//Keeps track whose player's turn\n" },
		{ "ModuleRelativePath", "CombatManager.h" },
		{ "ToolTip", "Keeps track whose player's turn" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, PlayerIndex), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue_MetaData[] = {
		{ "Comment", "//Skill in queue\n" },
		{ "ModuleRelativePath", "CombatManager.h" },
		{ "ToolTip", "Skill in queue" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue = { "ActionQueue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, ActionQueue), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue_Inner = { "ActionQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners_MetaData[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners = { "CombatEnemyListeners", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, CombatEnemyListeners), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners_Inner = { "CombatEnemyListeners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatPlayerListeners_MetaData[] = {
		{ "ModuleRelativePath", "CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatPlayerListeners = { "CombatPlayerListeners", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatManager, CombatPlayerListeners), METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatPlayerListeners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatPlayerListeners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatPlayerListeners_Inner = { "CombatPlayerListeners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_SkillUsedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentEnemyCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_TotalEnemyCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_bIsFirstTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentCombatTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CurrentCombatTurn_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_ActiveCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_EnemyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_ActionQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatEnemyListeners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatPlayerListeners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatManager_Statics::NewProp_CombatPlayerListeners_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatManager_Statics::ClassParams = {
		&UCombatManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCombatManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatManager, 135911923);
	template<> AUTOBATTLERPROTO_API UClass* StaticClass<UCombatManager>()
	{
		return UCombatManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatManager(Z_Construct_UClass_UCombatManager, &UCombatManager::StaticClass, TEXT("/Script/AutoBattlerProto"), TEXT("UCombatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
