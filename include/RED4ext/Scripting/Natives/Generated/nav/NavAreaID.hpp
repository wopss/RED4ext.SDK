#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace nav {
enum class NavAreaID : int8_t
{
    Unwalkable = 0,
    Terrain = 1,
    Crouchable = 2,
    Regular = 3,
    Road = 4,
    Pavement = 5,
    Door = 10,
    Ladder = 11,
    Jump = 12,
    Elevator = 14,
    Stairs = 15,
    Drones = 16,
    Exploration = 17,
    CrowdWalkable = Pavement,
};
} // namespace nav
using navNavAreaID = nav::NavAreaID;
} // namespace RED4ext

// clang-format on
