#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointLimitBase.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointMotion.hpp>

namespace RED4ext
{
namespace physics
{
struct PhysicsJointLimitConePair : physics::PhysicsJointLimitBase
{
    static constexpr const char* NAME = "physicsPhysicsJointLimitConePair";
    static constexpr const char* ALIAS = NAME;

    float yAngle; // 20
    float zAngle; // 24
    physics::PhysicsJointMotion swingY; // 28
    physics::PhysicsJointMotion swingZ; // 29
    uint8_t unk2A[0x30 - 0x2A]; // 2A
};
RED4EXT_ASSERT_SIZE(PhysicsJointLimitConePair, 0x30);
} // namespace physics
using physicsPhysicsJointLimitConePair = physics::PhysicsJointLimitConePair;
} // namespace RED4ext

// clang-format on
