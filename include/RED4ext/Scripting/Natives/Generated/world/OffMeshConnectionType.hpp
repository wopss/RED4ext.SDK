#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world {
enum class OffMeshConnectionType : int32_t
{
    Door = 0,
    Ladder = 1,
    Floor = 2,
    Jump = 3,
    Elevator = 4,
    Drone = 5,
    Exploration = 6,
    Custom = 7,
    Blockade = 8,
};
} // namespace world
using worldOffMeshConnectionType = world::OffMeshConnectionType;
} // namespace RED4ext

// clang-format on
