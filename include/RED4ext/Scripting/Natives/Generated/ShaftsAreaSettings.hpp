#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct ShaftsAreaSettings
{
    static constexpr const char* NAME = "ShaftsAreaSettings";
    static constexpr const char* ALIAS = NAME;

    uint32_t shaftsLevelIndex; // 00
    float shaftsIntensity; // 04
    float shaftsThresholdsScale; // 08
};
RED4EXT_ASSERT_SIZE(ShaftsAreaSettings, 0xC);
} // namespace RED4ext

// clang-format on
