// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef GEP_1_GEP_1Projectile_generated_h
#error "GEP_1Projectile.generated.h already included, missing '#pragma once' in GEP_1Projectile.h"
#endif
#define GEP_1_GEP_1Projectile_generated_h

#define GEP_1_Source_GEP_1_GEP_1Projectile_h_15_SPARSE_DATA
#define GEP_1_Source_GEP_1_GEP_1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GEP_1_Source_GEP_1_GEP_1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GEP_1_Source_GEP_1_GEP_1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGEP_1Projectile(); \
	friend struct Z_Construct_UClass_AGEP_1Projectile_Statics; \
public: \
	DECLARE_CLASS(AGEP_1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_1"), NO_API) \
	DECLARE_SERIALIZER(AGEP_1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GEP_1_Source_GEP_1_GEP_1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGEP_1Projectile(); \
	friend struct Z_Construct_UClass_AGEP_1Projectile_Statics; \
public: \
	DECLARE_CLASS(AGEP_1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEP_1"), NO_API) \
	DECLARE_SERIALIZER(AGEP_1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GEP_1_Source_GEP_1_GEP_1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGEP_1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGEP_1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEP_1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEP_1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEP_1Projectile(AGEP_1Projectile&&); \
	NO_API AGEP_1Projectile(const AGEP_1Projectile&); \
public:


#define GEP_1_Source_GEP_1_GEP_1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEP_1Projectile(AGEP_1Projectile&&); \
	NO_API AGEP_1Projectile(const AGEP_1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEP_1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEP_1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGEP_1Projectile)


#define GEP_1_Source_GEP_1_GEP_1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGEP_1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGEP_1Projectile, ProjectileMovement); }


#define GEP_1_Source_GEP_1_GEP_1Projectile_h_12_PROLOG
#define GEP_1_Source_GEP_1_GEP_1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_1_Source_GEP_1_GEP_1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GEP_1_Source_GEP_1_GEP_1Projectile_h_15_SPARSE_DATA \
	GEP_1_Source_GEP_1_GEP_1Projectile_h_15_RPC_WRAPPERS \
	GEP_1_Source_GEP_1_GEP_1Projectile_h_15_INCLASS \
	GEP_1_Source_GEP_1_GEP_1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEP_1_Source_GEP_1_GEP_1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEP_1_Source_GEP_1_GEP_1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GEP_1_Source_GEP_1_GEP_1Projectile_h_15_SPARSE_DATA \
	GEP_1_Source_GEP_1_GEP_1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GEP_1_Source_GEP_1_GEP_1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	GEP_1_Source_GEP_1_GEP_1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEP_1_API UClass* StaticClass<class AGEP_1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEP_1_Source_GEP_1_GEP_1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
