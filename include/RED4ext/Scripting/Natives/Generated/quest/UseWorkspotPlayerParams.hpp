#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Tier3CameraSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CameraParallaxSpace.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/UseWorkspotTier.hpp>

namespace RED4ext
{
namespace quest
{
struct UseWorkspotPlayerParams
{
    static constexpr const char* NAME = "questUseWorkspotPlayerParams";
    static constexpr const char* ALIAS = NAME;

    quest::UseWorkspotTier tier; // 00
    game::Tier3CameraSettings cameraSettings; // 04
    bool emptyHands; // 1C
    bool cameraUseTrajectorySpace; // 1D
    bool applyCameraParams; // 1E
    uint8_t unk1F[0x20 - 0x1F]; // 1F
    float vehicleProceduralCameraWeight; // 20
    float parallaxWeight; // 24
    quest::CameraParallaxSpace parallaxSpace; // 28
};
RED4EXT_ASSERT_SIZE(UseWorkspotPlayerParams, 0x2C);
} // namespace quest
using questUseWorkspotPlayerParams = quest::UseWorkspotPlayerParams;
} // namespace RED4ext

// clang-format on
