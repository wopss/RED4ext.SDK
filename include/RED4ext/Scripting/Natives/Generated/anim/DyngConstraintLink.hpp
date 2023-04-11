#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/DyngConstraintLinkType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IDyngConstraint.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct DyngConstraintLink : anim::IDyngConstraint
{
    static constexpr const char* NAME = "animDyngConstraintLink";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex bone1; // 38
    anim::TransformIndex bone2; // 50
    anim::DyngConstraintLinkType linkType; // 68
    float lengthLowerBoundRatioPercentage; // 6C
    float lengthUpperBoundRatioPercentage; // 70
    Vector3 lookAtAxis; // 74
    uint8_t unk80[0xB0 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(DyngConstraintLink, 0xB0);
} // namespace anim
using animDyngConstraintLink = anim::DyngConstraintLink;
} // namespace RED4ext

// clang-format on
