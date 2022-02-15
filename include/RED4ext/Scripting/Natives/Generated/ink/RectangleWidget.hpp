#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BaseShapeWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct RectangleWidget : ink::BaseShapeWidget
{
    static constexpr const char* NAME = "inkRectangleWidget";
    static constexpr const char* ALIAS = "inkRectangle";

    uint8_t unk230[0x240 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(RectangleWidget, 0x240);
} // namespace ink
using inkRectangle = ink::RectangleWidget;
} // namespace RED4ext
