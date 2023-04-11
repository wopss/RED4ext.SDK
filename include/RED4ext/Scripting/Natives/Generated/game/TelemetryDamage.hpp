#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TelemetryInventoryItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TelemetrySourceEntity.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AttackType.hpp>

namespace RED4ext
{
namespace game
{
struct TelemetryDamage
{
    static constexpr const char* NAME = "gameTelemetryDamage";
    static constexpr const char* ALIAS = "TelemetryDamage";

    game::data::AttackType attackType; // 00
    TweakDBID attackRecord; // 04
    float damageAmount; // 0C
    game::TelemetryInventoryItem weapon; // 10
    game::TelemetrySourceEntity sourceEntity; // 80
    uint32_t hitCount; // A8
    float distance; // AC
    float time; // B0
    uint8_t unkB4[0xD8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(TelemetryDamage, 0xD8);
} // namespace game
using gameTelemetryDamage = game::TelemetryDamage;
using TelemetryDamage = game::TelemetryDamage;
} // namespace RED4ext

// clang-format on
