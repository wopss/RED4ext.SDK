#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierType.hpp>

namespace RED4ext
{
namespace game
{
struct StatModifierDetailedData
{
    static constexpr const char* NAME = "gameStatModifierDetailedData";
    static constexpr const char* ALIAS = NAME;

    game::StatModifierType modifierType; // 00
    float value; // 04
    uint8_t unk08[0x30 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(StatModifierDetailedData, 0x30);
} // namespace game
using gameStatModifierDetailedData = game::StatModifierDetailedData;
} // namespace RED4ext

// clang-format on
