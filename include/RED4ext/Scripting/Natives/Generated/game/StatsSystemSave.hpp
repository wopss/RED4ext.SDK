#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierSave.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatsSeedKey.hpp>

namespace RED4ext
{
namespace game
{
struct StatsSystemSave : ISerializable
{
    static constexpr const char* NAME = "gameStatsSystemSave";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::StatsSeedKey> statsObjectsData; // 30
    DynArray<game::StatModifierSave> statModifiersData; // 40
    uint8_t unk50[0x80 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(StatsSystemSave, 0x80);
} // namespace game
using gameStatsSystemSave = game::StatsSystemSave;
} // namespace RED4ext

// clang-format on
