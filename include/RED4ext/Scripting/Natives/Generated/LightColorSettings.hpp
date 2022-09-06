#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/WorldGlobalLightParameters.hpp>

namespace RED4ext
{
struct LightColorSettings : IAreaSettings
{
    static constexpr const char* NAME = "LightColorSettings";
    static constexpr const char* ALIAS = NAME;

    world::WorldGlobalLightParameters light; // 48
};
RED4EXT_ASSERT_SIZE(LightColorSettings, 0x170);
} // namespace RED4ext

// clang-format on
