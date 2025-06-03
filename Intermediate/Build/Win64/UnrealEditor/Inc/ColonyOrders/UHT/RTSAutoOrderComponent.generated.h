// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSAutoOrderComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
struct FRTSOrderData;
struct FRTSOrderTypeWithIndex;
#ifdef COLONYORDERS_RTSAutoOrderComponent_generated_h
#error "RTSAutoOrderComponent.generated.h already included, missing '#pragma once' in RTSAutoOrderComponent.h"
#endif
#define COLONYORDERS_RTSAutoOrderComponent_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOwnerChanged); \
	DECLARE_FUNCTION(execOnOrderChanged); \
	DECLARE_FUNCTION(execGetHumanPlayerAutoOrderState); \
	DECLARE_FUNCTION(execSetHumanPlayerAutoOrderState); \
	DECLARE_FUNCTION(execIsHumanPlayerAutoOrder);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSAutoOrderComponent(); \
	friend struct Z_Construct_UClass_URTSAutoOrderComponent_Statics; \
public: \
	DECLARE_CLASS(URTSAutoOrderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSAutoOrderComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HumanPlayerAutoOrderStates=NETFIELD_REP_START, \
		NETFIELD_REP_END=HumanPlayerAutoOrderStates	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSAutoOrderComponent(URTSAutoOrderComponent&&); \
	URTSAutoOrderComponent(const URTSAutoOrderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSAutoOrderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSAutoOrderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URTSAutoOrderComponent) \
	NO_API virtual ~URTSAutoOrderComponent();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h_14_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSAutoOrderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
