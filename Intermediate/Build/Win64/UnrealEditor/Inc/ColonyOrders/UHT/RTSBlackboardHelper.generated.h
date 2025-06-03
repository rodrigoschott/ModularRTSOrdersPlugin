// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSBlackboardHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBTNode;
class URTSOrder;
#ifdef COLONYORDERS_RTSBlackboardHelper_generated_h
#error "RTSBlackboardHelper.generated.h already included, missing '#pragma once' in RTSBlackboardHelper.h"
#endif
#define COLONYORDERS_RTSBlackboardHelper_generated_h

#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBlackboardOrderHomeLocation); \
	DECLARE_FUNCTION(execGetBlackboardOrderRange); \
	DECLARE_FUNCTION(execGetBlackboardOrderIndex); \
	DECLARE_FUNCTION(execGetBlackboardOrderTarget); \
	DECLARE_FUNCTION(execGetBlackboardOrderLocation); \
	DECLARE_FUNCTION(execGetBlackboardOrderType);


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSBlackboardHelper(); \
	friend struct Z_Construct_UClass_URTSBlackboardHelper_Statics; \
public: \
	DECLARE_CLASS(URTSBlackboardHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ColonyOrders"), NO_API) \
	DECLARE_SERIALIZER(URTSBlackboardHelper)


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSBlackboardHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTSBlackboardHelper(URTSBlackboardHelper&&); \
	URTSBlackboardHelper(const URTSBlackboardHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSBlackboardHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSBlackboardHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSBlackboardHelper) \
	NO_API virtual ~URTSBlackboardHelper();


#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h_11_PROLOG
#define FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h_14_INCLASS_NO_PURE_DECLS \
	FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLONYORDERS_API UClass* StaticClass<class URTSBlackboardHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSBlackboardHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
