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
struct PhysicsJointAngularLimitPair : physics::PhysicsJointLimitBase
{
    static constexpr const char* NAME = "physicsPhysicsJointAngularLimitPair";
    static constexpr const char* ALIAS = NAME;

    float lower; // 20
    float upper; // 24
    physics::PhysicsJointMotion twist; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
};
RED4EXT_ASSERT_SIZE(PhysicsJointAngularLimitPair, 0x30);
} // namespace physics
using physicsPhysicsJointAngularLimitPair = physics::PhysicsJointAngularLimitPair;
} // namespace RED4ext

// clang-format on
