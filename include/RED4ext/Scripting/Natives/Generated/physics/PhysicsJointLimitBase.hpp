#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace physics
{
struct PhysicsJointLimitBase
{
    static constexpr const char* NAME = "physicsPhysicsJointLimitBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    float restitution; // 08
    float bounceThreshold; // 0C
    float stiffness; // 10
    float damping; // 14
    float contactDistance; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(PhysicsJointLimitBase, 0x20);
} // namespace physics
using physicsPhysicsJointLimitBase = physics::PhysicsJointLimitBase;
} // namespace RED4ext

// clang-format on
