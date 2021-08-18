#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game { 
struct StatModifierDetailedData
{
    static constexpr const char* NAME = "gameStatModifierDetailedData";
    static constexpr const char* ALIAS = NAME;

    game::data::StatType statType; // 00
    float value; // 04
    game::StatModifierType modifierType; // 08
    uint8_t unk0C[0x20 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(StatModifierDetailedData, 0x20);
} // namespace game
} // namespace RED4ext
