// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSStopOrder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONYORDERS_RTSStopOrder_generated_h
#error "RTSStopOrder.generated.h already included, missing '#pragma once' in RTSStopOrder.h"
#endif
#define COLONYORDERS_RTSStopOrder_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSStopOrder_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSStopOrder(); \
	friend struct Z_Construct_UClass_URTSStopOrder_Statics; \
public: \
	DECLARE_CLASS(URTSStopOrder, URTSCharacterAIOrder, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSStopOrder)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSStopOrder_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSStopOrder(URTSStopOrder&&); \
	URTSStopOrder(const URTSStopOrder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSStopOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSStopOrder); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URTSStopOrder) \
	NO_API virtual ~URTSStopOrder();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSStopOrder_h_12_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSStopOrder_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSStopOrder_h_15_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSStopOrder_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSStopOrder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSStopOrder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
