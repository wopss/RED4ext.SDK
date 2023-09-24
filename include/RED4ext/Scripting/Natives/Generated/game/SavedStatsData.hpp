#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game { struct StatModifierData_Deprecated; }

namespace game
{
struct SavedStatsData
{
    static constexpr const char* NAME = "gameSavedStatsData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::StatModifierData_Deprecated>> statModifiers; // 00
    DataBuffer modifiersBuffer; // 10
    DataBuffer forcedModifiersBuffer; // 38
    DataBuffer savedModifierGroupStatTypesBuffer; // 60
    DynArray<game::data::StatType> inactiveStats; // 88
    TweakDBID recordID; // 98
    uint32_t seed; // A0
    uint8_t unkA4[0xA8 - 0xA4]; // A4
};
RED4EXT_ASSERT_SIZE(SavedStatsData, 0xA8);
} // namespace game
using gameSavedStatsData = game::SavedStatsData;
} // namespace RED4ext

// clang-format on
