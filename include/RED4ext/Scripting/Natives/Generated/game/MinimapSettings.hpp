#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Range.hpp>

namespace RED4ext
{
namespace game
{
struct MinimapSettings : IScriptable
{
    static constexpr const char* NAME = "gameMinimapSettings";
    static constexpr const char* ALIAS = "MinimapSettings";

    game::Range globalVisionRadiusBounds; // 40
    game::Range visionRadiusVehicle; // 48
    game::Range visionRadiusCombat; // 50
    game::Range visionRadiusQuestArea; // 58
    game::Range visionRadiusSecurityArea; // 60
    game::Range visionRadiusInterior; // 68
    game::Range visionRadiusExterior; // 70
    game::Range speedBoundsSprint; // 78
    game::Range speedBoundsVehicle; // 80
    float smoothingStrengthOnZoomIn; // 88
    float smoothingStrengthOnZoomOut; // 8C
    float playerMarkerTransitionSpeedOnVehicleMount; // 90
    float playerMarkerTransitionSpeedOnVehicleUnmount; // 94
    bool visionRadiusLocked; // 98
    bool dynamicVisionRadiusEnabled; // 99
    bool smoothingEnabled; // 9A
    uint8_t unk9B[0xA0 - 0x9B]; // 9B
};
RED4EXT_ASSERT_SIZE(MinimapSettings, 0xA0);
} // namespace game
using gameMinimapSettings = game::MinimapSettings;
using MinimapSettings = game::MinimapSettings;
} // namespace RED4ext

// clang-format on
