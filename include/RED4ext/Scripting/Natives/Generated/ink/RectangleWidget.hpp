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
    static constexpr const char* ALIAS = NAME;

    uint8_t unk220[0x230 - 0x220]; // 220
};
RED4EXT_ASSERT_SIZE(RectangleWidget, 0x230);
} // namespace ink
} // namespace RED4ext
