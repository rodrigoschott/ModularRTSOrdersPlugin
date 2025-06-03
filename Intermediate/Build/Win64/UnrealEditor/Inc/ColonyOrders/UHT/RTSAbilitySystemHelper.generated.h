// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/RTSAbilitySystemHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilitySystemComponent;
class UActorComponent;
class UGameplayAbility;
class UGameplayEffect;
class UObject;
class UTexture2D;
enum class ERTSAbilityProcessPolicy : uint8;
enum class ERTSTargetType : uint8;
struct FGameplayAttribute;
struct FGameplayCueParameters;
struct FGameplayEffectSpec;
struct FGameplayEventData;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FRTSOrderTargetData;
struct FScalableFloat;
#ifdef COLONYORDERS_RTSAbilitySystemHelper_generated_h
#error "RTSAbilitySystemHelper.generated.h already included, missing '#pragma once' in RTSAbilitySystemHelper.h"
#endif
#define COLONYORDERS_RTSAbilitySystemHelper_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteGameplayCueWithParamsUnattached); \
	DECLARE_FUNCTION(execGetItemAbilityIndex); \
	DECLARE_FUNCTION(execGetGrantedAbilitiesFromGameplayEffect); \
	DECLARE_FUNCTION(execIsVisibleForActor); \
	DECLARE_FUNCTION(execFindDefaultComponentByClass); \
	DECLARE_FUNCTION(execGetValueAtLevel); \
	DECLARE_FUNCTION(execSendGameplayEvent); \
	DECLARE_FUNCTION(execCreateGameplayEventDataWithEventTag); \
	DECLARE_FUNCTION(execCreateGameplayEventData); \
	DECLARE_FUNCTION(execFilterForTagsWithParentTag); \
	DECLARE_FUNCTION(execDoesSatisfyTagRequirementsWithResult); \
	DECLARE_FUNCTION(execDoesSatisfyTagRequirements); \
	DECLARE_FUNCTION(execChangeTag); \
	DECLARE_FUNCTION(execUnionGameplayTagContainers); \
	DECLARE_FUNCTION(execGetSourceAndTargetTags); \
	DECLARE_FUNCTION(execGetRelationshipTags); \
	DECLARE_FUNCTION(execGetPlayerOwnerTags); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execHasActorAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasActorAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasActorClassMatchingGameplayTag); \
	DECLARE_FUNCTION(execHasActorMatchingGameplayTag); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execGetGameplayTagCount); \
	DECLARE_FUNCTION(execGetGameplayTags); \
	DECLARE_FUNCTION(execGetLastTagName); \
	DECLARE_FUNCTION(execGetEffectDescription); \
	DECLARE_FUNCTION(execGetEffectName); \
	DECLARE_FUNCTION(execGetEffectIcon); \
	DECLARE_FUNCTION(execGetGameplayEffectSpecStackCount); \
	DECLARE_FUNCTION(execGetGameplayEffectSpecClass); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectSpecs); \
	DECLARE_FUNCTION(execGetActiveGameplayEffects); \
	DECLARE_FUNCTION(execGetActiveEffectTimeRemainingAndDuration); \
	DECLARE_FUNCTION(execGetActiveEffectDuration); \
	DECLARE_FUNCTION(execGetActiveEffectTimeRemaining); \
	DECLARE_FUNCTION(execIsHumanPlayerAutoAbility); \
	DECLARE_FUNCTION(execGetAbilityTargetTagRequirements); \
	DECLARE_FUNCTION(execGetAbilitySourceTagRequirements); \
	DECLARE_FUNCTION(execGetAbilityProcessPolicy); \
	DECLARE_FUNCTION(execGetAbilityRange); \
	DECLARE_FUNCTION(execIsPassiveAbilityUnlocked); \
	DECLARE_FUNCTION(execIsAbilityActive); \
	DECLARE_FUNCTION(execCancelAbility); \
	DECLARE_FUNCTION(execShouldShowAbilityAsOrderInUI); \
	DECLARE_FUNCTION(execGetAbilityTargetType); \
	DECLARE_FUNCTION(execGetAbilityDescription); \
	DECLARE_FUNCTION(execGetAbilityName); \
	DECLARE_FUNCTION(execGetRequiredLevelToIncreaseAbilityLevel); \
	DECLARE_FUNCTION(execGetAbilityMaxLevel); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execGetAbilityIcon); \
	DECLARE_FUNCTION(execGetCooldownTimeRemainingAndDuration); \
	DECLARE_FUNCTION(execGetCooldownTimeDuration); \
	DECLARE_FUNCTION(execGetCooldownTimeRemaining); \
	DECLARE_FUNCTION(execGetCooldownEffect); \
	DECLARE_FUNCTION(execGetAbilities); \
	DECLARE_FUNCTION(execGetBasicAttackAbilities); \
	DECLARE_FUNCTION(execGetGameplayAttributes);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSAbilitySystemHelper(); \
	friend struct Z_Construct_UClass_URTSAbilitySystemHelper_Statics; \
public: \
	DECLARE_CLASS(URTSAbilitySystemHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSAbilitySystemHelper)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSAbilitySystemHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSAbilitySystemHelper(URTSAbilitySystemHelper&&); \
	URTSAbilitySystemHelper(const URTSAbilitySystemHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSAbilitySystemHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSAbilitySystemHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSAbilitySystemHelper) \
	NO_API virtual ~URTSAbilitySystemHelper();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h_18_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h_21_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSAbilitySystemHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
