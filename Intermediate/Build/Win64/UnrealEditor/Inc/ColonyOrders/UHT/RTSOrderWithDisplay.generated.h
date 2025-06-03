// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSOrderWithDisplay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONYORDERS_RTSOrderWithDisplay_generated_h
#error "RTSOrderWithDisplay.generated.h already included, missing '#pragma once' in RTSOrderWithDisplay.h"
#endif
#define COLONYORDERS_RTSOrderWithDisplay_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithDisplay_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSOrderWithDisplay(); \
	friend struct Z_Construct_UClass_URTSOrderWithDisplay_Statics; \
public: \
	DECLARE_CLASS(URTSOrderWithDisplay, URTSOrder, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSOrderWithDisplay)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithDisplay_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSOrderWithDisplay(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSOrderWithDisplay(URTSOrderWithDisplay&&); \
	URTSOrderWithDisplay(const URTSOrderWithDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSOrderWithDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSOrderWithDisplay); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URTSOrderWithDisplay) \
	NO_API virtual ~URTSOrderWithDisplay();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithDisplay_h_14_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithDisplay_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithDisplay_h_17_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithDisplay_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSOrderWithDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderWithDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
