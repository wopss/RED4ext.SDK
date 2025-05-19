#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace quest {
enum class ProximityProgressBarAction : int32_t
{
    Activated = 0,
    Inactivated = 1,
    Completed = 2,
    WentOutOfRange = 3,
};
} // namespace quest
using questProximityProgressBarAction = quest::ProximityProgressBarAction;
using ProximityProgressBarAction = quest::ProximityProgressBarAction;
} // namespace RED4ext

// clang-format on
