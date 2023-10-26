#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) VirtualCompoundWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkVirtualCompoundWidget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x240 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(VirtualCompoundWidget, 0x240);
} // namespace ink
using inkVirtualCompoundWidget = ink::VirtualCompoundWidget;
} // namespace RED4ext

// clang-format on
