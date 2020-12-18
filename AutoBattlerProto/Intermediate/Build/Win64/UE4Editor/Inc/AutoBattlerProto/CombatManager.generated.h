// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacterBase;
enum class ESkillType : uint8;
#ifdef AUTOBATTLERPROTO_CombatManager_generated_h
#error "CombatManager.generated.h already included, missing '#pragma once' in CombatManager.h"
#endif
#define AUTOBATTLERPROTO_CombatManager_generated_h

#define AutoBattlerProto_Source_CombatManager_h_8_DELEGATE \
struct _Script_AutoBattlerProto_eventSkillUsedDelegate_Parms \
{ \
	ACharacterBase* Character; \
	ESkillType SkillType; \
}; \
static inline void FSkillUsedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SkillUsedDelegate, ACharacterBase* Character, ESkillType SkillType) \
{ \
	_Script_AutoBattlerProto_eventSkillUsedDelegate_Parms Parms; \
	Parms.Character=Character; \
	Parms.SkillType=SkillType; \
	SkillUsedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AutoBattlerProto_Source_CombatManager_h_21_SPARSE_DATA
#define AutoBattlerProto_Source_CombatManager_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartCombat) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCombat(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_CombatManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartCombat) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCombat(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_CombatManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatManager(); \
	friend struct Z_Construct_UClass_UCombatManager_Statics; \
public: \
	DECLARE_CLASS(UCombatManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(UCombatManager)


#define AutoBattlerProto_Source_CombatManager_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCombatManager(); \
	friend struct Z_Construct_UClass_UCombatManager_Statics; \
public: \
	DECLARE_CLASS(UCombatManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(UCombatManager)


#define AutoBattlerProto_Source_CombatManager_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatManager(UCombatManager&&); \
	NO_API UCombatManager(const UCombatManager&); \
public:


#define AutoBattlerProto_Source_CombatManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatManager(UCombatManager&&); \
	NO_API UCombatManager(const UCombatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatManager)


#define AutoBattlerProto_Source_CombatManager_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CombatPlayerListeners() { return STRUCT_OFFSET(UCombatManager, CombatPlayerListeners); } \
	FORCEINLINE static uint32 __PPO__CombatEnemyListeners() { return STRUCT_OFFSET(UCombatManager, CombatEnemyListeners); } \
	FORCEINLINE static uint32 __PPO__ActionQueue() { return STRUCT_OFFSET(UCombatManager, ActionQueue); } \
	FORCEINLINE static uint32 __PPO__CharacterIndex() { return STRUCT_OFFSET(UCombatManager, CharacterIndex); } \
	FORCEINLINE static uint32 __PPO__EnemyIndex() { return STRUCT_OFFSET(UCombatManager, EnemyIndex); } \
	FORCEINLINE static uint32 __PPO__ActiveCharacter() { return STRUCT_OFFSET(UCombatManager, ActiveCharacter); } \
	FORCEINLINE static uint32 __PPO__CurrentCombatTurn() { return STRUCT_OFFSET(UCombatManager, CurrentCombatTurn); } \
	FORCEINLINE static uint32 __PPO__bIsFirstTurn() { return STRUCT_OFFSET(UCombatManager, bIsFirstTurn); } \
	FORCEINLINE static uint32 __PPO__TotalEnemyCount() { return STRUCT_OFFSET(UCombatManager, TotalEnemyCount); } \
	FORCEINLINE static uint32 __PPO__CurrentEnemyCount() { return STRUCT_OFFSET(UCombatManager, CurrentEnemyCount); }


#define AutoBattlerProto_Source_CombatManager_h_18_PROLOG
#define AutoBattlerProto_Source_CombatManager_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_CombatManager_h_21_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_CombatManager_h_21_SPARSE_DATA \
	AutoBattlerProto_Source_CombatManager_h_21_RPC_WRAPPERS \
	AutoBattlerProto_Source_CombatManager_h_21_INCLASS \
	AutoBattlerProto_Source_CombatManager_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_CombatManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_CombatManager_h_21_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_CombatManager_h_21_SPARSE_DATA \
	AutoBattlerProto_Source_CombatManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_CombatManager_h_21_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_CombatManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class UCombatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_CombatManager_h


#define FOREACH_ENUM_ETURNENUM(op) \
	op(ETurnEnum::TE_Player) \
	op(ETurnEnum::TE_Enemy) \
	op(ETurnEnum::TE_None) 

enum class ETurnEnum : uint8;
template<> AUTOBATTLERPROTO_API UEnum* StaticEnum<ETurnEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
