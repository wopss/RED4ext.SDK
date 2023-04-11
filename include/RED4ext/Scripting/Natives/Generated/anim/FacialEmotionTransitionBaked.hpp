#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FacialEmotionTransitionType.hpp>

namespace RED4ext
{
namespace anim
{
struct FacialEmotionTransitionBaked
{
    static constexpr const char* NAME = "animFacialEmotionTransitionBaked";
    static constexpr const char* ALIAS = NAME;

    CName toIdleMale; // 00
    CName facialKey_Male; // 08
    CName toIdleFemale; // 10
    CName facialKey_Female; // 18
    CName customTransitionAnim; // 20
    anim::FacialEmotionTransitionType transitionType; // 28
    float toIdleWeight; // 2C
    float toIdleNeckWeight; // 30
    float facialKeyWeight; // 34
    float transitionDuration; // 38
    float timeScale; // 3C
};
RED4EXT_ASSERT_SIZE(FacialEmotionTransitionBaked, 0x40);
} // namespace anim
using animFacialEmotionTransitionBaked = anim::FacialEmotionTransitionBaked;
} // namespace RED4ext

// clang-format on
