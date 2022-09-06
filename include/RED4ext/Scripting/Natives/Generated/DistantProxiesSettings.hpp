#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct DistantProxiesSettings : IAreaSettings
{
    static constexpr const char* NAME = "DistantProxiesSettings";
    static constexpr const char* ALIAS = NAME;

    float distantProxiesEmissive; // 48
    float distantProxiesEmissiveHeight; // 4C
    float distantProxiesEmissivePower; // 50
    float distantProxiesBboxzBlend; // 54
};
RED4EXT_ASSERT_SIZE(DistantProxiesSettings, 0x58);
} // namespace RED4ext

// clang-format on
