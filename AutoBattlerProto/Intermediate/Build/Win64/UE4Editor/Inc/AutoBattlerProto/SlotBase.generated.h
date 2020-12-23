// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacterBase;
#ifdef AUTOBATTLERPROTO_SlotBase_generated_h
#error "SlotBase.generated.h already included, missing '#pragma once' in SlotBase.h"
#endif
#define AUTOBATTLERPROTO_SlotBase_generated_h

#define AutoBattlerProto_Source_SlotBase_h_10_SPARSE_DATA
#define AutoBattlerProto_Source_SlotBase_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCharacterInSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacterBase**)Z_Param__Result=P_THIS->GetCharacterInSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCurrentCharacterFromSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCurrentCharacterFromSlot(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_SlotBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCharacterInSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacterBase**)Z_Param__Result=P_THIS->GetCharacterInSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCurrentCharacterFromSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCurrentCharacterFromSlot(); \
		P_NATIVE_END; \
	}


#define AutoBattlerProto_Source_SlotBase_h_10_EVENT_PARMS
#define AutoBattlerProto_Source_SlotBase_h_10_CALLBACK_WRAPPERS
#define AutoBattlerProto_Source_SlotBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlotBase(); \
	friend struct Z_Construct_UClass_ASlotBase_Statics; \
public: \
	DECLARE_CLASS(ASlotBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(ASlotBase)


#define AutoBattlerProto_Source_SlotBase_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASlotBase(); \
	friend struct Z_Construct_UClass_ASlotBase_Statics; \
public: \
	DECLARE_CLASS(ASlotBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(ASlotBase)


#define AutoBattlerProto_Source_SlotBase_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASlotBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASlotBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlotBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlotBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlotBase(ASlotBase&&); \
	NO_API ASlotBase(const ASlotBase&); \
public:


#define AutoBattlerProto_Source_SlotBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlotBase(ASlotBase&&); \
	NO_API ASlotBase(const ASlotBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlotBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlotBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlotBase)


#define AutoBattlerProto_Source_SlotBase_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ASlotBase, Root); } \
	FORCEINLINE static uint32 __PPO__ArrowComponent() { return STRUCT_OFFSET(ASlotBase, ArrowComponent); } \
	FORCEINLINE static uint32 __PPO__CharacterClass() { return STRUCT_OFFSET(ASlotBase, CharacterClass); } \
	FORCEINLINE static uint32 __PPO__CharacterInSlot() { return STRUCT_OFFSET(ASlotBase, CharacterInSlot); }


#define AutoBattlerProto_Source_SlotBase_h_7_PROLOG \
	AutoBattlerProto_Source_SlotBase_h_10_EVENT_PARMS


#define AutoBattlerProto_Source_SlotBase_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_SlotBase_h_10_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_SlotBase_h_10_SPARSE_DATA \
	AutoBattlerProto_Source_SlotBase_h_10_RPC_WRAPPERS \
	AutoBattlerProto_Source_SlotBase_h_10_CALLBACK_WRAPPERS \
	AutoBattlerProto_Source_SlotBase_h_10_INCLASS \
	AutoBattlerProto_Source_SlotBase_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_SlotBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_SlotBase_h_10_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_SlotBase_h_10_SPARSE_DATA \
	AutoBattlerProto_Source_SlotBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_SlotBase_h_10_CALLBACK_WRAPPERS \
	AutoBattlerProto_Source_SlotBase_h_10_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_SlotBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class ASlotBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_SlotBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
