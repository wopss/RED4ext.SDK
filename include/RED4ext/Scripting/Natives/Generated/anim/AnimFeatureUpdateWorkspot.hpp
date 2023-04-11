#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeatureUpdateWorkspot : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeatureUpdateWorkspot";
    static constexpr const char* ALIAS = NAME;

    CName animName; // 40
    int32_t recordID; // 48
    int32_t updateCounter; // 4C
    float animBlendTime; // 50
    float forcedBlendIn; // 54
    float forceAnimTime; // 58
    float timeScale; // 5C
    bool isPaused; // 60
    bool isExitAnim; // 61
    bool enableMotion; // 62
    bool isLooped; // 63
    bool isActive; // 64
    bool isAnimValid; // 65
    bool globalBlendIn; // 66
    uint8_t unk67[0x68 - 0x67]; // 67
    int32_t boolsAsFlags; // 68
    int32_t slotNameHash; // 6C
    float facialKeyWeight; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    CName facialIdleAnimation; // 78
    CName facialIdleKeyAnimation; // 80
    float globalBlendDuration; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    double animationStartTime; // 90
};
RED4EXT_ASSERT_SIZE(AnimFeatureUpdateWorkspot, 0x98);
} // namespace anim
using animAnimFeatureUpdateWorkspot = anim::AnimFeatureUpdateWorkspot;
} // namespace RED4ext

// clang-format on
