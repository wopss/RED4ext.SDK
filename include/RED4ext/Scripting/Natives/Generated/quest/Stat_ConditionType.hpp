#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IStatsConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Stat_ConditionType : quest::IStatsConditionType
{
    static constexpr const char* NAME = "questStat_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::data::StatType statType; // 48
    float value; // 4C
    EComparisonType comparisonType; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(Stat_ConditionType, 0x58);
} // namespace quest
using questStat_ConditionType = quest::Stat_ConditionType;
} // namespace RED4ext

// clang-format on
