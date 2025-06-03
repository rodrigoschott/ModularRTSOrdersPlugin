#include "AbilitySystem/RTSAttackAttributeSet.h"

#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "Net/UnrealNetwork.h"

#include "AbilitySystem/RTSGlobalTags.h"

const float URTSAttackAttributeSet::MAX_DAMAGE = 10000.0f;
const float URTSAttackAttributeSet::MAX_COOLDOWN = 10000.0f;
const float URTSAttackAttributeSet::MAX_RANGE = 10000.0f;
const float URTSAttackAttributeSet::MAX_OUTGOING_DAMAGE_MULTIPLIER = 10000.0f;



void URTSAttackAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME_CONDITION_NOTIFY(URTSAttackAttributeSet, Damage, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(URTSAttackAttributeSet, Cooldown, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(URTSAttackAttributeSet, Range, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(URTSAttackAttributeSet, OutgoingDamageMultiplier, COND_None, REPNOTIFY_Always);
}

// Changed: Parameter type is now float
void URTSAttackAttributeSet::OnRep_Damage(const float OldDamage)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(URTSAttackAttributeSet, Damage, OldDamage);
}

const FGameplayAttribute& URTSAttackAttributeSet::DamageAttribute()
{
    static FProperty* Property = FindFieldChecked<FProperty>(URTSAttackAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(URTSAttackAttributeSet, Damage));
    static FGameplayAttribute Attribute(Property);
    return Attribute;
}

// Changed: Parameter type is now float
void URTSAttackAttributeSet::OnRep_Cooldown(const float OldCooldown)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(URTSAttackAttributeSet, Cooldown, OldCooldown);
}

const FGameplayAttribute& URTSAttackAttributeSet::CooldownAttribute()
{
    static FProperty* Property = FindFieldChecked<FProperty>(URTSAttackAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(URTSAttackAttributeSet, Cooldown));
    static FGameplayAttribute Attribute(Property);
    return Attribute;
}

// Changed: Parameter type is now float
void URTSAttackAttributeSet::OnRep_Range(const float OldRange)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(URTSAttackAttributeSet, Range, OldRange);
}

const FGameplayAttribute& URTSAttackAttributeSet::RangeAttribute()
{
    static FProperty* Property = FindFieldChecked<FProperty>(URTSAttackAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(URTSAttackAttributeSet, Range));
    static FGameplayAttribute Attribute(Property);
    return Attribute;
}

// Changed: Parameter type is now float
void URTSAttackAttributeSet::OnRep_OutgoingDamageMultiplier(const float OldOutgoingDamageMultiplier)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(URTSAttackAttributeSet, OutgoingDamageMultiplier, OldOutgoingDamageMultiplier);
}

const FGameplayAttribute& URTSAttackAttributeSet::OutgoingDamageMultiplierAttribute()
{
    static FProperty* Property = FindFieldChecked<FProperty>(URTSAttackAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(URTSAttackAttributeSet, OutgoingDamageMultiplier));
    static FGameplayAttribute Attribute(Property);
    return Attribute;
}

// This function's signature was correct (FProperty*).
bool URTSAttackAttributeSet::ShouldInitProperty(bool FirstInit, FProperty* PropertyToInit) const
{
    return (PropertyToInit != OutgoingDamageMultiplierAttribute().GetUProperty());
}

void URTSAttackAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
    if (Attribute == DamageAttribute())
    {
        NewValue = FMath::Clamp(NewValue, 0.0f, MAX_DAMAGE);
    }

    if (Attribute == CooldownAttribute())
    {
        NewValue = FMath::Clamp(NewValue, 0.0f, MAX_COOLDOWN);
    }

    if (Attribute == RangeAttribute())
    {
        NewValue = FMath::Clamp(NewValue, 0.0f, MAX_RANGE);
    }

    if (Attribute == OutgoingDamageMultiplierAttribute())
    {
        NewValue = FMath::Clamp(NewValue, 0.0f, MAX_OUTGOING_DAMAGE_MULTIPLIER);
    }
}

void URTSAttackAttributeSet::PostInitializeProperties(bool bInitialInit)
{
    if (bInitialInit)
    {
        OutgoingDamageMultiplier = 1.0f;
    }
}

void URTSAttackAttributeSet::GetDefaultStatusTags(FGameplayTagContainer& OutStatusTags) const
{
    OutStatusTags.AddTag(URTSGlobalTags::Status_Permanent_CanAttack());
}