#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct Range
{
    static constexpr const char* NAME = "gameRange";
    static constexpr const char* ALIAS = "Range";

    float minValue; // 00
    float maxValue; // 04
};
RED4EXT_ASSERT_SIZE(Range, 0x8);
} // namespace game
using gameRange = game::Range;
using Range = game::Range;
} // namespace RED4ext

// clang-format on
