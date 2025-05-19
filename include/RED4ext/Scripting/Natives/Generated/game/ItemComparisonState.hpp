#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class ItemComparisonState : int32_t
{
    Default = 0,
    NoChange = 1,
    Better = 2,
    Worse = 3,
};
} // namespace game
using gameItemComparisonState = game::ItemComparisonState;
using ItemComparisonState = game::ItemComparisonState;
} // namespace RED4ext

// clang-format on
