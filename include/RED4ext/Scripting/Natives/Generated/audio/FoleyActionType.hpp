#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class FoleyActionType : int32_t
{
    FastHeavy = 0,
    FastMedium = 1,
    FastLight = 2,
    NormalHeavy = 3,
    NormalMedium = 4,
    NormalLight = 5,
    SlowHeavy = 6,
    SlowMedium = 7,
    SlowLight = 8,
    Walk = 9,
    Run = 10,
};
} // namespace audio
using audioFoleyActionType = audio::FoleyActionType;
} // namespace RED4ext

// clang-format on
