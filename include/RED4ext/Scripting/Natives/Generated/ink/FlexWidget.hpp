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
struct __declspec(align(0x10)) FlexWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkFlexWidget";
    static constexpr const char* ALIAS = "inkFlex";

};
RED4EXT_ASSERT_SIZE(FlexWidget, 0x230);
} // namespace ink
using inkFlexWidget = ink::FlexWidget;
using inkFlex = ink::FlexWidget;
} // namespace RED4ext

// clang-format on
