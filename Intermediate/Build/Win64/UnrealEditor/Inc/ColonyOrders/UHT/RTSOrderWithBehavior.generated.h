// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSOrderWithBehavior.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONYORDERS_RTSOrderWithBehavior_generated_h
#error "RTSOrderWithBehavior.generated.h already included, missing '#pragma once' in RTSOrderWithBehavior.h"
#endif
#define COLONYORDERS_RTSOrderWithBehavior_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithBehavior_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSOrderWithBehavior(); \
	friend struct Z_Construct_UClass_URTSOrderWithBehavior_Statics; \
public: \
	DECLARE_CLASS(URTSOrderWithBehavior, URTSOrderWithDisplay, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSOrderWithBehavior)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithBehavior_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSOrderWithBehavior(URTSOrderWithBehavior&&); \
	URTSOrderWithBehavior(const URTSOrderWithBehavior&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSOrderWithBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSOrderWithBehavior); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URTSOrderWithBehavior) \
	NO_API virtual ~URTSOrderWithBehavior();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithBehavior_h_13_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithBehavior_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithBehavior_h_16_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithBehavior_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSOrderWithBehavior>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithBehavior_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
