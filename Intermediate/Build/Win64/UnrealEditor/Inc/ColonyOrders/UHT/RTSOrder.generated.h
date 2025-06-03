// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSOrder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERTSOrderResult : uint8;
#ifdef COLONYORDERS_RTSOrder_generated_h
#error "RTSOrder.generated.h already included, missing '#pragma once' in RTSOrder.h"
#endif
#define COLONYORDERS_RTSOrder_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrder_h_19_DELEGATE \
COLONYORDERS_API void FRTSOrderCallback_DelegateWrapper(const FMulticastScriptDelegate& RTSOrderCallback, ERTSOrderResult Result);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrder_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSOrder(); \
	friend struct Z_Construct_UClass_URTSOrder_Statics; \
public: \
	DECLARE_CLASS(URTSOrder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSOrder)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrder_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSOrder(URTSOrder&&); \
	URTSOrder(const URTSOrder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSOrder); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URTSOrder) \
	NO_API virtual ~URTSOrder();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrder_h_24_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrder_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrder_h_27_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrder_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSOrder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
