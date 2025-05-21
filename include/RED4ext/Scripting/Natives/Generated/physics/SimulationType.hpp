#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics {
enum class SimulationType : int8_t
{
    Static = 0,
    Dynamic = 1,
    Kinematic = 2,
    Invalid = 3,
};
} // namespace physics
using physicsSimulationType = physics::SimulationType;
} // namespace RED4ext

// clang-format on
