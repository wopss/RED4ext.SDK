#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtStateMachineSettings
{
    static constexpr const char* NAME = "animLookAtStateMachineSettings";
    static constexpr const char* ALIAS = "LookAtStateMachineSettings";

    CName partName; // 00
    CName partAlias; // 08
    CName sphereAttachmentBone; // 10
    float sphereRadius; // 18
    float followingSpeedFactor; // 1C
    CurveData<float> followingSpeedByAngleCurve; // 20
    CName enableFloatTrack; // 58
    CName eyesOverrideFloatTrack; // 60
    float transitionSpeedMultiplier; // 68
    float blendWeightPowFactor; // 6C
    CName coneLimitReached; // 70
    bool allowToBlendBehindBack; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(LookAtStateMachineSettings, 0x80);
} // namespace anim
using animLookAtStateMachineSettings = anim::LookAtStateMachineSettings;
using LookAtStateMachineSettings = anim::LookAtStateMachineSettings;
} // namespace RED4ext

// clang-format on
