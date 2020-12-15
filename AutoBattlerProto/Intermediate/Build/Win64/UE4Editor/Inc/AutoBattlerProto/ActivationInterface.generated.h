// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOBATTLERPROTO_ActivationInterface_generated_h
#error "ActivationInterface.generated.h already included, missing '#pragma once' in ActivationInterface.h"
#endif
#define AUTOBATTLERPROTO_ActivationInterface_generated_h

#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_SPARSE_DATA
#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_RPC_WRAPPERS
#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOBATTLERPROTO_API UActivationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivationInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOBATTLERPROTO_API, UActivationInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivationInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUTOBATTLERPROTO_API UActivationInterface(UActivationInterface&&); \
	AUTOBATTLERPROTO_API UActivationInterface(const UActivationInterface&); \
public:


#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOBATTLERPROTO_API UActivationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUTOBATTLERPROTO_API UActivationInterface(UActivationInterface&&); \
	AUTOBATTLERPROTO_API UActivationInterface(const UActivationInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOBATTLERPROTO_API, UActivationInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivationInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivationInterface)


#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActivationInterface(); \
	friend struct Z_Construct_UClass_UActivationInterface_Statics; \
public: \
	DECLARE_CLASS(UActivationInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AutoBattlerProto"), AUTOBATTLERPROTO_API) \
	DECLARE_SERIALIZER(UActivationInterface)


#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_GENERATED_UINTERFACE_BODY() \
	AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_GENERATED_UINTERFACE_BODY() \
	AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActivationInterface() {} \
public: \
	typedef UActivationInterface UClassType; \
	typedef IActivationInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IActivationInterface() {} \
public: \
	typedef UActivationInterface UClassType; \
	typedef IActivationInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_9_PROLOG
#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_RPC_WRAPPERS \
	AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AutoBattlerProto_Source_Lautturi_ActivationInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_SPARSE_DATA \
	AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AutoBattlerProto_Source_Lautturi_ActivationInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOBATTLERPROTO_API UClass* StaticClass<class UActivationInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AutoBattlerProto_Source_Lautturi_ActivationInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
