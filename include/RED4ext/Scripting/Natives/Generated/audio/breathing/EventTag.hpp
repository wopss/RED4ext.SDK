#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio::breathing {
enum class EventTag : int8_t
{
    Walk = 0,
    Jog = 1,
    Run = 2,
    Sneak = 3,
    Cloth = 4,
    FootStepRegular = 5,
    FootStepSprint = 6,
    LandingRegular = 7,
    LandingHard = 8,
    LandingVeryHard = 9,
    Climb = 10,
    Jump = 11,
    Player = 12,
    Stop = 13,
    Drop_Body = 14,
    Pick_Up_Body = 15,
    Standing_Event = 16,
};
} // namespace audio::breathing
using audiobreathingEventTag = audio::breathing::EventTag;
} // namespace RED4ext

// clang-format on
