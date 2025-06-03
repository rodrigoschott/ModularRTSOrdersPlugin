// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h" // Ensure this is the very first include
#include "Modules/ModuleManager.h" // Good to have for IModuleInterface

// Log Category and Stats Group Declarations
DECLARE_LOG_CATEGORY_EXTERN(LogRTS, Log, All);
DECLARE_STATS_GROUP(TEXT("RTS"), STATGROUP_RTS, STATCAT_Advanced);

class FColonyOrdersModule : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};