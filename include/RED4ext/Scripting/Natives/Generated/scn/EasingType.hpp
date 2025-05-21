#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace scn {
enum class EasingType : int8_t
{
    Linear = 0,
    SinusoidalEaseInOut = 1,
    QuadraticEaseIn = 2,
    QuadraticEaseOut = 3,
    CubicEaseInOut = 4,
    CubicEaseIn = 5,
    CubicEaseOut = 6,
};
} // namespace scn
using scnEasingType = scn::EasingType;
} // namespace RED4ext

// clang-format on
