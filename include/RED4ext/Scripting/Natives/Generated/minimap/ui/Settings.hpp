#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace minimap::ui
{
struct Settings
{
    static constexpr const char* NAME = "minimapuiSettings";
    static constexpr const char* ALIAS = NAME;

    float showTime; // 00
    float hideTime; // 04
};
RED4EXT_ASSERT_SIZE(Settings, 0x8);
} // namespace minimap::ui
using minimapuiSettings = minimap::ui::Settings;
} // namespace RED4ext

// clang-format on
