#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace curve {
enum class EInterpolationType : int8_t
{
    EIT_Constant = 0,
    EIT_Linear = 1,
    EIT_BezierQuadratic = 2,
    EIT_BezierCubic = 3,
    EIT_Hermite = 4,
};
} // namespace curve
using curveEInterpolationType = curve::EInterpolationType;
} // namespace RED4ext

// clang-format on
