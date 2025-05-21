#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class ESoundCurveType : int32_t
{
    Log3 = 0,
    Sine = 1,
    InversedSCurve = 3,
    Linear = 4,
    SCurve = 5,
    Exp1 = 6,
    ReciprocalOfSineCurve = 7,
    Exp3 = 8,
};
} // namespace audio
using audioESoundCurveType = audio::ESoundCurveType;
} // namespace RED4ext

// clang-format on
