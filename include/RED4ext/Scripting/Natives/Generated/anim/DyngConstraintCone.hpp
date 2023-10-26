#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IDyngConstraint.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PendulumConstraintType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PendulumProjectionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) DyngConstraintCone : anim::IDyngConstraint
{
    static constexpr const char* NAME = "animDyngConstraintCone";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex constrainedBone; // 38
    anim::TransformIndex coneAttachmentBone; // 50
    uint8_t unk68[0x70 - 0x68]; // 68
    QsTransform coneTransformLS; // 70
    anim::PendulumConstraintType constraintType; // A0
    float halfOfMaxApertureAngle; // A4
    anim::PendulumProjectionType projectionType; // A8
    float collisionCapsuleRadius; // AC
    float collisionCapsuleHeightExtent; // B0
    uint8_t unkB4[0xE0 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(DyngConstraintCone, 0xE0);
} // namespace anim
using animDyngConstraintCone = anim::DyngConstraintCone;
} // namespace RED4ext

// clang-format on
