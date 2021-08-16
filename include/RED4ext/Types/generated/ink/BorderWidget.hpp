#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/LeafWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct BorderWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkBorderWidget";
    static constexpr const char* ALIAS = "inkBorder";

    float thickness; // 1F0
    uint8_t unk1F4[0x200 - 0x1F4]; // 1F4
};
RED4EXT_ASSERT_SIZE(BorderWidget, 0x200);
} // namespace ink
using inkBorder = ink::BorderWidget;
} // namespace RED4ext
