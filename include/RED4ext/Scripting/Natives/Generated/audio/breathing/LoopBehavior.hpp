#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio::breathing {
enum class LoopBehavior : int8_t
{
    TimedBreathing = 0,
    BreathEvery2ndStep = 1,
    BreathEveryStep = 2,
    HoldingBreath = 3,
};
} // namespace audio::breathing
using audiobreathingLoopBehavior = audio::breathing::LoopBehavior;
} // namespace RED4ext

// clang-format on
