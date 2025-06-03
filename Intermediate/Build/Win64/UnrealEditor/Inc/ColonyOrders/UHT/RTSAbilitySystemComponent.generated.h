// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/RTSAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class APlayerState;
class UGameplayAbility;
struct FGameplayAbilitySpecHandle;
struct FGameplayTagContainer;
#ifdef COLONYORDERS_RTSAbilitySystemComponent_generated_h
#error "RTSAbilitySystemComponent.generated.h already included, missing '#pragma once' in RTSAbilitySystemComponent.h"
#endif
#define COLONYORDERS_RTSAbilitySystemComponent_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_15_DELEGATE \
COLONYORDERS_API void FRTSAbilitySystemComponentCollectedXPChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& RTSAbilitySystemComponentCollectedXPChangedSignature, float OldCollectedXP, float NewCollectedXP);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_18_DELEGATE \
COLONYORDERS_API void FRTSAbilitySystemComponentAbilityPointsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& RTSAbilitySystemComponentAbilityPointsChangedSignature, int32 OldAbilityPoints, int32 NewAbilityPoints);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_22_DELEGATE \
COLONYORDERS_API void FRTSAbilitySystemComponentAbilityEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& RTSAbilitySystemComponentAbilityEndedSignature, TSubclassOf<UGameplayAbility> Ability, FGameplayAbilitySpecHandle AbilitySpecHandle, bool bWasCancelled);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReceivedAbilityPoints); \
	DECLARE_FUNCTION(execReceivedCollectedXP); \
	DECLARE_FUNCTION(execOnOwnerChanged); \
	DECLARE_FUNCTION(execOnAnyActorKilled); \
	DECLARE_FUNCTION(execOnKilled); \
	DECLARE_FUNCTION(execGetInitialAndUnlockableAbilities); \
	DECLARE_FUNCTION(execGetInitialTags); \
	DECLARE_FUNCTION(execIncreaseAbilityLevel); \
	DECLARE_FUNCTION(execGetAbilityPoints); \
	DECLARE_FUNCTION(execCanLevelUp); \
	DECLARE_FUNCTION(execAddCollectedXP); \
	DECLARE_FUNCTION(execGetCollectedXP); \
	DECLARE_FUNCTION(execGetCurrentLevelXPProgress); \
	DECLARE_FUNCTION(execGetNextLevelXP); \
	DECLARE_FUNCTION(execGetCurrentLevelXP); \
	DECLARE_FUNCTION(execGetTotalXPRequiredForLevel); \
	DECLARE_FUNCTION(execGetGrantedXP); \
	DECLARE_FUNCTION(execGetLevel); \
	DECLARE_FUNCTION(execSetLevel); \
	DECLARE_FUNCTION(execGetName);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_URTSAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(URTSAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSAbilitySystemComponent) \
	virtual UObject* _getUObject() const override { return const_cast<URTSAbilitySystemComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemAbilities=NETFIELD_REP_START, \
		CollectedXP, \
		AbilityPoints, \
		NETFIELD_REP_END=AbilityPoints	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSAbilitySystemComponent(URTSAbilitySystemComponent&&); \
	URTSAbilitySystemComponent(const URTSAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSAbilitySystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URTSAbilitySystemComponent) \
	NO_API virtual ~URTSAbilitySystemComponent();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_25_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
