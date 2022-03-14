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
	GEP_1_API UFunction* Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GEP_1();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	GEP_1_API UClass* Z_Construct_UClass_AMyActorHealthComponent_NoRegister();
	GEP_1_API UClass* Z_Construct_UClass_AMyActorHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature_Statics
	{
		struct _Script_GEP_1_eventComponentDeadSignature_Parms
		{
			AController* causer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_causer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature_Statics::NewProp_causer = { "causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEP_1_eventComponentDeadSignature_Parms, causer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature_Statics::NewProp_causer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEP_1, nullptr, "ComponentDeadSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEP_1_eventComponentDeadSignature_Parms), Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMyActorHealthComponent::execDamgeTaken)
	{
		P_GET_OBJECT(AActor,Z_Param_damagedAcator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_damage);
		P_GET_OBJECT(UDamageType,Z_Param_damageType);
		P_GET_OBJECT(AController,Z_Param_m_instigator);
		P_GET_OBJECT(AActor,Z_Param_causer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamgeTaken(Z_Param_damagedAcator,Z_Param_damage,Z_Param_damageType,Z_Param_m_instigator,Z_Param_causer);
		P_NATIVE_END;
	}
	void AMyActorHealthComponent::StaticRegisterNativesAMyActorHealthComponent()
	{
		UClass* Class = AMyActorHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamgeTaken", &AMyActorHealthComponent::execDamgeTaken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics
	{
		struct MyActorHealthComponent_eventDamgeTaken_Parms
		{
			AActor* damagedAcator;
			float damage;
			const UDamageType* damageType;
			AController* m_instigator;
			AActor* causer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedAcator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_instigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_causer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_damagedAcator = { "damagedAcator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActorHealthComponent_eventDamgeTaken_Parms, damagedAcator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActorHealthComponent_eventDamgeTaken_Parms, damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActorHealthComponent_eventDamgeTaken_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_damageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_m_instigator = { "m_instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActorHealthComponent_eventDamgeTaken_Parms, m_instigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_causer = { "causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActorHealthComponent_eventDamgeTaken_Parms, causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_damagedAcator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_m_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::NewProp_causer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActorHealthComponent, nullptr, "DamgeTaken", nullptr, nullptr, sizeof(MyActorHealthComponent_eventDamgeTaken_Parms), Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyActorHealthComponent_NoRegister()
	{
		return AMyActorHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_AMyActorHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onComponentDead_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onComponentDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentShield_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_CurrentShield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MaxShield_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_MaxShield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CanRegenSheild_MetaData[];
#endif
		static void NewProp_m_CanRegenSheild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_CanRegenSheild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SheildRecoverDelayTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_SheildRecoverDelayTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SheildRevoverRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_SheildRevoverRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SheildRevoverDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_SheildRevoverDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActorHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEP_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyActorHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActorHealthComponent_DamgeTaken, "DamgeTaken" }, // 130611686
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorHealthComponent.h" },
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_onComponentDead_MetaData[] = {
		{ "Category", "Component" },
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_onComponentDead = { "onComponentDead", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorHealthComponent, onComponentDead), Z_Construct_UDelegateFunction_GEP_1_ComponentDeadSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_onComponentDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_onComponentDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CurrentHealth = { "m_CurrentHealth", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorHealthComponent, m_CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_MaxHealth = { "m_MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorHealthComponent, m_MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CurrentShield_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CurrentShield = { "m_CurrentShield", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorHealthComponent, m_CurrentShield), METADATA_PARAMS(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CurrentShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CurrentShield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_MaxShield_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_MaxShield = { "m_MaxShield", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorHealthComponent, m_MaxShield), METADATA_PARAMS(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_MaxShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_MaxShield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CanRegenSheild_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
	void Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CanRegenSheild_SetBit(void* Obj)
	{
		((AMyActorHealthComponent*)Obj)->m_CanRegenSheild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CanRegenSheild = { "m_CanRegenSheild", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyActorHealthComponent), &Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CanRegenSheild_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CanRegenSheild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CanRegenSheild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRecoverDelayTimer_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRecoverDelayTimer = { "m_SheildRecoverDelayTimer", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorHealthComponent, m_SheildRecoverDelayTimer), METADATA_PARAMS(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRecoverDelayTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRecoverDelayTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRevoverRate_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRevoverRate = { "m_SheildRevoverRate", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorHealthComponent, m_SheildRevoverRate), METADATA_PARAMS(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRevoverRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRevoverRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRevoverDelay_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Public/MyActorHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRevoverDelay = { "m_SheildRevoverDelay", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActorHealthComponent, m_SheildRevoverDelay), METADATA_PARAMS(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRevoverDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRevoverDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorHealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_onComponentDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CurrentShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_MaxShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_CanRegenSheild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRecoverDelayTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRevoverRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorHealthComponent_Statics::NewProp_m_SheildRevoverDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActorHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorHealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActorHealthComponent_Statics::ClassParams = {
		&AMyActorHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyActorHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorHealthComponent_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMyActorHealthComponent, 2589159338);
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
