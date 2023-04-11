#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct MotionConstrainedTierDataParams
{
    static constexpr const char* NAME = "gameMotionConstrainedTierDataParams";
    static constexpr const char* ALIAS = "MotionConstrainedTierDataParams";

    NodeRef splineRef; // 00
    float adjustingSpeed; // 08
    float adjustingDuration; // 0C
    float travellingSpeed; // 10
    float travellingDuration; // 14
    int32_t notificationBackwardIndex; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(MotionConstrainedTierDataParams, 0x20);
} // namespace game
using gameMotionConstrainedTierDataParams = game::MotionConstrainedTierDataParams;
using MotionConstrainedTierDataParams = game::MotionConstrainedTierDataParams;
} // namespace RED4ext

// clang-format on
