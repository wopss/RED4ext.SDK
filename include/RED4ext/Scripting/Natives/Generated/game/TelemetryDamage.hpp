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
    game::TelemetrySourceEntity sourceEntity; // C0
    uint32_t hitCount; // E8
    float distance; // EC
    float time; // F0
    uint8_t unkF4[0x118 - 0xF4]; // F4
};
RED4EXT_ASSERT_SIZE(TelemetryDamage, 0x118);
} // namespace game
using gameTelemetryDamage = game::TelemetryDamage;
using TelemetryDamage = game::TelemetryDamage;
} // namespace RED4ext

// clang-format on
