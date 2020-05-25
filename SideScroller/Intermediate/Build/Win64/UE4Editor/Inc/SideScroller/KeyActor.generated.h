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
#ifdef SIDESCROLLER_KeyActor_generated_h
#error "KeyActor.generated.h already included, missing '#pragma once' in KeyActor.h"
#endif
#define SIDESCROLLER_KeyActor_generated_h

#define SideScroller_Source_SideScroller_KeyActor_h_12_SPARSE_DATA
#define SideScroller_Source_SideScroller_KeyActor_h_12_RPC_WRAPPERS \
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


#define SideScroller_Source_SideScroller_KeyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define SideScroller_Source_SideScroller_KeyActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeyActor(); \
	friend struct Z_Construct_UClass_AKeyActor_Statics; \
public: \
	DECLARE_CLASS(AKeyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AKeyActor)


#define SideScroller_Source_SideScroller_KeyActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAKeyActor(); \
	friend struct Z_Construct_UClass_AKeyActor_Statics; \
public: \
	DECLARE_CLASS(AKeyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AKeyActor)


#define SideScroller_Source_SideScroller_KeyActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKeyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKeyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeyActor(AKeyActor&&); \
	NO_API AKeyActor(const AKeyActor&); \
public:


#define SideScroller_Source_SideScroller_KeyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeyActor(AKeyActor&&); \
	NO_API AKeyActor(const AKeyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeyActor)


#define SideScroller_Source_SideScroller_KeyActor_h_12_PRIVATE_PROPERTY_OFFSET
#define SideScroller_Source_SideScroller_KeyActor_h_9_PROLOG
#define SideScroller_Source_SideScroller_KeyActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_KeyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_KeyActor_h_12_SPARSE_DATA \
	SideScroller_Source_SideScroller_KeyActor_h_12_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_KeyActor_h_12_INCLASS \
	SideScroller_Source_SideScroller_KeyActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_KeyActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_KeyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_KeyActor_h_12_SPARSE_DATA \
	SideScroller_Source_SideScroller_KeyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_KeyActor_h_12_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_KeyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class AKeyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_KeyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
