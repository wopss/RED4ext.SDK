#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TransformRotator : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_TransformRotator";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex transform; // 60
    Vector3 axis; // 78
    float valueScale; // 84
    bool clamp; // 88
    uint8_t unk89[0x8C - 0x89]; // 89
    float angleMin; // 8C
    float angleMax; // 90
    uint8_t unk94[0xA8 - 0x94]; // 94
    anim::FloatLink angleValueNode; // A8
    anim::FloatLink angleSpeedNode; // C8
};
RED4EXT_ASSERT_SIZE(AnimNode_TransformRotator, 0xE8);
} // namespace anim
using animAnimNode_TransformRotator = anim::AnimNode_TransformRotator;
} // namespace RED4ext

// clang-format on
