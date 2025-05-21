#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace vehicle {
enum class CameraPerspective : int8_t
{
    FPP = 0,
    TPPClose = 1,
    TPPMedium = 2,
    TPPFar = 3,
    DriverCombatClose = 4,
    DriverCombatMedium = 5,
    DriverCombatFar = 6,
};
} // namespace vehicle
using vehicleCameraPerspective = vehicle::CameraPerspective;
} // namespace RED4ext

// clang-format on
