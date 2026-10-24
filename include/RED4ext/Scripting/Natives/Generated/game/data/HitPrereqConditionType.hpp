#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class HitPrereqConditionType : int32_t
{
    AgentMoving = 0,
    AmmoState = 1,
    AttackSubType = 2,
    AttackTag = 3,
    AttackType = 4,
    BodyPart = 5,
    ConsecutiveHits = 6,
    DamageOverTimeType = 7,
    DamageType = 8,
    DismembermentTriggered = 9,
    DistanceCovered = 10,
    EffectNamePresent = 11,
    HitFlag = 12,
    HitIsQuickhackPresentInQueue = 13,
    InstigatorType = 14,
    OR = 15,
    ReactionPreset = 16,
    SameTarget = 17,
    SelfHit = 18,
    SourceType = 19,
    Stat = 20,
    StatComparison = 21,
    StatPool = 22,
    StatPoolComparison = 23,
    StatusEffectPresent = 24,
    TargetBreachCanGetKilledByDamage = 25,
    TargetCanGetKilledByDamage = 26,
    TargetIsCrowd = 27,
    TargetKilled = 28,
    TargetNPCRarity = 29,
    TargetNPCType = 30,
    TargetType = 31,
    TriggerMode = 32,
    WeaponEvolution = 33,
    WeaponHasTag = 34,
    WeaponItemType = 35,
    WeaponSlot = 36,
    WeaponSource = 37,
    WeaponSourceHasModWithTag = 38,
    WeaponType = 39,
    WoundedTriggered = 40,
    Count = 41,
    Invalid = 42,
};
} // namespace game::data
using gamedataHitPrereqConditionType = game::data::HitPrereqConditionType;
} // namespace RED4ext

// clang-format on
