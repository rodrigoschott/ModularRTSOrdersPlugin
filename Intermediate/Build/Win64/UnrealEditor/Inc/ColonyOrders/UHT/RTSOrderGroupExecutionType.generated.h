// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Orders/RTSOrderGroupExecutionType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONYORDERS_RTSOrderGroupExecutionType_generated_h
#error "RTSOrderGroupExecutionType.generated.h already included, missing '#pragma once' in RTSOrderGroupExecutionType.h"
#endif
#define COLONYORDERS_RTSOrderGroupExecutionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTSSystemPluginDev_Plugins_ColonyOrders_Source_ColonyOrders_Public_Orders_RTSOrderGroupExecutionType_h


#define FOREACH_ENUM_ERTSORDERGROUPEXECUTIONTYPE(op) \
	op(ERTSOrderGroupExecutionType::ALL) \
	op(ERTSOrderGroupExecutionType::SELECTED_SUB_GROUP) \
	op(ERTSOrderGroupExecutionType::SELECTED_UNIT) \
	op(ERTSOrderGroupExecutionType::MOST_SUITABLE_UNIT) 

enum class ERTSOrderGroupExecutionType : uint8;
template<> struct TIsUEnumClass<ERTSOrderGroupExecutionType> { enum { Value = true }; };
template<> COLONYORDERS_API UEnum* StaticEnum<ERTSOrderGroupExecutionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
