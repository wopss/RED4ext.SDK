#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) PhysicsJointDriveVelocity
{
    static constexpr const char* NAME = "physicsPhysicsJointDriveVelocity";
    static constexpr const char* ALIAS = NAME;

    Vector4 linearVelocity; // 00
    Vector4 angularVelocity; // 10
};
RED4EXT_ASSERT_SIZE(PhysicsJointDriveVelocity, 0x20);
} // namespace physics
using physicsPhysicsJointDriveVelocity = physics::PhysicsJointDriveVelocity;
} // namespace RED4ext

// clang-format on
