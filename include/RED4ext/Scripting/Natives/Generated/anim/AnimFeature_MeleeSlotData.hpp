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
struct AnimFeature_MeleeSlotData : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_MeleeSlotData";
    static constexpr const char* ALIAS = "AnimFeature_MeleeSlotData";

    int32_t attackType; // 40
    int32_t comboNumber; // 44
    float startupDuration; // 48
    float activeDuration; // 4C
    float recoverDuration; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(AnimFeature_MeleeSlotData, 0x58);
} // namespace anim
using animAnimFeature_MeleeSlotData = anim::AnimFeature_MeleeSlotData;
using AnimFeature_MeleeSlotData = anim::AnimFeature_MeleeSlotData;
} // namespace RED4ext

// clang-format on
