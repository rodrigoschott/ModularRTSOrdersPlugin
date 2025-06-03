// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/RTSAttackAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONYORDERS_RTSAttackAttributeSet_generated_h
#error "RTSAttackAttributeSet.generated.h already included, missing '#pragma once' in RTSAttackAttributeSet.h"
#endif
#define COLONYORDERS_RTSAttackAttributeSet_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_OutgoingDamageMultiplier); \
	DECLARE_FUNCTION(execOnRep_Range); \
	DECLARE_FUNCTION(execOnRep_Cooldown); \
	DECLARE_FUNCTION(execOnRep_Damage);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSAttackAttributeSet(); \
	friend struct Z_Construct_UClass_URTSAttackAttributeSet_Statics; \
public: \
	DECLARE_CLASS(URTSAttackAttributeSet, URTSAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSAttackAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Damage=NETFIELD_REP_START, \
		Cooldown, \
		Range, \
		OutgoingDamageMultiplier, \
		NETFIELD_REP_END=OutgoingDamageMultiplier	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URTSAttackAttributeSet) \
public:


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSAttackAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSAttackAttributeSet(URTSAttackAttributeSet&&); \
	URTSAttackAttributeSet(const URTSAttackAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSAttackAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSAttackAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSAttackAttributeSet) \
	NO_API virtual ~URTSAttackAttributeSet();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h_10_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h_13_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSAttackAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_AbilitySystem_RTSAttackAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
