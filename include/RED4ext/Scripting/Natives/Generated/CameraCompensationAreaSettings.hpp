#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct CameraCompensationAreaSettings
{
    static constexpr const char* NAME = "CameraCompensationAreaSettings";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x48 - 0x0]; // 0
    bool automated; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    uint32_t ISO; // 4C
    float shutterTime; // 50
    float fStop; // 54
};
RED4EXT_ASSERT_SIZE(CameraCompensationAreaSettings, 0x58);
} // namespace RED4ext

// clang-format on
