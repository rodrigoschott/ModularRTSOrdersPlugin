// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSAttackOrder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONYORDERS_RTSAttackOrder_generated_h
#error "RTSAttackOrder.generated.h already included, missing '#pragma once' in RTSAttackOrder.h"
#endif
#define COLONYORDERS_RTSAttackOrder_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAttackOrder_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSAttackOrder(); \
	friend struct Z_Construct_UClass_URTSAttackOrder_Statics; \
public: \
	DECLARE_CLASS(URTSAttackOrder, URTSCharacterAIOrder, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSAttackOrder)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAttackOrder_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSAttackOrder(URTSAttackOrder&&); \
	URTSAttackOrder(const URTSAttackOrder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSAttackOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSAttackOrder); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URTSAttackOrder) \
	NO_API virtual ~URTSAttackOrder();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAttackOrder_h_13_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAttackOrder_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAttackOrder_h_16_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAttackOrder_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSAttackOrder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAttackOrder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
