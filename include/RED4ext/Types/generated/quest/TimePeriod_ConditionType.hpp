#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/GameTime.hpp>
#include <RED4ext/Types/generated/quest/ITimeConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct TimePeriod_ConditionType : quest::ITimeConditionType
{
    static constexpr const char* NAME = "questTimePeriod_ConditionType";
    static constexpr const char* ALIAS = NAME;

    GameTime begin; // 38
    GameTime end; // 3C
};
RED4EXT_ASSERT_SIZE(TimePeriod_ConditionType, 0x40);
} // namespace quest
} // namespace RED4ext
