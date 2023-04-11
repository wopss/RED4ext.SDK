#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameTime.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITimeConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct TimePeriod_ConditionType : quest::ITimeConditionType
{
    static constexpr const char* NAME = "questTimePeriod_ConditionType";
    static constexpr const char* ALIAS = NAME;

    GameTime begin; // 38
    GameTime end; // 3C
};
RED4EXT_ASSERT_SIZE(TimePeriod_ConditionType, 0x40);
} // namespace quest
using questTimePeriod_ConditionType = quest::TimePeriod_ConditionType;
} // namespace RED4ext

// clang-format on
