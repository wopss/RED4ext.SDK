#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct SSSRAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "SSSRAreaSettings";
    static constexpr const char* ALIAS = NAME;

    float depthFadeStart; // 48
    float depthFadeEnd; // 4C
};
RED4EXT_ASSERT_SIZE(SSSRAreaSettings, 0x50);
} // namespace RED4ext

// clang-format on
