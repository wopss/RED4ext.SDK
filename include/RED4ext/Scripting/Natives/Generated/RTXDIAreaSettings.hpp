#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct RTXDIAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "RTXDIAreaSettings";
    static constexpr const char* ALIAS = NAME;

    float diffuseSkyScale; // 48
    float specularSkyScale; // 4C
};
RED4EXT_ASSERT_SIZE(RTXDIAreaSettings, 0x50);
} // namespace RED4ext

// clang-format on
