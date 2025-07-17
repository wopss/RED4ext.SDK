#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world {
enum class TrafficLanePersistentFlags : int16_t
{
    FromRoadSpline = 1,
    Bidirectional = 2,
    PatrolRoute = 4,
    Pavement = 8,
    Road = 16,
    Intersection = 32,
    NeverDeadEnd = 64,
    TrafficDisabled = 128,
    CrossWalk = 256,
    GPSOnly = 512,
    ShowDebug = 1024,
    Blockade = 2048,
    Yield = 4096,
    NoAIDriving = 8192,
    Highway = 16384,
    NoAutodrive = -32768,
};
} // namespace world
using worldTrafficLanePersistentFlags = world::TrafficLanePersistentFlags;
} // namespace RED4ext

// clang-format on
