#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game { struct StatModifierData; }

namespace game { 
struct StatData
{
    static constexpr const char* NAME = "gameStatData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::StatModifierData>> modifiers; // 00
    uint8_t unk10[0x14 - 0x10]; // 10
    game::data::StatType statType; // 14
};
RED4EXT_ASSERT_SIZE(StatData, 0x18);
} // namespace game
} // namespace RED4ext
