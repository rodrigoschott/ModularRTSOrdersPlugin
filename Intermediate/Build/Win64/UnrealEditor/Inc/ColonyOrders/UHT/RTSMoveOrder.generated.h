// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSMoveOrder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONYORDERS_RTSMoveOrder_generated_h
#error "RTSMoveOrder.generated.h already included, missing '#pragma once' in RTSMoveOrder.h"
#endif
#define COLONYORDERS_RTSMoveOrder_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSMoveOrder_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSMoveOrder(); \
	friend struct Z_Construct_UClass_URTSMoveOrder_Statics; \
public: \
	DECLARE_CLASS(URTSMoveOrder, URTSCharacterAIOrder, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSMoveOrder)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSMoveOrder_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSMoveOrder(URTSMoveOrder&&); \
	URTSMoveOrder(const URTSMoveOrder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSMoveOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSMoveOrder); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URTSMoveOrder) \
	NO_API virtual ~URTSMoveOrder();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSMoveOrder_h_14_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSMoveOrder_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSMoveOrder_h_17_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSMoveOrder_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSMoveOrder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSMoveOrder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
