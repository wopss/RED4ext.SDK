#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_MotionAdjuster : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_MotionAdjuster";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x88 - 0x48]; // 48
    anim::PoseLink inputNode; // 88
    anim::VectorLink targetPosition; // A0
    anim::VectorLink targetDirection; // C0
    anim::FloatLink totalTimeToAdjust; // E0
    Vector4 forwardVector; // 100
};
RED4EXT_ASSERT_SIZE(AnimNode_MotionAdjuster, 0x110);
} // namespace anim
using animAnimNode_MotionAdjuster = anim::AnimNode_MotionAdjuster;
} // namespace RED4ext

// clang-format on
