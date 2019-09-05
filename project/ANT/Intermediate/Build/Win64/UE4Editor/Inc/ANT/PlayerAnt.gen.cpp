// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ANT/PlayerAnt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnt() {}
// Cross Module References
	ANT_API UClass* Z_Construct_UClass_APlayerAnt_NoRegister();
	ANT_API UClass* Z_Construct_UClass_APlayerAnt();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ANT();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void APlayerAnt::StaticRegisterNativesAPlayerAnt()
	{
	}
	UClass* Z_Construct_UClass_APlayerAnt_NoRegister()
	{
		return APlayerAnt::StaticClass();
	}
	struct Z_Construct_UClass_APlayerAnt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasCollection_MetaData[];
#endif
		static void NewProp_hasCollection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurCollectionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurCollectionMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraYawSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraYawSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPitchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraPitchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerAnt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ANT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAnt_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerAnt.h" },
		{ "ModuleRelativePath", "PlayerAnt.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAnt_Statics::NewProp_hasCollection_MetaData[] = {
		{ "Category", "PlayerAnt" },
		{ "ModuleRelativePath", "PlayerAnt.h" },
	};
#endif
	void Z_Construct_UClass_APlayerAnt_Statics::NewProp_hasCollection_SetBit(void* Obj)
	{
		((APlayerAnt*)Obj)->hasCollection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerAnt_Statics::NewProp_hasCollection = { "hasCollection", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerAnt), &Z_Construct_UClass_APlayerAnt_Statics::NewProp_hasCollection_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerAnt_Statics::NewProp_hasCollection_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerAnt_Statics::NewProp_hasCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurCollectionMesh_MetaData[] = {
		{ "Category", "PlayerAnt" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerAnt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurCollectionMesh = { "OurCollectionMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAnt, OurCollectionMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurCollectionMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurCollectionMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurCamera_MetaData[] = {
		{ "Category", "PlayerAnt" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerAnt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurCamera = { "OurCamera", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAnt, OurCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurSpringArm_MetaData[] = {
		{ "Category", "PlayerAnt" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerAnt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurSpringArm = { "OurSpringArm", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAnt, OurSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurSpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurStaticMesh_MetaData[] = {
		{ "Category", "PlayerAnt" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerAnt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurStaticMesh = { "OurStaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAnt, OurStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurStaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAnt_Statics::NewProp_CameraYawSpeed_MetaData[] = {
		{ "Category", "PlayerAnt" },
		{ "ModuleRelativePath", "PlayerAnt.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerAnt_Statics::NewProp_CameraYawSpeed = { "CameraYawSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAnt, CameraYawSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerAnt_Statics::NewProp_CameraYawSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerAnt_Statics::NewProp_CameraYawSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAnt_Statics::NewProp_CameraPitchSpeed_MetaData[] = {
		{ "Category", "PlayerAnt" },
		{ "ModuleRelativePath", "PlayerAnt.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerAnt_Statics::NewProp_CameraPitchSpeed = { "CameraPitchSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAnt, CameraPitchSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerAnt_Statics::NewProp_CameraPitchSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerAnt_Statics::NewProp_CameraPitchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAnt_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "PlayerAnt" },
		{ "ModuleRelativePath", "PlayerAnt.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerAnt_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAnt, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerAnt_Statics::NewProp_MoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerAnt_Statics::NewProp_MoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerAnt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAnt_Statics::NewProp_hasCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurCollectionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAnt_Statics::NewProp_OurStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAnt_Statics::NewProp_CameraYawSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAnt_Statics::NewProp_CameraPitchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAnt_Statics::NewProp_MoveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerAnt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerAnt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerAnt_Statics::ClassParams = {
		&APlayerAnt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerAnt_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APlayerAnt_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerAnt_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerAnt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerAnt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerAnt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerAnt, 2443182718);
	template<> ANT_API UClass* StaticClass<APlayerAnt>()
	{
		return APlayerAnt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerAnt(Z_Construct_UClass_APlayerAnt, &APlayerAnt::StaticClass, TEXT("/Script/ANT"), TEXT("APlayerAnt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerAnt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
