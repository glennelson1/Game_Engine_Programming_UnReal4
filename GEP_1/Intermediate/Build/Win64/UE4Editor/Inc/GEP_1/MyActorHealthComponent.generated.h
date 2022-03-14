// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class AActor;
class UDamageType;
#ifdef GEP_1_MyActorHealthComponent_generated_h
#error "MyActorHealthComponent.generated.h already included, missing '#pragma once' in MyActorHealthComponent.h"
#endif
#define GEP_1_MyActorHealthComponent_generated_h

#define GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_9_DELEGATE \
struct _Script_GEP_1_eventComponentDeadSignature_Parms \
{ \
	AController* causer; \
}; \
static inline void FComponentDeadSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentDeadSignature, AController* causer) \
{ \
	_Script_GEP_1_eventComponentDeadSignature_Parms Parms; \
	Parms.causer=causer; \
	ComponentDeadSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_SPARSE_DATA
#define GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamgeTaken);


#define GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamgeTaken);


#define GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActorHealthComponent(); \
	friend struct Z_Construct_UClass_AMyActorHealthComponent_Statics; \
public: \
	DECLARE_CLASS(AMyActorHealthComponent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_1"), NO_API) \
	DECLARE_SERIALIZER(AMyActorHealthComponent)


#define GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyActorHealthComponent(); \
	friend struct Z_Construct_UClass_AMyActorHealthComponent_Statics; \
public: \
	DECLARE_CLASS(AMyActorHealthComponent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_1"), NO_API) \
	DECLARE_SERIALIZER(AMyActorHealthComponent)


#define GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActorHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActorHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActorHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActorHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActorHealthComponent(AMyActorHealthComponent&&); \
	NO_API AMyActorHealthComponent(const AMyActorHealthComponent&); \
public:


#define GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActorHealthComponent(AMyActorHealthComponent&&); \
	NO_API AMyActorHealthComponent(const AMyActorHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActorHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActorHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActorHealthComponent)


#define GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CurrentHealth() { return STRUCT_OFFSET(AMyActorHealthComponent, m_CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__m_MaxHealth() { return STRUCT_OFFSET(AMyActorHealthComponent, m_MaxHealth); } \
	FORCEINLINE static uint32 __PPO__m_CurrentShield() { return STRUCT_OFFSET(AMyActorHealthComponent, m_CurrentShield); } \
	FORCEINLINE static uint32 __PPO__m_MaxShield() { return STRUCT_OFFSET(AMyActorHealthComponent, m_MaxShield); } \
	FORCEINLINE static uint32 __PPO__m_CanRegenSheild() { return STRUCT_OFFSET(AMyActorHealthComponent, m_CanRegenSheild); } \
	FORCEINLINE static uint32 __PPO__m_SheildRecoverDelayTimer() { return STRUCT_OFFSET(AMyActorHealthComponent, m_SheildRecoverDelayTimer); } \
	FORCEINLINE static uint32 __PPO__m_SheildRevoverRate() { return STRUCT_OFFSET(AMyActorHealthComponent, m_SheildRevoverRate); } \
	FORCEINLINE static uint32 __PPO__m_SheildRevoverDelay() { return STRUCT_OFFSET(AMyActorHealthComponent, m_SheildRevoverDelay); }


#define GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_11_PROLOG
#define GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_SPARSE_DATA \
	GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_RPC_WRAPPERS \
	GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_INCLASS \
	GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_SPARSE_DATA \
	GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_INCLASS_NO_PURE_DECLS \
	GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEP_1_API UClass* StaticClass<class AMyActorHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEP_1_Source_GEP_1_Public_MyActorHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
