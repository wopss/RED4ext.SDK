#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointLimitBase.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointMotion.hpp>

namespace RED4ext
{
namespace physics { 
struct PhysicsJointLinearLimit : physics::PhysicsJointLimitBase
{
    static constexpr const char* NAME = "physicsPhysicsJointLinearLimit";
    static constexpr const char* ALIAS = NAME;

    float value; // 20
    physics::PhysicsJointMotion x; // 24
    physics::PhysicsJointMotion y; // 25
    physics::PhysicsJointMotion z; // 26
    uint8_t unk27[0x28 - 0x27]; // 27
};
RED4EXT_ASSERT_SIZE(PhysicsJointLinearLimit, 0x28);
} // namespace physics
} // namespace RED4ext
