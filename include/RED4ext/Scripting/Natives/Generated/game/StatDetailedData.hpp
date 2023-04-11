#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierDetailedData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game
{
struct StatDetailedData
{
    static constexpr const char* NAME = "gameStatDetailedData";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::StatModifierDetailedData> modifiers; // 00
    game::data::StatType statType; // 10
    float limitMin; // 14
    float limitMax; // 18
    float value; // 1C
    bool boolStatType; // 20
    uint8_t unk21[0x28 - 0x21]; // 21
};
RED4EXT_ASSERT_SIZE(StatDetailedData, 0x28);
} // namespace game
using gameStatDetailedData = game::StatDetailedData;
} // namespace RED4ext

// clang-format on
