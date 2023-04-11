#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeatureWorkspotInertializationAnim : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeatureWorkspotInertializationAnim";
    static constexpr const char* ALIAS = "AnimFeatureWorkspotInertializationAnim";

    float duration; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AnimFeatureWorkspotInertializationAnim, 0x48);
} // namespace anim
using animAnimFeatureWorkspotInertializationAnim = anim::AnimFeatureWorkspotInertializationAnim;
using AnimFeatureWorkspotInertializationAnim = anim::AnimFeatureWorkspotInertializationAnim;
} // namespace RED4ext

// clang-format on
