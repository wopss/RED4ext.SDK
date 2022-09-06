#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavmeshImpact.hpp>

namespace RED4ext
{
struct NavGenNavigationSetting
{
    static constexpr const char* NAME = "NavGenNavigationSetting";
    static constexpr const char* ALIAS = NAME;

    NavGenNavmeshImpact navmeshImpact; // 00
};
RED4EXT_ASSERT_SIZE(NavGenNavigationSetting, 0x2);
} // namespace RED4ext

// clang-format on
