#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/FreeCameraLightSettings.hpp>

namespace RED4ext
{
namespace game
{
struct FreeCameraSettings
{
    static constexpr const char* NAME = "gameFreeCameraSettings";
    static constexpr const char* ALIAS = NAME;

    float movPrecision; // 00
    float rotPrecision; // 04
    float roll; // 08
    float fov; // 0C
    float dofIntensity; // 10
    float dofNearBlur; // 14
    float dofNearFocus; // 18
    float dofFarBlur; // 1C
    float dofFarFocus; // 20
    int32_t iso; // 24
    float shutter; // 28
    float aperture; // 2C
    DynArray<game::FreeCameraLightSettings> lights; // 30
};
RED4EXT_ASSERT_SIZE(FreeCameraSettings, 0x40);
} // namespace game
using gameFreeCameraSettings = game::FreeCameraSettings;
} // namespace RED4ext

// clang-format on
