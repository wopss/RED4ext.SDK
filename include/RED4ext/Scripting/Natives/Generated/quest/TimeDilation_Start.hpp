#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TimeDilation_Operation.hpp>

namespace RED4ext
{
namespace quest
{
struct TimeDilation_Start : quest::TimeDilation_Operation
{
    static constexpr const char* NAME = "questTimeDilation_Start";
    static constexpr const char* ALIAS = NAME;

    float dilation; // 30
    float duration; // 34
    CName easeInCurve; // 38
    CName easeOutCurve; // 40
};
RED4EXT_ASSERT_SIZE(TimeDilation_Start, 0x48);
} // namespace quest
using questTimeDilation_Start = quest::TimeDilation_Start;
} // namespace RED4ext

// clang-format on
