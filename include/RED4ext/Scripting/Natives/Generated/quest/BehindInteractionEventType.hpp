#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace quest {
enum class BehindInteractionEventType : int8_t
{
    Undefined = 0,
    StartedBeingBehind = 1,
    StoppedBeingBehind = 2,
    IsBehind = 3,
    IsNotBehind = 4,
};
} // namespace quest
using questBehindInteractionEventType = quest::BehindInteractionEventType;
} // namespace RED4ext

// clang-format on
