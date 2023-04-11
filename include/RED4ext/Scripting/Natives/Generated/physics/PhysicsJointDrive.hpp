#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace physics
{
struct PhysicsJointDrive
{
    static constexpr const char* NAME = "physicsPhysicsJointDrive";
    static constexpr const char* ALIAS = NAME;

    float forceLimit; // 00
    float stiffness; // 04
    float damping; // 08
    bool isAcceleration; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
};
RED4EXT_ASSERT_SIZE(PhysicsJointDrive, 0x10);
} // namespace physics
using physicsPhysicsJointDrive = physics::PhysicsJointDrive;
} // namespace RED4ext

// clang-format on
