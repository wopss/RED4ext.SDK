#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct VignetteAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "VignetteAreaSettings";
    static constexpr const char* ALIAS = NAME;

    bool vignetteEnabled; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    float vignetteRadius; // 4C
    float vignetteExp; // 50
    Color vignetteColor; // 54
};
RED4EXT_ASSERT_SIZE(VignetteAreaSettings, 0x58);
} // namespace RED4ext

// clang-format on
