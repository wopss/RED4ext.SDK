#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/BaseShapeWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct CircleWidget : ink::BaseShapeWidget
{
    static constexpr const char* NAME = "inkCircleWidget";
    static constexpr const char* ALIAS = "inkCircle";

    uint8_t unk220[0x224 - 0x220]; // 220
    uint32_t segmentsNumber; // 224
    uint8_t unk228[0x230 - 0x228]; // 228
};
RED4EXT_ASSERT_SIZE(CircleWidget, 0x230);
} // namespace ink
using inkCircle = ink::CircleWidget;
} // namespace RED4ext
