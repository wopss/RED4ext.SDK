#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/KillType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TelemetryDamageSituation.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TelemetryEnemy.hpp>

namespace RED4ext
{
namespace game
{
struct TelemetryEnemyDown
{
    static constexpr const char* NAME = "gameTelemetryEnemyDown";
    static constexpr const char* ALIAS = "TelemetryEnemyDown";

    game::TelemetryEnemy enemy; // 00
    game::TelemetryDamageSituation situation; // 48
    game::KillType killType; // 4C
};
RED4EXT_ASSERT_SIZE(TelemetryEnemyDown, 0x50);
} // namespace game
using gameTelemetryEnemyDown = game::TelemetryEnemyDown;
using TelemetryEnemyDown = game::TelemetryEnemyDown;
} // namespace RED4ext

// clang-format on
