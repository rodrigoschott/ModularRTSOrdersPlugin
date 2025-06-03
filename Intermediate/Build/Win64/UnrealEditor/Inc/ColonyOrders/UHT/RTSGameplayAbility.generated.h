// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/RTSGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTexture2D;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FRTSOrderTargetData;
#ifdef COLONYORDERS_RTSGameplayAbility_generated_h
#error "RTSGameplayAbility.generated.h already included, missing '#pragma once' in RTSGameplayAbility.h"
#endif
#define COLONYORDERS_RTSGameplayAbility_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActivationRequiredTags); \
	DECLARE_FUNCTION(execGetTargetScore); \
	DECLARE_FUNCTION(execOnAbilityLevelChanged); \
	DECLARE_FUNCTION(execShouldShowAsOrderInUI); \
	DECLARE_FUNCTION(execFormatDescription); \
	DECLARE_FUNCTION(execGetMaxLevel); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetEventTriggerTag);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_63_CALLBACK_WRAPPERS
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSGameplayAbility(); \
	friend struct Z_Construct_UClass_URTSGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(URTSGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSGameplayAbility)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSGameplayAbility(URTSGameplayAbility&&); \
	URTSGameplayAbility(const URTSGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSGameplayAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSGameplayAbility) \
	NO_API virtual ~URTSGameplayAbility();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_60_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_63_CALLBACK_WRAPPERS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_63_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSGameplayAbility_h


#define FOREACH_ENUM_ERTSABILITYPROCESSPOLICY(op) \
	op(ERTSAbilityProcessPolicy::INSTANT) \
	op(ERTSAbilityProcessPolicy::CAN_BE_CANCELED) \
	op(ERTSAbilityProcessPolicy::CAN_NOT_BE_CANCELED) \
	op(ERTSAbilityProcessPolicy::CAN_BE_CANCELED_WHEN_NO_GAMEPLAY_TASK_IS_RUNNING) 

enum class ERTSAbilityProcessPolicy : uint8;
template<> struct TIsUEnumClass<ERTSAbilityProcessPolicy> { enum { Value = true }; };
template<> COLONYORDERS_API UEnum* StaticEnum<ERTSAbilityProcessPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
