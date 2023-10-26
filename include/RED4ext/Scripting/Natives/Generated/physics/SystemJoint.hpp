#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ISystemObject.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointAngularLimitPair.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointDrive.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointDriveVelocity.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointLimitConePair.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/PhysicsJointLinearLimit.hpp>

namespace RED4ext
{
namespace physics { struct PhysicalJointPin; }

namespace physics
{
struct __declspec(align(0x10)) SystemJoint : physics::ISystemObject
{
    static constexpr const char* NAME = "physicsSystemJoint";
    static constexpr const char* ALIAS = NAME;

    physics::PhysicsJointLinearLimit linearLimit; // 38
    physics::PhysicsJointAngularLimitPair twistLimit; // 60
    physics::PhysicsJointLimitConePair swingLimit; // 90
    physics::PhysicsJointDrive driveX; // C0
    physics::PhysicsJointDrive driveY; // D0
    physics::PhysicsJointDrive driveZ; // E0
    physics::PhysicsJointDrive driveSwing; // F0
    physics::PhysicsJointDrive driveTwist; // 100
    physics::PhysicsJointDrive driveSLERP; // 110
    physics::PhysicsJointDriveVelocity driveVelocity; // 120
    Matrix drivePosition; // 140
    Handle<physics::PhysicalJointPin> pinA; // 180
    Handle<physics::PhysicalJointPin> pinB; // 190
    Matrix localToWorld; // 1A0
    float breakingForce; // 1E0
    float breakingTorque; // 1E4
    float linearTolerance; // 1E8
    float angularTolerance; // 1EC
    bool projectionEnabled; // 1F0
    bool isBreakable; // 1F1
    uint8_t unk1F2[0x200 - 0x1F2]; // 1F2
};
RED4EXT_ASSERT_SIZE(SystemJoint, 0x200);
} // namespace physics
using physicsSystemJoint = physics::SystemJoint;
} // namespace RED4ext

// clang-format on
