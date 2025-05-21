#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace text {
enum class OverflowPolicy : int8_t
{
    None = 0,
    DotsEnd = 1,
    DotsEndLastLine = 2,
    AutoScroll = 3,
    PingPongScroll = 4,
    AdjustToSize = 5,
};
} // namespace text
using textOverflowPolicy = text::OverflowPolicy;
} // namespace RED4ext

// clang-format on
