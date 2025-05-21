#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace quest {
enum class TriggerConditionType : int8_t
{
    Undefined = 0,
    Entered = 1,
    Exited = 2,
    IsInside = 3,
    IsOutside = 4,
    AllInsideMP = 5,
    AllOutsideMP = 6,
};
} // namespace quest
using questTriggerConditionType = quest::TriggerConditionType;
} // namespace RED4ext

// clang-format on
