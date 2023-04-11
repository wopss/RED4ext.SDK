#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct BorderWidgetReference : ink::LeafWidgetReference
{
    static constexpr const char* NAME = "inkBorderWidgetReference";
    static constexpr const char* ALIAS = "inkBorderRef";

};
RED4EXT_ASSERT_SIZE(BorderWidgetReference, 0x18);
} // namespace ink
using inkBorderWidgetReference = ink::BorderWidgetReference;
using inkBorderRef = ink::BorderWidgetReference;
} // namespace RED4ext

// clang-format on
