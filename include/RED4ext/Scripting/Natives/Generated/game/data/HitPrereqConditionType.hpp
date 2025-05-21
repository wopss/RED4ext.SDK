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
    ReactionPreset = 15,
    SameTarget = 16,
    SelfHit = 17,
    SourceType = 18,
    Stat = 19,
    StatComparison = 20,
    StatPool = 21,
    StatPoolComparison = 22,
    StatusEffectPresent = 23,
    TargetBreachCanGetKilledByDamage = 24,
    TargetCanGetKilledByDamage = 25,
    TargetIsCrowd = 26,
    TargetKilled = 27,
    TargetNPCRarity = 28,
    TargetNPCType = 29,
    TargetType = 30,
    TriggerMode = 31,
    WeaponEvolution = 32,
    WeaponItemType = 33,
    WeaponType = 34,
    WoundedTriggered = 35,
    Count = 36,
    Invalid = 37,
};
} // namespace game::data
using gamedataHitPrereqConditionType = game::data::HitPrereqConditionType;
} // namespace RED4ext

// clang-format on
