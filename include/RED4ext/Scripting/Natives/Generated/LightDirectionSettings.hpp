#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GlobalLightingTrajectoryOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct LightDirectionSettings : IAreaSettings
{
    static constexpr const char* NAME = "LightDirectionSettings";
    static constexpr const char* ALIAS = NAME;

    GlobalLightingTrajectoryOverride direction; // 48
};
RED4EXT_ASSERT_SIZE(LightDirectionSettings, 0x68);
} // namespace RED4ext

// clang-format on
