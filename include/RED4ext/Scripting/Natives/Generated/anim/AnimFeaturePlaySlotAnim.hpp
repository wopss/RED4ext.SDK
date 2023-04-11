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
struct AnimFeaturePlaySlotAnim : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeaturePlaySlotAnim";
    static constexpr const char* ALIAS = "AnimFeaturePlaySlotAnim";

    CName slotName; // 40
    CName animationName; // 48
    float blendInTime; // 50
    float blendOutTime; // 54
    float speedMultiplier; // 58
    float startOffsetRelative; // 5C
    int32_t numberOfLoops; // 60
    bool playAsAdditive; // 64
    bool enableMotion; // 65
    uint8_t unk66[0x68 - 0x66]; // 66
};
RED4EXT_ASSERT_SIZE(AnimFeaturePlaySlotAnim, 0x68);
} // namespace anim
using animAnimFeaturePlaySlotAnim = anim::AnimFeaturePlaySlotAnim;
using AnimFeaturePlaySlotAnim = anim::AnimFeaturePlaySlotAnim;
} // namespace RED4ext

// clang-format on
