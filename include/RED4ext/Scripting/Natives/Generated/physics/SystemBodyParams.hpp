#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) SystemBodyParams
{
    static constexpr const char* NAME = "physicsSystemBodyParams";
    static constexpr const char* ALIAS = NAME;

    physics::SimulationType simulationType; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    float mass; // 08
    Vector3 inertia; // 0C
    uint8_t unk18[0x20 - 0x18]; // 18
    Transform comOffset; // 20
    float linearDamping; // 40
    float angularDamping; // 44
    uint32_t solverIterationsCountPosition; // 48
    uint32_t solverIterationsCountVelocity; // 4C
    float maxDepenetrationVelocity; // 50
    float maxAngularVelocity; // 54
    float maxContactImpulse; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(SystemBodyParams, 0x60);
} // namespace physics
using physicsSystemBodyParams = physics::SystemBodyParams;
} // namespace RED4ext

// clang-format on
