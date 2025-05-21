#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class MeleeHitType : int32_t
{
    Light = 0,
    Normal = 1,
    Heavy = 2,
    Slash = 3,
    Cut = 4,
    Stab = 5,
    Finisher = 6,
    Weak = 7,
    Throw = 8,
};
} // namespace audio
using audioMeleeHitType = audio::MeleeHitType;
} // namespace RED4ext

// clang-format on
