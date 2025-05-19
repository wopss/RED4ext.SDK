#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI {
enum class CoverExposureMethod : int32_t
{
    Standing_Step_Left = 0,
    Standing_Step_Right = 1,
    Standing_Lean_Left = 2,
    Standing_Lean_Right = 3,
    Crouching_Step_Left = 4,
    Crouching_Step_Right = 5,
    Crouching_Lean_Left = 6,
    Crouching_Lean_Right = 7,
    Lean_Over = 8,
    Stand_Up = 9,
    Standing_Blind_Left = 10,
    Standing_Blind_Right = 11,
    Crouching_Blind_Left = 12,
    Crouching_Blind_Right = 13,
    Crouching_Blind_Top = 14,
    Count = 15,
};
} // namespace AI
using AICoverExposureMethod = AI::CoverExposureMethod;
} // namespace RED4ext

// clang-format on
