#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct ActionAnimDatabase_AnimationData
{
    static constexpr const char* NAME = "animActionAnimDatabase_AnimationData";
    static constexpr const char* ALIAS = NAME;

    CName animationName; // 00
    CName fallbackAnimationName; // 08
    CName streamingContext; // 10
    float inTransitionDuration; // 18
    float outTransitionDuration; // 1C
    bool inCanRequestInertialization; // 20
    bool outCanRequestInertialization; // 21
    uint8_t unk22[0x28 - 0x22]; // 22
};
RED4EXT_ASSERT_SIZE(ActionAnimDatabase_AnimationData, 0x28);
} // namespace anim
using animActionAnimDatabase_AnimationData = anim::ActionAnimDatabase_AnimationData;
} // namespace RED4ext

// clang-format on
