#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink::anim {
enum class InterpolationType : int8_t
{
    Linear = 0,
    Quadratic = 1,
    Qubic = 2,
    Quartic = 3,
    Quintic = 4,
    Sinusoidal = 5,
    Exponential = 6,
    Elastic = 7,
    Circular = 8,
    Back = 9,
};
} // namespace ink::anim
using inkanimInterpolationType = ink::anim::InterpolationType;
} // namespace RED4ext

// clang-format on
