#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class AutodriveLaneValidityResult : int32_t
{
    OnValidLane = 0,
    NotOnValidLane = 1,
    NotOnRoad = 2,
};
} // namespace game
using gameAutodriveLaneValidityResult = game::AutodriveLaneValidityResult;
} // namespace RED4ext

// clang-format on
