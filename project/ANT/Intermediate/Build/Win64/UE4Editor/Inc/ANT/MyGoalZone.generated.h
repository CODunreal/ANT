// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ANT_MyGoalZone_generated_h
#error "MyGoalZone.generated.h already included, missing '#pragma once' in MyGoalZone.h"
#endif
#define ANT_MyGoalZone_generated_h

#define ANT_Source_ANT_MyGoalZone_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlapedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlapedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define ANT_Source_ANT_MyGoalZone_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlapedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlapedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlapedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define ANT_Source_ANT_MyGoalZone_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGoalZone(); \
	friend struct Z_Construct_UClass_AMyGoalZone_Statics; \
public: \
	DECLARE_CLASS(AMyGoalZone, ATriggerBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ANT"), NO_API) \
	DECLARE_SERIALIZER(AMyGoalZone)


#define ANT_Source_ANT_MyGoalZone_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyGoalZone(); \
	friend struct Z_Construct_UClass_AMyGoalZone_Statics; \
public: \
	DECLARE_CLASS(AMyGoalZone, ATriggerBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ANT"), NO_API) \
	DECLARE_SERIALIZER(AMyGoalZone)


#define ANT_Source_ANT_MyGoalZone_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGoalZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGoalZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGoalZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGoalZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGoalZone(AMyGoalZone&&); \
	NO_API AMyGoalZone(const AMyGoalZone&); \
public:


#define ANT_Source_ANT_MyGoalZone_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGoalZone(AMyGoalZone&&); \
	NO_API AMyGoalZone(const AMyGoalZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGoalZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGoalZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGoalZone)


#define ANT_Source_ANT_MyGoalZone_h_15_PRIVATE_PROPERTY_OFFSET
#define ANT_Source_ANT_MyGoalZone_h_12_PROLOG
#define ANT_Source_ANT_MyGoalZone_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ANT_Source_ANT_MyGoalZone_h_15_PRIVATE_PROPERTY_OFFSET \
	ANT_Source_ANT_MyGoalZone_h_15_RPC_WRAPPERS \
	ANT_Source_ANT_MyGoalZone_h_15_INCLASS \
	ANT_Source_ANT_MyGoalZone_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ANT_Source_ANT_MyGoalZone_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ANT_Source_ANT_MyGoalZone_h_15_PRIVATE_PROPERTY_OFFSET \
	ANT_Source_ANT_MyGoalZone_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ANT_Source_ANT_MyGoalZone_h_15_INCLASS_NO_PURE_DECLS \
	ANT_Source_ANT_MyGoalZone_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANT_API UClass* StaticClass<class AMyGoalZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ANT_Source_ANT_MyGoalZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
