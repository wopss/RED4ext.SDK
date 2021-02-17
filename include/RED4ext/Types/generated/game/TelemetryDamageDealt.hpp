#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/TelemetryDamage.hpp>
#include <RED4ext/Types/generated/game/TelemetryDamageSituation.hpp>
#include <RED4ext/Types/generated/game/TelemetryEnemy.hpp>

namespace RED4ext
{
namespace game { 
struct TelemetryDamageDealt
{
    static constexpr const char* NAME = "gameTelemetryDamageDealt";
    static constexpr const char* ALIAS = "TelemetryDamageDealt";

    game::TelemetryDamageSituation situation; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    game::TelemetryDamage damage; // 08
    game::TelemetryEnemy enemy; // B0
};
RED4EXT_ASSERT_SIZE(TelemetryDamageDealt, 0xF8);
} // namespace game
using TelemetryDamageDealt = game::TelemetryDamageDealt;
} // namespace RED4ext
