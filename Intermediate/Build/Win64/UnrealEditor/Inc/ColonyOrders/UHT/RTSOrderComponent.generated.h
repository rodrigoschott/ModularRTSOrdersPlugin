// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSOrderComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class URTSOrder;
enum class ERTSOrderResult : uint8;
struct FGameplayTag;
struct FRTSOrderData;
#ifdef COLONYORDERS_RTSOrderComponent_generated_h
#error "RTSOrderComponent.generated.h already included, missing '#pragma once' in RTSOrderComponent.h"
#endif
#define COLONYORDERS_RTSOrderComponent_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_11_DELEGATE \
COLONYORDERS_API void FRTSOrderComponentOrderEnqueuedSignature_DelegateWrapper(const FMulticastScriptDelegate& RTSOrderComponentOrderEnqueuedSignature, FRTSOrderData const& Order);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_12_DELEGATE \
COLONYORDERS_API void FRTSOrderComponentOrderQueueClearedSignature_DelegateWrapper(const FMulticastScriptDelegate& RTSOrderComponentOrderQueueClearedSignature);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_13_DELEGATE \
COLONYORDERS_API void FRTSOrderComponentOrderChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& RTSOrderComponentOrderChangedSignature, FRTSOrderData const& NewOrder);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDeselected); \
	DECLARE_FUNCTION(execOnSelected); \
	DECLARE_FUNCTION(execOnOwnerTagsChanged); \
	DECLARE_FUNCTION(execOnTargetTagsChanged); \
	DECLARE_FUNCTION(execOnOrderEndedCallback); \
	DECLARE_FUNCTION(execReceivedOrderQueue); \
	DECLARE_FUNCTION(execReceivedCurrentOrder); \
	DECLARE_FUNCTION(execGetCurrentOrderTargetIndex); \
	DECLARE_FUNCTION(execGetCurrentOrderTargetLocation); \
	DECLARE_FUNCTION(execGetCurrentOrderTargetActor); \
	DECLARE_FUNCTION(execIsIdle); \
	DECLARE_FUNCTION(execGetCurrentOrderType);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSOrderComponent(); \
	friend struct Z_Construct_UClass_URTSOrderComponent_Statics; \
public: \
	DECLARE_CLASS(URTSOrderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSOrderComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentOrder=NETFIELD_REP_START, \
		LastOrder, \
		OrderQueue, \
		NETFIELD_REP_END=OrderQueue	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSOrderComponent(URTSOrderComponent&&); \
	URTSOrderComponent(const URTSOrderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSOrderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSOrderComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSOrderComponent) \
	NO_API virtual ~URTSOrderComponent();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_18_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSOrderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
