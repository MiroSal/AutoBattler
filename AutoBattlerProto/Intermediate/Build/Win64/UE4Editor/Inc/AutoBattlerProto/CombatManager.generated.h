// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCharacterData;
#ifdef AUTOBATTLERPROTO_CombatManager_generated_h
#error "CombatManager.generated.h already included, missing '#pragma once' in CombatManager.h"
#endif
#define AUTOBATTLERPROTO_CombatManager_generated_h

#define AutoBattlerProto_Source_Lautturi_CombatManager_h_10_DELEGATE \
struct _Script_AutoBattlerProto_eventSkillUsedDelegate_Parms \
{ \
	FCharacterData SoulData; \
}; \
static inline void FSkillUsedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SkillUsedDelegate, FCharacterData SoulData) \
{ \
	_Script_AutoBattlerProto_eventSkillUsedDelegate_Parms Parms; \
	Parms.SoulData=SoulData; \
	SkillUsedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AutoBattlerProto_Source_Lautturi_CombatManager_h_23_SPARSE_DATA
#define AutoBattlerProto_Source_Lautturi_CombatManager_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPopNextSkillActionFromQueue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PopNextSkillActionFromQueue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeTurn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeTurn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSkillActionToQueue) \
	{ \
		P_GET_STRUCT(FCharacterData,Z_Param_ActionData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSkillActionToQueue(Z_Param_ActionData); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_Lautturi_CombatManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPopNextSkillActionFromQueue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PopNextSkillActionFromQueue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeTurn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeTurn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSkillActionToQueue) \
	{ \
		P_GET_STRUCT(FCharacterData,Z_Param_ActionData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSkillActionToQueue(Z_Param_ActionData); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_Lautturi_CombatManager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatManager(); \
	friend struct Z_Construct_UClass_UCombatManager_Statics; \
public: \
	DECLARE_CLASS(UCombatManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(UCombatManager)


#define AutoBattlerProto_Source_Lautturi_CombatManager_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCombatManager(); \
	friend struct Z_Construct_UClass_UCombatManager_Statics; \
public: \
	DECLARE_CLASS(UCombatManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(UCombatManager)


#define AutoBattlerProto_Source_Lautturi_CombatManager_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatManager(UCombatManager&&); \
	NO_API UCombatManager(const UCombatManager&); \
public:


#define AutoBattlerProto_Source_Lautturi_CombatManager_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatManager(UCombatManager&&); \
	NO_API UCombatManager(const UCombatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatManager)


#define AutoBattlerProto_Source_Lautturi_CombatManager_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CombatCharacterListeners() { return STRUCT_OFFSET(UCombatManager, CombatCharacterListeners); } \
	FORCEINLINE static uint32 __PPO__CombatEnemyListeners() { return STRUCT_OFFSET(UCombatManager, CombatEnemyListeners); } \
	FORCEINLINE static uint32 __PPO__CurrentSoulIndexInAction() { return STRUCT_OFFSET(UCombatManager, CurrentSoulIndexInAction); } \
	FORCEINLINE static uint32 __PPO__CurrentEnemyIndexInAction() { return STRUCT_OFFSET(UCombatManager, CurrentEnemyIndexInAction); } \
	FORCEINLINE static uint32 __PPO__CurrentListenerList() { return STRUCT_OFFSET(UCombatManager, CurrentListenerList); } \
	FORCEINLINE static uint32 __PPO__ActionQueue() { return STRUCT_OFFSET(UCombatManager, ActionQueue); } \
	FORCEINLINE static uint32 __PPO__CurrentSoulInAction() { return STRUCT_OFFSET(UCombatManager, CurrentSoulInAction); } \
	FORCEINLINE static uint32 __PPO__CurrentTurn() { return STRUCT_OFFSET(UCombatManager, CurrentTurn); }


#define AutoBattlerProto_Source_Lautturi_CombatManager_h_20_PROLOG
#define AutoBattlerProto_Source_Lautturi_CombatManager_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_CombatManager_h_23_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_CombatManager_h_23_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_CombatManager_h_23_RPC_WRAPPERS \
	AutoBattlerProto_Source_Lautturi_CombatManager_h_23_INCLASS \
	AutoBattlerProto_Source_Lautturi_CombatManager_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_CombatManager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_CombatManager_h_23_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_CombatManager_h_23_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_CombatManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_CombatManager_h_23_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_CombatManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class UCombatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_Lautturi_CombatManager_h


#define FOREACH_ENUM_ETURNENUM(op) \
	op(ETurnEnum::TE_Player) \
	op(ETurnEnum::TE_Enemy) \
	op(ETurnEnum::TE_None) 

enum class ETurnEnum : uint8;
template<> AUTOBATTLERPROTO_API UEnum* StaticEnum<ETurnEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
