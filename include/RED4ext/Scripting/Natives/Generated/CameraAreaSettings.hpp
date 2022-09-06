#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct CameraAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "CameraAreaSettings";
    static constexpr const char* ALIAS = NAME;

    float cameraNearPlane; // 48
    float cameraFarPlane; // 4C
    bool automated; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    uint32_t ISO; // 54
    float shutterTime; // 58
    float fStop; // 5C
};
RED4EXT_ASSERT_SIZE(CameraAreaSettings, 0x60);
} // namespace RED4ext

// clang-format on
