#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace physics::cloth
{
struct __declspec(align(0x10)) RuntimeInfo
{
    static constexpr const char* NAME = "physicsclothRuntimeInfo";
    static constexpr const char* ALIAS = NAME;

    Vector3 translation; // 00
    uint8_t unk0C[0x10 - 0xC]; // C
    Quaternion rotation; // 10
    Vector3 gravity; // 20
    float damping; // 2C
    float drag; // 30
    float inertia; // 34
    float friction; // 38
    uint32_t numSolverIterations; // 3C
    float stiffnessFrequency; // 40
    float tetherStiffness; // 44
    float tetherScale; // 48
    float selfCollisionDistance; // 4C
    float selfCollisionStiffness; // 50
    float gravityScale; // 54
    float liftCoefficient; // 58
    float dragCoefficient; // 5C
    float motionConstraintStiffness; // 60
    bool enableSelfCollision; // 64
    uint8_t unk65[0x70 - 0x65]; // 65
};
RED4EXT_ASSERT_SIZE(RuntimeInfo, 0x70);
} // namespace physics::cloth
using physicsclothRuntimeInfo = physics::cloth::RuntimeInfo;
} // namespace RED4ext

// clang-format on
