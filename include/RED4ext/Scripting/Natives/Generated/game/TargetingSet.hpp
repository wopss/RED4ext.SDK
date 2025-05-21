#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class TargetingSet : int32_t
{
    Visible = 0,
    ClearlyVisible = 1,
    Frustum = 2,
    Complete = 3,
    None = 4,
};
} // namespace game
using gameTargetingSet = game::TargetingSet;
using TargetingSet = game::TargetingSet;
} // namespace RED4ext

// clang-format on
