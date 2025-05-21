#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace quest {
enum class VehicleCommandType : int8_t
{
    Move_On_Spline = 0, // Move On Spline
    Follow = 1,
    Move_To = 2, // Move To
    Racing = 3,
    Join_Traffic = 4, // Join Traffic
    Panic = 5,
    Chase = 6,
};
} // namespace quest
using questVehicleCommandType = quest::VehicleCommandType;
} // namespace RED4ext

// clang-format on
