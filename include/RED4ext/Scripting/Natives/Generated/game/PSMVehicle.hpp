#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class PSMVehicle : int32_t
{
    Any = -1,
    Default = 0,
    Driving = 1,
    Combat = 2,
    Passenger = 3,
    Transition = 4,
    Turret = 5,
    DriverCombat = 6,
    Scene = 7,
};
} // namespace game
using gamePSMVehicle = game::PSMVehicle;
} // namespace RED4ext

// clang-format on
