#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/EComparisonType.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/game/data/StatType.hpp>
#include <RED4ext/Types/generated/quest/IStatsConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct Stat_ConditionType : quest::IStatsConditionType
{
    static constexpr const char* NAME = "questStat_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 38
    game::data::StatType statType; // 70
    float value; // 74
    EComparisonType comparisonType; // 78
    bool isPlayer; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
};
RED4EXT_ASSERT_SIZE(Stat_ConditionType, 0x80);
} // namespace quest
} // namespace RED4ext
