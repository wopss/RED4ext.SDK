#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SmoothFloatClamp.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_RotationLimit : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_RotationLimit";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex constrainedTransform; // 60
    anim::SmoothFloatClamp limitOnX; // 78
    anim::SmoothFloatClamp limitOnY; // B8
    anim::SmoothFloatClamp limitOnZ; // F8
    bool useEyesLookAtBlendWeight; // 138
    uint8_t unk139[0x140 - 0x139]; // 139
    anim::FloatLink weightLink; // 140
};
RED4EXT_ASSERT_SIZE(AnimNode_RotationLimit, 0x160);
} // namespace anim
using animAnimNode_RotationLimit = anim::AnimNode_RotationLimit;
} // namespace RED4ext

// clang-format on
