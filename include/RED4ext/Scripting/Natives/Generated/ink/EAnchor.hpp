#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class EAnchor : int8_t
{
    TopLeft = 0,
    TopCenter = 1,
    TopRight = 2,
    CenterLeft = 3,
    Centered = 4,
    CenterRight = 5,
    BottomLeft = 6,
    BottomCenter = 7,
    BottomRight = 8,
    TopFillHorizontaly = 9,
    CenterFillHorizontaly = 10,
    BottomFillHorizontaly = 11,
    LeftFillVerticaly = 12,
    CenterFillVerticaly = 13,
    RightFillVerticaly = 14,
    Fill = 15,
};
} // namespace ink
using inkEAnchor = ink::EAnchor;
} // namespace RED4ext

// clang-format on
