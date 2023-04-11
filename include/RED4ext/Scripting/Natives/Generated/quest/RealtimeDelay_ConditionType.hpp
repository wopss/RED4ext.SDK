#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITimeConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct RealtimeDelay_ConditionType : quest::ITimeConditionType
{
    static constexpr const char* NAME = "questRealtimeDelay_ConditionType";
    static constexpr const char* ALIAS = NAME;

    uint32_t hours; // 38
    uint32_t minutes; // 3C
    uint32_t seconds; // 40
    uint32_t miliseconds; // 44
};
RED4EXT_ASSERT_SIZE(RealtimeDelay_ConditionType, 0x48);
} // namespace quest
using questRealtimeDelay_ConditionType = quest::RealtimeDelay_ConditionType;
} // namespace RED4ext

// clang-format on
