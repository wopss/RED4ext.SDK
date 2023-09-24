#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_LookAtPose360 : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_LookAtPose360";
    static constexpr const char* ALIAS = NAME;

    CName animation; // 48
    float speedInDegreesPerSecond; // 50
    float durationCut; // 54
    CName animEndEventName; // 58
    uint8_t unk60[0xB0 - 0x60]; // 60
    anim::FloatLink targetAngleOffsetNode; // B0
    anim::FloatLink angleOffsetNode; // D0
    anim::FloatLink weightNode; // F0
};
RED4EXT_ASSERT_SIZE(AnimNode_LookAtPose360, 0x110);
} // namespace anim
using animAnimNode_LookAtPose360 = anim::AnimNode_LookAtPose360;
} // namespace RED4ext

// clang-format on
