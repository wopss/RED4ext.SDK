#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct FoliageShadowConfig
{
    static constexpr const char* NAME = "FoliageShadowConfig";
    static constexpr const char* ALIAS = NAME;

    float foliageShadowCascadeGradient; // 00
    float foliageShadowCascadeFilterScale; // 04
    float foliageShadowCascadeGradientDistanceRange; // 08
};
RED4EXT_ASSERT_SIZE(FoliageShadowConfig, 0xC);
} // namespace RED4ext

// clang-format on
