#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct ActionAnimationSlideParams
{
    static constexpr const char* NAME = "gameActionAnimationSlideParams";
    static constexpr const char* ALIAS = "ActionAnimationSlideParams";

    float distance; // 00
    float directionAngle; // 04
    float finalRotationAngle; // 08
    float offsetToTarget; // 0C
    float offsetAroundTarget; // 10
    bool slideToTarget; // 14
    uint8_t unk15[0x18 - 0x15]; // 15
    float duration; // 18
    float positionSpeed; // 1C
    float rotationSpeed; // 20
    float maxSlidePositionDistance; // 24
    float maxSlideRotationAngle; // 28
    float slideStartDelay; // 2C
    bool usePositionSlide; // 30
    bool useRotationSlide; // 31
    uint8_t unk32[0x34 - 0x32]; // 32
    float maxTargetVelocity; // 34
    float zAlignmentThreshold; // 38
};
RED4EXT_ASSERT_SIZE(ActionAnimationSlideParams, 0x3C);
} // namespace game
using gameActionAnimationSlideParams = game::ActionAnimationSlideParams;
using ActionAnimationSlideParams = game::ActionAnimationSlideParams;
} // namespace RED4ext

// clang-format on
