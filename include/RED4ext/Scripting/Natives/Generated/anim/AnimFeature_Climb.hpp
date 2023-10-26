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
struct __declspec(align(0x10)) AnimFeature_Climb : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_Climb";
    static constexpr const char* ALIAS = "AnimFeature_Climb";

    Vector4 verticalPosition; // 40
    Vector4 horizontalPosition; // 50
    Vector4 frontEdgePosition; // 60
    Vector4 frontEdgeNormal; // 70
    float toVerticalTime; // 80
    float verticalToHorizontalTime; // 84
    float yawAngle; // 88
    float stateLength; // 8C
    int32_t climbType; // 90
    int32_t state; // 94
    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(AnimFeature_Climb, 0xA0);
} // namespace anim
using animAnimFeature_Climb = anim::AnimFeature_Climb;
using AnimFeature_Climb = anim::AnimFeature_Climb;
} // namespace RED4ext

// clang-format on
