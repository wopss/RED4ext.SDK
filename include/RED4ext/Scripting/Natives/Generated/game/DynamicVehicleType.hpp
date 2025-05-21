#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class DynamicVehicleType : int32_t
{
    None = 0,
    Car = 1,
    AV = 2,
    RoadBlockade = 3,
    RoadBlockadeWithAV = 4,
};
} // namespace game
using gameDynamicVehicleType = game::DynamicVehicleType;
using DynamicVehicleType = game::DynamicVehicleType;
} // namespace RED4ext

// clang-format on
