// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/EXPActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEXPActor() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_AEXPActor_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AEXPActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEXPActor::StaticRegisterNativesAEXPActor()
	{
	}
	UClass* Z_Construct_UClass_AEXPActor_NoRegister()
	{
		return AEXPActor::StaticClass();
	}
	struct Z_Construct_UClass_AEXPActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_FollowDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_FollowDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ExperienceValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_m_ExperienceValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EXPMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_EXPMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CollisionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEXPActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEXPActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EXPActor.h" },
		{ "ModuleRelativePath", "EXPActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEXPActor_Statics::NewProp_m_FollowDistance_MetaData[] = {
		{ "Category", "EXP" },
		{ "ModuleRelativePath", "EXPActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEXPActor_Statics::NewProp_m_FollowDistance = { "m_FollowDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEXPActor, m_FollowDistance), METADATA_PARAMS(Z_Construct_UClass_AEXPActor_Statics::NewProp_m_FollowDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEXPActor_Statics::NewProp_m_FollowDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEXPActor_Statics::NewProp_m_ExperienceValue_MetaData[] = {
		{ "Category", "EXP" },
		{ "ModuleRelativePath", "EXPActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AEXPActor_Statics::NewProp_m_ExperienceValue = { "m_ExperienceValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEXPActor, m_ExperienceValue), METADATA_PARAMS(Z_Construct_UClass_AEXPActor_Statics::NewProp_m_ExperienceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEXPActor_Statics::NewProp_m_ExperienceValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEXPActor_Statics::NewProp_m_EXPMaterial_MetaData[] = {
		{ "Category", "EXP" },
		{ "ModuleRelativePath", "EXPActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEXPActor_Statics::NewProp_m_EXPMaterial = { "m_EXPMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEXPActor, m_EXPMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEXPActor_Statics::NewProp_m_EXPMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEXPActor_Statics::NewProp_m_EXPMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEXPActor_Statics::NewProp_m_CollisionComponent_MetaData[] = {
		{ "Category", "EXP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EXPActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEXPActor_Statics::NewProp_m_CollisionComponent = { "m_CollisionComponent", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEXPActor, m_CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEXPActor_Statics::NewProp_m_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEXPActor_Statics::NewProp_m_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEXPActor_Statics::NewProp_m_MeshComponent_MetaData[] = {
		{ "Category", "EXP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EXPActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEXPActor_Statics::NewProp_m_MeshComponent = { "m_MeshComponent", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEXPActor, m_MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEXPActor_Statics::NewProp_m_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEXPActor_Statics::NewProp_m_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEXPActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEXPActor_Statics::NewProp_m_FollowDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEXPActor_Statics::NewProp_m_ExperienceValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEXPActor_Statics::NewProp_m_EXPMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEXPActor_Statics::NewProp_m_CollisionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEXPActor_Statics::NewProp_m_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEXPActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEXPActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEXPActor_Statics::ClassParams = {
		&AEXPActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEXPActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEXPActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEXPActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEXPActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEXPActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEXPActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEXPActor, 2830191249);
	template<> SIDESCROLLER_API UClass* StaticClass<AEXPActor>()
	{
		return AEXPActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEXPActor(Z_Construct_UClass_AEXPActor, &AEXPActor::StaticClass, TEXT("/Script/SideScroller"), TEXT("AEXPActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEXPActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
