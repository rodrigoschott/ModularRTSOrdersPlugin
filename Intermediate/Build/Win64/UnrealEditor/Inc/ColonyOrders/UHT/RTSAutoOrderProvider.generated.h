// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSAutoOrderProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRTSOrderTypeWithIndex;
#ifdef COLONYORDERS_RTSAutoOrderProvider_generated_h
#error "RTSAutoOrderProvider.generated.h already included, missing '#pragma once' in RTSAutoOrderProvider.h"
#endif
#define COLONYORDERS_RTSAutoOrderProvider_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetAutoOrders_Implementation(TArray<FRTSOrderTypeWithIndex>& OutAutoOrders) {}; \
	DECLARE_FUNCTION(execGetAutoOrders);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_13_CALLBACK_WRAPPERS
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLONYORDERS_API URTSAutoOrderProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSAutoOrderProvider(URTSAutoOrderProvider&&); \
	URTSAutoOrderProvider(const URTSAutoOrderProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLONYORDERS_API, URTSAutoOrderProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSAutoOrderProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSAutoOrderProvider) \
	COLONYORDERS_API virtual ~URTSAutoOrderProvider();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURTSAutoOrderProvider(); \
	friend struct Z_Construct_UClass_URTSAutoOrderProvider_Statics; \
public: \
	DECLARE_CLASS(URTSAutoOrderProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ColonyOrders"), COLONYORDERS_API) \
	DECLARE_SERIALIZER(URTSAutoOrderProvider)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_13_GENERATED_UINTERFACE_BODY() \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRTSAutoOrderProvider() {} \
public: \
	typedef URTSAutoOrderProvider UClassType; \
	typedef IRTSAutoOrderProvider ThisClass; \
	static void Execute_GetAutoOrders(UObject* O, TArray<FRTSOrderTypeWithIndex>& OutAutoOrders); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_10_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_13_CALLBACK_WRAPPERS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSAutoOrderProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSAutoOrderProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
