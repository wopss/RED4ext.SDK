#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatTrackModifier.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatTrackModifierMarkUnstable : anim::AnimNode_FloatTrackModifier
{
    static constexpr const char* NAME = "animAnimNode_FloatTrackModifierMarkUnstable";
    static constexpr const char* ALIAS = NAME;

    uint32_t requiredQualityDistanceCategory; // B8
    uint8_t unkBC[0xD0 - 0xBC]; // BC
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatTrackModifierMarkUnstable, 0xD0);
} // namespace anim
using animAnimNode_FloatTrackModifierMarkUnstable = anim::AnimNode_FloatTrackModifierMarkUnstable;
} // namespace RED4ext

// clang-format on
