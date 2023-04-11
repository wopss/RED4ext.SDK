#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/DangleConstraint_SimulationSingleBone.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PendulumConstraintType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PendulumProjectionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct DangleConstraint_SimulationPendulum : anim::DangleConstraint_SimulationSingleBone
{
    static constexpr const char* NAME = "animDangleConstraint_SimulationPendulum";
    static constexpr const char* ALIAS = NAME;

    float simulationFps; // 90
    anim::PendulumConstraintType constraintType; // 94
    float halfOfMaxApertureAngle; // 98
    Vector3 constraintOrientation; // 9C
    float mass; // A8
    float gravityWS; // AC
    float damping; // B0
    float pullForceFactor; // B4
    Vector3 pullForceDirectionLS; // B8
    Vector3 externalForceWS; // C4
    anim::VectorLink externalForceWsLink; // D0
    anim::PendulumProjectionType projectionType; // F0
    float collisionCapsuleRadius; // F4
    float collisionCapsuleHeightExtent; // F8
    float cosOfHalfXAngle; // FC
    float cosOfHalfYAngle; // 100
    float cosOfHalfZAngle; // 104
    float sinOfHalfXAngle; // 108
    float sinOfHalfYAngle; // 10C
    float sinOfHalfZAngle; // 110
    float cosOfHalfMaxApertureAngle; // 114
    float cosOfHalfOfHalfMaxApertureAngle; // 118
    float sinOfHalfOfHalfMaxApertureAngle; // 11C
    float invertedMass; // 120
    uint8_t unk124[0x188 - 0x124]; // 124
};
RED4EXT_ASSERT_SIZE(DangleConstraint_SimulationPendulum, 0x188);
} // namespace anim
using animDangleConstraint_SimulationPendulum = anim::DangleConstraint_SimulationPendulum;
} // namespace RED4ext

// clang-format on
