// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/BeastPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeastPawn() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_ABeastPawn_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_ABeastPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ABeastPawn::StaticRegisterNativesABeastPawn()
	{
	}
	UClass* Z_Construct_UClass_ABeastPawn_NoRegister()
	{
		return ABeastPawn::StaticClass();
	}
	struct Z_Construct_UClass_ABeastPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TotalHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_TotalHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DeathFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DeathFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_IdleFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_IdleFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ActiveFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ActiveFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BodyHitBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BodyHitBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABeastPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BeastPawn.h" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TotalHealth_MetaData[] = {
		{ "Category", "Beast" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TotalHealth = { "m_TotalHealth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeastPawn, m_TotalHealth), METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TotalHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TotalHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_DeathFlipbook_MetaData[] = {
		{ "Category", "Beast" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_DeathFlipbook = { "m_DeathFlipbook", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeastPawn, m_DeathFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_DeathFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_DeathFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_IdleFlipbook_MetaData[] = {
		{ "Category", "Beast" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_IdleFlipbook = { "m_IdleFlipbook", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeastPawn, m_IdleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_IdleFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_IdleFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_ActiveFlipbook_MetaData[] = {
		{ "Category", "Beast" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_ActiveFlipbook = { "m_ActiveFlipbook", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeastPawn, m_ActiveFlipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_ActiveFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_ActiveFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_BodyHitBox_MetaData[] = {
		{ "Category", "Beast" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BeastPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_BodyHitBox = { "m_BodyHitBox", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeastPawn, m_BodyHitBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_BodyHitBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_BodyHitBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABeastPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_TotalHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_DeathFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_IdleFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_ActiveFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeastPawn_Statics::NewProp_m_BodyHitBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABeastPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABeastPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABeastPawn_Statics::ClassParams = {
		&ABeastPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABeastPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABeastPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABeastPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABeastPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABeastPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABeastPawn, 1160429912);
	template<> SIDESCROLLER_API UClass* StaticClass<ABeastPawn>()
	{
		return ABeastPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABeastPawn(Z_Construct_UClass_ABeastPawn, &ABeastPawn::StaticClass, TEXT("/Script/SideScroller"), TEXT("ABeastPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABeastPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
