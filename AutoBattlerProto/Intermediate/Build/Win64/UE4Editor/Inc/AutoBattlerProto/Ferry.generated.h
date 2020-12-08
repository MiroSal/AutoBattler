// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOBATTLERPROTO_Ferry_generated_h
#error "Ferry.generated.h already included, missing '#pragma once' in Ferry.h"
#endif
#define AUTOBATTLERPROTO_Ferry_generated_h

#define AutoBattlerProto_Source_Lautturi_Ferry_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFerrySoulSpot_Statics; \
	AUTOBATTLERPROTO_API static class UScriptStruct* StaticStruct();


template<> AUTOBATTLERPROTO_API UScriptStruct* StaticStruct<struct FFerrySoulSpot>();

#define AutoBattlerProto_Source_Lautturi_Ferry_h_31_SPARSE_DATA
#define AutoBattlerProto_Source_Lautturi_Ferry_h_31_RPC_WRAPPERS
#define AutoBattlerProto_Source_Lautturi_Ferry_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define AutoBattlerProto_Source_Lautturi_Ferry_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFerry(); \
	friend struct Z_Construct_UClass_AFerry_Statics; \
public: \
	DECLARE_CLASS(AFerry, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(AFerry) \
	virtual UObject* _getUObject() const override { return const_cast<AFerry*>(this); }


#define AutoBattlerProto_Source_Lautturi_Ferry_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAFerry(); \
	friend struct Z_Construct_UClass_AFerry_Statics; \
public: \
	DECLARE_CLASS(AFerry, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), NO_API) \
	DECLARE_SERIALIZER(AFerry) \
	virtual UObject* _getUObject() const override { return const_cast<AFerry*>(this); }


#define AutoBattlerProto_Source_Lautturi_Ferry_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFerry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFerry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFerry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFerry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFerry(AFerry&&); \
	NO_API AFerry(const AFerry&); \
public:


#define AutoBattlerProto_Source_Lautturi_Ferry_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFerry(AFerry&&); \
	NO_API AFerry(const AFerry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFerry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFerry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFerry)


#define AutoBattlerProto_Source_Lautturi_Ferry_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AFerry, Root); } \
	FORCEINLINE static uint32 __PPO__FerryMesh() { return STRUCT_OFFSET(AFerry, FerryMesh); } \
	FORCEINLINE static uint32 __PPO__SoulSpot1() { return STRUCT_OFFSET(AFerry, SoulSpot1); } \
	FORCEINLINE static uint32 __PPO__SoulSpot2() { return STRUCT_OFFSET(AFerry, SoulSpot2); } \
	FORCEINLINE static uint32 __PPO__SoulSpot3() { return STRUCT_OFFSET(AFerry, SoulSpot3); } \
	FORCEINLINE static uint32 __PPO__SoulSpot4() { return STRUCT_OFFSET(AFerry, SoulSpot4); } \
	FORCEINLINE static uint32 __PPO__SoulSpot5() { return STRUCT_OFFSET(AFerry, SoulSpot5); }


#define AutoBattlerProto_Source_Lautturi_Ferry_h_28_PROLOG
#define AutoBattlerProto_Source_Lautturi_Ferry_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_Ferry_h_31_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_Ferry_h_31_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_Ferry_h_31_RPC_WRAPPERS \
	AutoBattlerProto_Source_Lautturi_Ferry_h_31_INCLASS \
	AutoBattlerProto_Source_Lautturi_Ferry_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_Ferry_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_Ferry_h_31_PRIVATE_PROPERTY_OFFSET \
	AutoBattlerProto_Source_Lautturi_Ferry_h_31_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_Ferry_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_Ferry_h_31_INCLASS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_Ferry_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class AFerry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_Lautturi_Ferry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
