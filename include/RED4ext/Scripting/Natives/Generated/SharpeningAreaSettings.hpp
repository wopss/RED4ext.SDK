#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct SharpeningAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "SharpeningAreaSettings";
    static constexpr const char* ALIAS = NAME;

    float sharpeningStrength; // 48
    float sharpeningStrengthWhenUpsaling; // 4C
    float sharpeningStrengthUpscalingTreshold; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(SharpeningAreaSettings, 0x58);
} // namespace RED4ext

// clang-format on
