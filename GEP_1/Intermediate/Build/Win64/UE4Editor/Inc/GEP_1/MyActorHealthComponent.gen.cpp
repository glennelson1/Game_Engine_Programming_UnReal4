// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEP_1/Public/MyActorHealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorHealthComponent() {}
// Cross Module References
	GEP_1_API UClass* Z_Construct_UClass_AMyActorHealthComponent_NoRegister();
	GEP_1_API UClass* Z_Construct_UClass_AMyActorHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GEP_1();
// End Cross Module References
	void AMyActorHealthComponent::StaticRegisterNativesAMyActorHealthComponent()
	{
	}
	UClass* Z_Construct_UClass_AMyActorHealthComponent_NoRegister()
	{
		return AMyActorHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_AMyActorHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActorHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorHealthComponent.h" },
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActorHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorHealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActorHealthComponent_Statics::ClassParams = {
		&AMyActorHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActorHealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActorHealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActorHealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActorHealthComponent, 561460968);
	template<> GEP_1_API UClass* StaticClass<AMyActorHealthComponent>()
	{
		return AMyActorHealthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActorHealthComponent(Z_Construct_UClass_AMyActorHealthComponent, &AMyActorHealthComponent::StaticClass, TEXT("/Script/GEP_1"), TEXT("AMyActorHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
