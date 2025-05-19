#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class AIThreatPersistenceSource : int32_t
{
    AddThreat = 0,
    CatchUp = 1,
    CommandAimWithWeapon = 2,
    CommandForceShoot = 3,
    CommandInjectCombatTarget = 4,
    CommandInjectThreat = 5,
    CommandMeleeAttack = 6,
    CommandShoot = 7,
    CommandThrowGrenade = 8,
    Default = 9,
    QuickhackUpload = 10,
    SetNewCombatTarget = 11,
    TrackedBySecuritySystemAgent = 12,
    Count = 13,
    Invalid = 14,
};
} // namespace game::data
using gamedataAIThreatPersistenceSource = game::data::AIThreatPersistenceSource;
} // namespace RED4ext

// clang-format on
