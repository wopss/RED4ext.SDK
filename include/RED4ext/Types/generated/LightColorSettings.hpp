#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/IAreaSettings.hpp>
#include <RED4ext/Types/generated/world/WorldGlobalLightParameters.hpp>

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
