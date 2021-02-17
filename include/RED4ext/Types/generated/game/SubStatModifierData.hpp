#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/StatModifierData.hpp>
#include <RED4ext/Types/generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game { 
struct SubStatModifierData : game::StatModifierData
{
    static constexpr const char* NAME = "gameSubStatModifierData";
    static constexpr const char* ALIAS = NAME;

    game::data::StatType refStatType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(SubStatModifierData, 0x50);
} // namespace game
} // namespace RED4ext
