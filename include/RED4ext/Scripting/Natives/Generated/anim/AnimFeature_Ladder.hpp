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
struct AnimFeature_Ladder : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_Ladder";
    static constexpr const char* ALIAS = "AnimFeature_Ladder";

    int32_t state; // 40
    int32_t transitionType; // 44
    float distanceFromTop; // 48
    bool entryFromRight; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
};
RED4EXT_ASSERT_SIZE(AnimFeature_Ladder, 0x50);
} // namespace anim
using animAnimFeature_Ladder = anim::AnimFeature_Ladder;
using AnimFeature_Ladder = anim::AnimFeature_Ladder;
} // namespace RED4ext

// clang-format on
