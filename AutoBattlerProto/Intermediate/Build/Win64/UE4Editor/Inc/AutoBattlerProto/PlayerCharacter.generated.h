// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOBATTLERPROTO_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define AUTOBATTLERPROTO_PlayerCharacter_generated_h

#define AutoBattlerProto_Source_PlayerCharacter_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDraggableParams_Statics; \
	AUTOBATTLERPROTO_API static class UScriptStruct* StaticStruct();


template<> AUTOBATTLERPROTO_API UScriptStruct* StaticStruct<struct FDraggableParams>();

#define AutoBattlerProto_Source_PlayerCharacter_h_36_SPARSE_DATA
#define AutoBattlerProto_Source_PlayerCharacter_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanClick) \
	{ \
		P_GET_UBOOL(Z_Param_bCanClick); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CanClick(Z_Param_bCanClick); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_PlayerCharacter_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanClick) \
	{ \
		P_GET_UBOOL(Z_Param_bCanClick); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CanClick(Z_Param_bCanClick); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_PlayerCharacter_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define AutoBattlerProto_Source_PlayerCharacter_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define AutoBattlerProto_Source_PlayerCharacter_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define AutoBattlerProto_Source_PlayerCharacter_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define AutoBattlerProto_Source_PlayerCharacter_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SoulStatusText() { return STRUCT_OFFSET(APlayerCharacter, SoulStatusText); }


#define AutoBattlerProto_Source_PlayerCharacter_h_33_PROLOG
#define AutoBattlerProto_Source_PlayerCharacter_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_PlayerCharacter_h_36_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_PlayerCharacter_h_36_SPARSE_DATA \
	AutoBattlerProto_Source_PlayerCharacter_h_36_RPC_WRAPPERS \
	AutoBattlerProto_Source_PlayerCharacter_h_36_INCLASS \
	AutoBattlerProto_Source_PlayerCharacter_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_PlayerCharacter_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_PlayerCharacter_h_36_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_PlayerCharacter_h_36_SPARSE_DATA \
	AutoBattlerProto_Source_PlayerCharacter_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_PlayerCharacter_h_36_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_PlayerCharacter_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
