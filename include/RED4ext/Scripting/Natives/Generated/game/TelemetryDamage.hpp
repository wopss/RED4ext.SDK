#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TelemetryInventoryItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AttackType.hpp>

namespace RED4ext
{
namespace game { 
struct TelemetryDamage
{
    static constexpr const char* NAME = "gameTelemetryDamage";
    static constexpr const char* ALIAS = NAME;

    game::data::AttackType attackType; // 00
    float damageAmount; // 04
    game::TelemetryInventoryItem weapon; // 08
    uint32_t hitCount; // 78
    float distance; // 7C
    float time; // 80
    uint8_t unk84[0xA8 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(TelemetryDamage, 0xA8);
} // namespace game
} // namespace RED4ext
