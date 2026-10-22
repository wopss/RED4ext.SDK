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

    Handle<ink::MultiChildren> children; // 210
    ink::EChildOrder childOrder; // 220
    uint8_t unk221[0x224 - 0x221]; // 221
    ink::Margin childMargin; // 224
    uint8_t unk234[0x240 - 0x234]; // 234
};
RED4EXT_ASSERT_SIZE(CompoundWidget, 0x240);
} // namespace ink
using inkCompoundWidget = ink::CompoundWidget;
} // namespace RED4ext

// clang-format on
