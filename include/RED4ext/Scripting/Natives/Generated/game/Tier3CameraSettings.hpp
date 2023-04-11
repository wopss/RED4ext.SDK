#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct Tier3CameraSettings
{
    static constexpr const char* NAME = "gameTier3CameraSettings";
    static constexpr const char* ALIAS = "Tier3CameraSettings";

    float yawLeftLimit; // 00
    float yawRightLimit; // 04
    float pitchTopLimit; // 08
    float pitchBottomLimit; // 0C
    float pitchSpeedMultiplier; // 10
    float yawSpeedMultiplier; // 14
};
RED4EXT_ASSERT_SIZE(Tier3CameraSettings, 0x18);
} // namespace game
using gameTier3CameraSettings = game::Tier3CameraSettings;
using Tier3CameraSettings = game::Tier3CameraSettings;
} // namespace RED4ext

// clang-format on
