#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class TelemetryDamageSituation : int32_t
{
    Irrelevant = 0,
    EnemyToPlayer = 1,
    EnemyToCompanion = 2,
    PlayerToEnemy = 3,
    CompanionToEnemy = 4,
    PlayerToPlayer = 5,
};
} // namespace game
using gameTelemetryDamageSituation = game::TelemetryDamageSituation;
} // namespace RED4ext

// clang-format on
