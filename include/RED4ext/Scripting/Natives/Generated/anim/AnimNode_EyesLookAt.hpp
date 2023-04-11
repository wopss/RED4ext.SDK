#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/Axis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_EyesLookAt : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_EyesLookAt";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink weightALink; // 60
    anim::FloatLink weightBLink; // 80
    anim::FloatLink transitionWeightLink; // A0
    anim::VectorLink targetALink; // C0
    anim::VectorLink targetBLink; // E0
    uint8_t unk100[0x108 - 0x100]; // 100
    anim::TransformIndex leftEye; // 108
    anim::TransformIndex rightEye; // 120
    anim::TransformIndex head; // 138
    anim::Axis forwardDirection; // 150
    uint8_t unk154[0x158 - 0x154]; // 154
};
RED4EXT_ASSERT_SIZE(AnimNode_EyesLookAt, 0x158);
} // namespace anim
using animAnimNode_EyesLookAt = anim::AnimNode_EyesLookAt;
} // namespace RED4ext

// clang-format on
