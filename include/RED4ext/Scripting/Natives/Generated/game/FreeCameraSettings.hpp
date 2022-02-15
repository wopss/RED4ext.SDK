#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/FreeCameraLightSettings.hpp>

namespace RED4ext
{
namespace game { 
struct FreeCameraSettings
{
    static constexpr const char* NAME = "gameFreeCameraSettings";
    static constexpr const char* ALIAS = NAME;

    float movPrecision; // 00
    float rotPrecision; // 04
    float fov; // 08
    float dofIntensity; // 0C
    float dofNearBlur; // 10
    float dofNearFocus; // 14
    float dofFarBlur; // 18
    float dofFarFocus; // 1C
    int32_t iso; // 20
    float shutter; // 24
    float aperture; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
    DynArray<game::FreeCameraLightSettings> lights; // 30
};
RED4EXT_ASSERT_SIZE(FreeCameraSettings, 0x40);
} // namespace game
} // namespace RED4ext
