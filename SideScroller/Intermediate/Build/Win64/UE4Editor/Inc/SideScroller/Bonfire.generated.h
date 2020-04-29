// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SIDESCROLLER_Bonfire_generated_h
#error "Bonfire.generated.h already included, missing '#pragma once' in Bonfire.h"
#endif
#define SIDESCROLLER_Bonfire_generated_h

#define SideScroller_Source_SideScroller_Bonfire_h_12_SPARSE_DATA
#define SideScroller_Source_SideScroller_Bonfire_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define SideScroller_Source_SideScroller_Bonfire_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define SideScroller_Source_SideScroller_Bonfire_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABonfire(); \
	friend struct Z_Construct_UClass_ABonfire_Statics; \
public: \
	DECLARE_CLASS(ABonfire, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ABonfire)


#define SideScroller_Source_SideScroller_Bonfire_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABonfire(); \
	friend struct Z_Construct_UClass_ABonfire_Statics; \
public: \
	DECLARE_CLASS(ABonfire, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ABonfire)


#define SideScroller_Source_SideScroller_Bonfire_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABonfire(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABonfire) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonfire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonfire); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonfire(ABonfire&&); \
	NO_API ABonfire(const ABonfire&); \
public:


#define SideScroller_Source_SideScroller_Bonfire_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonfire(ABonfire&&); \
	NO_API ABonfire(const ABonfire&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonfire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonfire); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABonfire)


#define SideScroller_Source_SideScroller_Bonfire_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_TriggerSphere() { return STRUCT_OFFSET(ABonfire, m_TriggerSphere); } \
	FORCEINLINE static uint32 __PPO__m_ActiveFlipbook() { return STRUCT_OFFSET(ABonfire, m_ActiveFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_FireAnim() { return STRUCT_OFFSET(ABonfire, m_FireAnim); } \
	FORCEINLINE static uint32 __PPO__m_PointLight() { return STRUCT_OFFSET(ABonfire, m_PointLight); }


#define SideScroller_Source_SideScroller_Bonfire_h_9_PROLOG
#define SideScroller_Source_SideScroller_Bonfire_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_Bonfire_h_12_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_Bonfire_h_12_SPARSE_DATA \
	SideScroller_Source_SideScroller_Bonfire_h_12_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_Bonfire_h_12_INCLASS \
	SideScroller_Source_SideScroller_Bonfire_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_Bonfire_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_Bonfire_h_12_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_Bonfire_h_12_SPARSE_DATA \
	SideScroller_Source_SideScroller_Bonfire_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_Bonfire_h_12_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_Bonfire_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class ABonfire>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_Bonfire_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
