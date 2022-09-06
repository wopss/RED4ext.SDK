#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ContactShadowsConfig.hpp>
#include <RED4ext/Scripting/Natives/Generated/FoliageShadowConfig.hpp>

namespace RED4ext
{
struct WorldShadowConfig
{
    static constexpr const char* NAME = "WorldShadowConfig";
    static constexpr const char* ALIAS = NAME;

    ContactShadowsConfig contactShadows; // 00
    uint32_t distantShadowsNumLevels; // 14
    float distantShadowsBaseLevelRadius; // 18
    FoliageShadowConfig foliageShadowConfig; // 1C
};
RED4EXT_ASSERT_SIZE(WorldShadowConfig, 0x28);
} // namespace RED4ext

// clang-format on
