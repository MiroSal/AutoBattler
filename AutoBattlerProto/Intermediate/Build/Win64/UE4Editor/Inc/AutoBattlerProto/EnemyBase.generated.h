// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOBATTLERPROTO_EnemyBase_generated_h
#error "EnemyBase.generated.h already included, missing '#pragma once' in EnemyBase.h"
#endif
#define AUTOBATTLERPROTO_EnemyBase_generated_h

#define AutoBattlerProto_Source_EnemyBase_h_11_SPARSE_DATA
#define AutoBattlerProto_Source_EnemyBase_h_11_RPC_WRAPPERS
#define AutoBattlerProto_Source_EnemyBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define AutoBattlerProto_Source_EnemyBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase)


#define AutoBattlerProto_Source_EnemyBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase)


#define AutoBattlerProto_Source_EnemyBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public:


#define AutoBattlerProto_Source_EnemyBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyBase)


#define AutoBattlerProto_Source_EnemyBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EnemyCountText() { return STRUCT_OFFSET(AEnemyBase, EnemyCountText); }


#define AutoBattlerProto_Source_EnemyBase_h_8_PROLOG
#define AutoBattlerProto_Source_EnemyBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_EnemyBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_EnemyBase_h_11_SPARSE_DATA \
	AutoBattlerProto_Source_EnemyBase_h_11_RPC_WRAPPERS \
	AutoBattlerProto_Source_EnemyBase_h_11_INCLASS \
	AutoBattlerProto_Source_EnemyBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_EnemyBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_EnemyBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_EnemyBase_h_11_SPARSE_DATA \
	AutoBattlerProto_Source_EnemyBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_EnemyBase_h_11_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_EnemyBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class AEnemyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_EnemyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
