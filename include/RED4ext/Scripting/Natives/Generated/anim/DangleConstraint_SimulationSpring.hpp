#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/DangleConstraint_SimulationSingleBone.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SpringProjectionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct DangleConstraint_SimulationSpring : anim::DangleConstraint_SimulationSingleBone
{
    static constexpr const char* NAME = "animDangleConstraint_SimulationSpring";
    static constexpr const char* ALIAS = NAME;

    float simulationFps; // 90
    float constraintSphereRadius; // 94
    float constraintScale1; // 98
    float constraintScale2; // 9C
    Vector2 constraintOrientation; // A0
    float mass; // A8
    float gravityWS; // AC
    float damping; // B0
    float pullForceFactor; // B4
    Vector3 pullForceOriginLS; // B8
    Vector3 externalForceWS; // C4
    anim::VectorLink externalForceWsLink; // D0
    anim::SpringProjectionType projectionType; // F0
    float collisionSphereRadius; // F4
    float cosOfHalfXAngle; // F8
    float cosOfHalfYAngle; // FC
    float sinOfHalfXAngle; // 100
    float sinOfHalfYAngle; // 104
    float invertedMass; // 108
    uint8_t unk10C[0x170 - 0x10C]; // 10C
};
RED4EXT_ASSERT_SIZE(DangleConstraint_SimulationSpring, 0x170);
} // namespace anim
using animDangleConstraint_SimulationSpring = anim::DangleConstraint_SimulationSpring;
} // namespace RED4ext

// clang-format on
