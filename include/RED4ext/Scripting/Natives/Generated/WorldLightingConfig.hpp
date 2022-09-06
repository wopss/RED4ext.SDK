#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct WorldLightingConfig
{
    static constexpr const char* NAME = "WorldLightingConfig";
    static constexpr const char* ALIAS = NAME;

    float lightAttenuationClamp; // 00
};
RED4EXT_ASSERT_SIZE(WorldLightingConfig, 0x4);
} // namespace RED4ext

// clang-format on
