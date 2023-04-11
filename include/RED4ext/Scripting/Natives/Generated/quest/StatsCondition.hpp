#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct IStatsConditionType; }

namespace quest
{
struct StatsCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questStatsCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IStatsConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(StatsCondition, 0x40);
} // namespace quest
using questStatsCondition = quest::StatsCondition;
} // namespace RED4ext

// clang-format on
