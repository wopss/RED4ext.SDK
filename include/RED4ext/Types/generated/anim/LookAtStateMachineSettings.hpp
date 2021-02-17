#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
namespace anim { 
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
};
RED4EXT_ASSERT_SIZE(LookAtStateMachineSettings, 0x78);
} // namespace anim
using LookAtStateMachineSettings = anim::LookAtStateMachineSettings;
} // namespace RED4ext
