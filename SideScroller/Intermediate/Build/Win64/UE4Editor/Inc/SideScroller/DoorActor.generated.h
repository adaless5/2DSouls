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
#ifdef SIDESCROLLER_DoorActor_generated_h
#error "DoorActor.generated.h already included, missing '#pragma once' in DoorActor.h"
#endif
#define SIDESCROLLER_DoorActor_generated_h

#define SideScroller_Source_SideScroller_DoorActor_h_12_SPARSE_DATA
#define SideScroller_Source_SideScroller_DoorActor_h_12_RPC_WRAPPERS \
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


#define SideScroller_Source_SideScroller_DoorActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define SideScroller_Source_SideScroller_DoorActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorActor(); \
	friend struct Z_Construct_UClass_ADoorActor_Statics; \
public: \
	DECLARE_CLASS(ADoorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ADoorActor)


#define SideScroller_Source_SideScroller_DoorActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADoorActor(); \
	friend struct Z_Construct_UClass_ADoorActor_Statics; \
public: \
	DECLARE_CLASS(ADoorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ADoorActor)


#define SideScroller_Source_SideScroller_DoorActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorActor(ADoorActor&&); \
	NO_API ADoorActor(const ADoorActor&); \
public:


#define SideScroller_Source_SideScroller_DoorActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorActor(ADoorActor&&); \
	NO_API ADoorActor(const ADoorActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorActor)


#define SideScroller_Source_SideScroller_DoorActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ActiveSprite() { return STRUCT_OFFSET(ADoorActor, m_ActiveSprite); } \
	FORCEINLINE static uint32 __PPO__m_ClosedDoorSprite() { return STRUCT_OFFSET(ADoorActor, m_ClosedDoorSprite); } \
	FORCEINLINE static uint32 __PPO__m_OpenDoorSprite() { return STRUCT_OFFSET(ADoorActor, m_OpenDoorSprite); } \
	FORCEINLINE static uint32 __PPO__m_CollisionBox() { return STRUCT_OFFSET(ADoorActor, m_CollisionBox); } \
	FORCEINLINE static uint32 __PPO__m_TriggerBox() { return STRUCT_OFFSET(ADoorActor, m_TriggerBox); } \
	FORCEINLINE static uint32 __PPO__m_DoorTag() { return STRUCT_OFFSET(ADoorActor, m_DoorTag); } \
	FORCEINLINE static uint32 __PPO__m_AudioComponent() { return STRUCT_OFFSET(ADoorActor, m_AudioComponent); }


#define SideScroller_Source_SideScroller_DoorActor_h_9_PROLOG
#define SideScroller_Source_SideScroller_DoorActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_DoorActor_h_12_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_DoorActor_h_12_SPARSE_DATA \
	SideScroller_Source_SideScroller_DoorActor_h_12_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_DoorActor_h_12_INCLASS \
	SideScroller_Source_SideScroller_DoorActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_DoorActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_DoorActor_h_12_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_DoorActor_h_12_SPARSE_DATA \
	SideScroller_Source_SideScroller_DoorActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_DoorActor_h_12_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_DoorActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class ADoorActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_DoorActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
