#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics {
enum class StateValue : int32_t
{
    Position = 1,
    Rotation = 2,
    Transform = 3,
    LinearVelocity = 4,
    AngularVelocity = 5,
    LinearSpeed = 6,
    TouchesGround = 10,
    TouchesWalls = 11,
    ImpulseAccumulator = 12,
    IsSleeping = 13,
    Mass = 16,
    Volume = 18,
    IsSimulated = 20,
    IsKinematic = 21,
    TimeDeltaOverride = 27,
    Radius = 30,
    SimulationFilter = 32,
};
} // namespace physics
using physicsStateValue = physics::StateValue;
} // namespace RED4ext

// clang-format on
