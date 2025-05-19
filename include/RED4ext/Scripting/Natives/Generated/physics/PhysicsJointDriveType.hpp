#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics {
enum class PhysicsJointDriveType : int8_t
{
    AxisX = 0,
    AxisY = 1,
    AxisZ = 2,
    Swing = 3,
    Twist = 4,
    SLERP = 5,
};
} // namespace physics
using physicsPhysicsJointDriveType = physics::PhysicsJointDriveType;
} // namespace RED4ext

// clang-format on
