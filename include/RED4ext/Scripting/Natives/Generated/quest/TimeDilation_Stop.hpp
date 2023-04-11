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
struct TimeDilation_Stop : quest::TimeDilation_Operation
{
    static constexpr const char* NAME = "questTimeDilation_Stop";
    static constexpr const char* ALIAS = NAME;

    CName easeOutCurve; // 30
};
RED4EXT_ASSERT_SIZE(TimeDilation_Stop, 0x38);
} // namespace quest
using questTimeDilation_Stop = quest::TimeDilation_Stop;
} // namespace RED4ext

// clang-format on
