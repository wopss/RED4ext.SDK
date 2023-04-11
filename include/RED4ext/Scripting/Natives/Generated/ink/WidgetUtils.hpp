#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink
{
struct WidgetUtils
{
    static constexpr const char* NAME = "inkWidgetUtils";
    static constexpr const char* ALIAS = "WidgetUtils";

    uint8_t unk00[0x1 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(WidgetUtils, 0x1);
} // namespace ink
using inkWidgetUtils = ink::WidgetUtils;
using WidgetUtils = ink::WidgetUtils;
} // namespace RED4ext

// clang-format on
