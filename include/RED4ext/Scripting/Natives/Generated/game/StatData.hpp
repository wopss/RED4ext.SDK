#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierHandle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game
{
struct StatData
{
    static constexpr const char* NAME = "gameStatData";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::StatModifierHandle> modifiers; // 00
    uint8_t unk10[0x14 - 0x10]; // 10
    game::data::StatType statType; // 14
};
RED4EXT_ASSERT_SIZE(StatData, 0x18);
} // namespace game
using gameStatData = game::StatData;
} // namespace RED4ext

// clang-format on
