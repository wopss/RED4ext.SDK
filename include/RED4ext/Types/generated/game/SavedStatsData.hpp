#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game { struct StatModifierData; }

namespace game { 
struct SavedStatsData
{
    static constexpr const char* NAME = "gameSavedStatsData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::StatModifierData>> statModifiers; // 00
    DynArray<game::data::StatType> inactiveStats; // 10
    TweakDBID recordID; // 20
    uint32_t seed; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(SavedStatsData, 0x30);
} // namespace game
} // namespace RED4ext
