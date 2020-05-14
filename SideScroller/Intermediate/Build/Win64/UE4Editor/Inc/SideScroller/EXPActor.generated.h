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
struct FVector;
struct FHitResult;
#ifdef SIDESCROLLER_EXPActor_generated_h
#error "EXPActor.generated.h already included, missing '#pragma once' in EXPActor.h"
#endif
#define SIDESCROLLER_EXPActor_generated_h

#define SideScroller_Source_SideScroller_EXPActor_h_12_SPARSE_DATA
#define SideScroller_Source_SideScroller_EXPActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SideScroller_Source_SideScroller_EXPActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SideScroller_Source_SideScroller_EXPActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEXPActor(); \
	friend struct Z_Construct_UClass_AEXPActor_Statics; \
public: \
	DECLARE_CLASS(AEXPActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AEXPActor)


#define SideScroller_Source_SideScroller_EXPActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEXPActor(); \
	friend struct Z_Construct_UClass_AEXPActor_Statics; \
public: \
	DECLARE_CLASS(AEXPActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AEXPActor)


#define SideScroller_Source_SideScroller_EXPActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEXPActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEXPActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEXPActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEXPActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEXPActor(AEXPActor&&); \
	NO_API AEXPActor(const AEXPActor&); \
public:


#define SideScroller_Source_SideScroller_EXPActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEXPActor(AEXPActor&&); \
	NO_API AEXPActor(const AEXPActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEXPActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEXPActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEXPActor)


#define SideScroller_Source_SideScroller_EXPActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_MeshComponent() { return STRUCT_OFFSET(AEXPActor, m_MeshComponent); } \
	FORCEINLINE static uint32 __PPO__m_CollisionComponent() { return STRUCT_OFFSET(AEXPActor, m_CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__m_EXPMaterial() { return STRUCT_OFFSET(AEXPActor, m_EXPMaterial); } \
	FORCEINLINE static uint32 __PPO__m_ExperienceValue() { return STRUCT_OFFSET(AEXPActor, m_ExperienceValue); } \
	FORCEINLINE static uint32 __PPO__m_FollowDistance() { return STRUCT_OFFSET(AEXPActor, m_FollowDistance); }


#define SideScroller_Source_SideScroller_EXPActor_h_9_PROLOG
#define SideScroller_Source_SideScroller_EXPActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_EXPActor_h_12_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_EXPActor_h_12_SPARSE_DATA \
	SideScroller_Source_SideScroller_EXPActor_h_12_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_EXPActor_h_12_INCLASS \
	SideScroller_Source_SideScroller_EXPActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_EXPActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_EXPActor_h_12_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_EXPActor_h_12_SPARSE_DATA \
	SideScroller_Source_SideScroller_EXPActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_EXPActor_h_12_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_EXPActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class AEXPActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_EXPActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
