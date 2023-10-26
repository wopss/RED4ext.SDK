#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IDyngConstraint.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) DyngConstraintEllipsoid : anim::IDyngConstraint
{
    static constexpr const char* NAME = "animDyngConstraintEllipsoid";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex bone; // 38
    QsTransform ellipsoidTransformLS; // 50
    float constraintRadius; // 80
    float constraintScale1; // 84
    float constraintScale2; // 88
    uint8_t unk8C[0xA0 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(DyngConstraintEllipsoid, 0xA0);
} // namespace anim
using animDyngConstraintEllipsoid = anim::DyngConstraintEllipsoid;
} // namespace RED4ext

// clang-format on
