#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimFeature_Cover : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_Cover";
    static constexpr const char* ALIAS = "AnimFeature_Cover";

    Vector4 coverPosition; // 40
    Vector4 coverDirection; // 50
    int32_t coverState; // 60
    float coverAngleToAction; // 64
    int32_t coverAction; // 68
    int32_t stance; // 6C
    int32_t behavior; // 70
    float behaviorTime_PreAction; // 74
    float behaviorTime_Action; // 78
    float behaviorTime_PostAction; // 7C
};
RED4EXT_ASSERT_SIZE(AnimFeature_Cover, 0x80);
} // namespace anim
using animAnimFeature_Cover = anim::AnimFeature_Cover;
using AnimFeature_Cover = anim::AnimFeature_Cover;
} // namespace RED4ext

// clang-format on
