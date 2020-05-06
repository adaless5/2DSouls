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
#ifdef SIDESCROLLER_EnemyPawn_generated_h
#error "EnemyPawn.generated.h already included, missing '#pragma once' in EnemyPawn.h"
#endif
#define SIDESCROLLER_EnemyPawn_generated_h

#define SideScroller_Source_SideScroller_EnemyPawn_h_25_SPARSE_DATA
#define SideScroller_Source_SideScroller_EnemyPawn_h_25_RPC_WRAPPERS \
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
	} \
 \
	DECLARE_FUNCTION(execSetEnemyState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_newState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnemyState(UEnemyState(Z_Param_newState)); \
		P_NATIVE_END; \
	}


#define SideScroller_Source_SideScroller_EnemyPawn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
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
	} \
 \
	DECLARE_FUNCTION(execSetEnemyState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_newState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnemyState(UEnemyState(Z_Param_newState)); \
		P_NATIVE_END; \
	}


#define SideScroller_Source_SideScroller_EnemyPawn_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyPawn(); \
	friend struct Z_Construct_UClass_AEnemyPawn_Statics; \
public: \
	DECLARE_CLASS(AEnemyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AEnemyPawn)


#define SideScroller_Source_SideScroller_EnemyPawn_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyPawn(); \
	friend struct Z_Construct_UClass_AEnemyPawn_Statics; \
public: \
	DECLARE_CLASS(AEnemyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AEnemyPawn)


#define SideScroller_Source_SideScroller_EnemyPawn_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyPawn(AEnemyPawn&&); \
	NO_API AEnemyPawn(const AEnemyPawn&); \
public:


#define SideScroller_Source_SideScroller_EnemyPawn_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyPawn(AEnemyPawn&&); \
	NO_API AEnemyPawn(const AEnemyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyPawn)


#define SideScroller_Source_SideScroller_EnemyPawn_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_BodyHitBox() { return STRUCT_OFFSET(AEnemyPawn, m_BodyHitBox); } \
	FORCEINLINE static uint32 __PPO__m_IdleFlipbook() { return STRUCT_OFFSET(AEnemyPawn, m_IdleFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_DeathFlipbook() { return STRUCT_OFFSET(AEnemyPawn, m_DeathFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_RunningFlipbook() { return STRUCT_OFFSET(AEnemyPawn, m_RunningFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_AttackingFlipbook() { return STRUCT_OFFSET(AEnemyPawn, m_AttackingFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_ActiveFlipbook() { return STRUCT_OFFSET(AEnemyPawn, m_ActiveFlipbook); } \
	FORCEINLINE static uint32 __PPO__m_TotalHealth() { return STRUCT_OFFSET(AEnemyPawn, m_TotalHealth); } \
	FORCEINLINE static uint32 __PPO__m_CurrentState() { return STRUCT_OFFSET(AEnemyPawn, m_CurrentState); } \
	FORCEINLINE static uint32 __PPO__m_Player() { return STRUCT_OFFSET(AEnemyPawn, m_Player); } \
	FORCEINLINE static uint32 __PPO__m_MovementSpeed() { return STRUCT_OFFSET(AEnemyPawn, m_MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__m_AggroDistance() { return STRUCT_OFFSET(AEnemyPawn, m_AggroDistance); } \
	FORCEINLINE static uint32 __PPO__m_AttackDistance() { return STRUCT_OFFSET(AEnemyPawn, m_AttackDistance); } \
	FORCEINLINE static uint32 __PPO__m_AttackForce() { return STRUCT_OFFSET(AEnemyPawn, m_AttackForce); } \
	FORCEINLINE static uint32 __PPO__m_StartPatrolTimerRate() { return STRUCT_OFFSET(AEnemyPawn, m_StartPatrolTimerRate); } \
	FORCEINLINE static uint32 __PPO__m_AttackTimerRate() { return STRUCT_OFFSET(AEnemyPawn, m_AttackTimerRate); } \
	FORCEINLINE static uint32 __PPO__m_WaitTimerRate() { return STRUCT_OFFSET(AEnemyPawn, m_WaitTimerRate); } \
	FORCEINLINE static uint32 __PPO__m_PatrolPoints() { return STRUCT_OFFSET(AEnemyPawn, m_PatrolPoints); }


#define SideScroller_Source_SideScroller_EnemyPawn_h_22_PROLOG
#define SideScroller_Source_SideScroller_EnemyPawn_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_EnemyPawn_h_25_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_EnemyPawn_h_25_SPARSE_DATA \
	SideScroller_Source_SideScroller_EnemyPawn_h_25_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_EnemyPawn_h_25_INCLASS \
	SideScroller_Source_SideScroller_EnemyPawn_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_EnemyPawn_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_EnemyPawn_h_25_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_EnemyPawn_h_25_SPARSE_DATA \
	SideScroller_Source_SideScroller_EnemyPawn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_EnemyPawn_h_25_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_EnemyPawn_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class AEnemyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_EnemyPawn_h


#define FOREACH_ENUM_UENEMYSTATE(op) \
	op(Enemy_Idle) \
	op(Enemy_Running) \
	op(Enemy_Patrolling) \
	op(Enemy_Attacking) \
	op(Enemy_Jumping) \
	op(Enemy_Dead) \
	op(Enemy_Wait) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
