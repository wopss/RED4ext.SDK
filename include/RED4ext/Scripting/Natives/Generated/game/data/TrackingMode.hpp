#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class TrackingMode : int32_t
{
    BeliefPosition = 0,
    LastKnownPosition = 1,
    RealPosition = 2,
    SharedBeliefPosition = 3,
    SharedLastKnownPosition = 4,
    Count = 5,
    Invalid = 6,
};
} // namespace game::data
using gamedataTrackingMode = game::data::TrackingMode;
} // namespace RED4ext

// clang-format on
