#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct DistantLightsAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "DistantLightsAreaSettings";
    static constexpr const char* ALIAS = NAME;

    float distantLightStartDistance; // 48
    float distantLightFadeDistance; // 4C
};
RED4EXT_ASSERT_SIZE(DistantLightsAreaSettings, 0x50);
} // namespace RED4ext

// clang-format on
