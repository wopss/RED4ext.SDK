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
struct FacialEmotionTransitionEditData
{
    static constexpr const char* NAME = "animFacialEmotionTransitionEditData";
    static constexpr const char* ALIAS = NAME;

    CName toIdleMale; // 00
    CName facialKeyMale; // 08
    CName toIdleFemale; // 10
    CName facialKeyFemale; // 18
    CName customTransitionAnim; // 20
    anim::FacialEmotionTransitionType transitionType; // 28
    float toIdleWeight; // 2C
    float toIdleNeckWeight; // 30
    float facialKeyWeight; // 34
};
RED4EXT_ASSERT_SIZE(FacialEmotionTransitionEditData, 0x38);
} // namespace anim
using animFacialEmotionTransitionEditData = anim::FacialEmotionTransitionEditData;
} // namespace RED4ext

// clang-format on
