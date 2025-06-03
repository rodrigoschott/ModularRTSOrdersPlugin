// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/RTSGameplayEffect.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef COLONYORDERS_RTSGameplayEffect_generated_h
#error "RTSGameplayEffect.generated.h already included, missing '#pragma once' in RTSGameplayEffect.h"
#endif
#define COLONYORDERS_RTSGameplayEffect_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEffectDescription); \
	DECLARE_FUNCTION(execGetEffectName); \
	DECLARE_FUNCTION(execGetIcon);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSGameplayEffect(); \
	friend struct Z_Construct_UClass_URTSGameplayEffect_Statics; \
public: \
	DECLARE_CLASS(URTSGameplayEffect, UGameplayEffect, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSGameplayEffect)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSGameplayEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSGameplayEffect(URTSGameplayEffect&&); \
	URTSGameplayEffect(const URTSGameplayEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSGameplayEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSGameplayEffect); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSGameplayEffect) \
	NO_API virtual ~URTSGameplayEffect();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h_8_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h_11_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSGameplayEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
