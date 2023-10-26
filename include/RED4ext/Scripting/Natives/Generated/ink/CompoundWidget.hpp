#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EChildOrder.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Widget.hpp>

namespace RED4ext
{
namespace ink { struct MultiChildren; }

namespace ink
{
struct __declspec(align(0x10)) CompoundWidget : ink::Widget
{
    static constexpr const char* NAME = "inkCompoundWidget";
    static constexpr const char* ALIAS = NAME;

    Handle<ink::MultiChildren> children; // 200
    ink::EChildOrder childOrder; // 210
    uint8_t unk211[0x214 - 0x211]; // 211
    ink::Margin childMargin; // 214
    uint8_t unk224[0x230 - 0x224]; // 224
};
RED4EXT_ASSERT_SIZE(CompoundWidget, 0x230);
} // namespace ink
using inkCompoundWidget = ink::CompoundWidget;
} // namespace RED4ext

// clang-format on
