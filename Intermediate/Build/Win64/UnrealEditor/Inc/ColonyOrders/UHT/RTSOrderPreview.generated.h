// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSOrderPreview.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
#ifdef COLONYORDERS_RTSOrderPreview_generated_h
#error "RTSOrderPreview.generated.h already included, missing '#pragma once' in RTSOrderPreview.h"
#endif
#define COLONYORDERS_RTSOrderPreview_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInstigatorAbility); \
	DECLARE_FUNCTION(execGetInstigatorAbility);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_12_CALLBACK_WRAPPERS
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTSOrderPreview(); \
	friend struct Z_Construct_UClass_ARTSOrderPreview_Statics; \
public: \
	DECLARE_CLASS(ARTSOrderPreview, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(ARTSOrderPreview)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTSOrderPreview(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARTSOrderPreview(ARTSOrderPreview&&); \
	ARTSOrderPreview(const ARTSOrderPreview&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTSOrderPreview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTSOrderPreview); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTSOrderPreview) \
	NO_API virtual ~ARTSOrderPreview();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_9_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_12_CALLBACK_WRAPPERS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_12_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class ARTSOrderPreview>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderPreview_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
