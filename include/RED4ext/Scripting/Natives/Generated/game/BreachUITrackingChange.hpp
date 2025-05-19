#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class BreachUITrackingChange : int32_t
{
    NoChange = 0,
    StartedNew = 1,
    StoppedOnTimeout = 2,
    StoppedOnTargetDeath = 3,
    StoppedOnDestroyed = 6,
    StoppedForced = 7,
    Hidden = 8,
    Unhidden = 9,
};
} // namespace game
using gameBreachUITrackingChange = game::BreachUITrackingChange;
} // namespace RED4ext

// clang-format on
