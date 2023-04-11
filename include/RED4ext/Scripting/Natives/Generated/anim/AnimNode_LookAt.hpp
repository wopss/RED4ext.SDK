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
struct AnimNode_LookAt : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_LookAt";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex transform; // 60
    anim::Axis forwardAxis; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    float limitAngle; // 80
    anim::Axis limitAxis; // 84
    bool useLimits; // 88
    uint8_t unk89[0xB0 - 0x89]; // 89
    anim::VectorLink targetNode; // B0
    anim::FloatLink weightNode; // D0
};
RED4EXT_ASSERT_SIZE(AnimNode_LookAt, 0xF0);
} // namespace anim
using animAnimNode_LookAt = anim::AnimNode_LookAt;
} // namespace RED4ext

// clang-format on
