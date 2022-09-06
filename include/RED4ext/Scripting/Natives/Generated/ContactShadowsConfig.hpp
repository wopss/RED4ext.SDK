#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct ContactShadowsConfig
{
    static constexpr const char* NAME = "ContactShadowsConfig";
    static constexpr const char* ALIAS = NAME;

    float range; // 00
    float rangeLimit; // 04
    float screenEdgeFadeRange; // 08
    float distanceFadeLimit; // 0C
    float distanceFadeRange; // 10
};
RED4EXT_ASSERT_SIZE(ContactShadowsConfig, 0x14);
} // namespace RED4ext

// clang-format on
