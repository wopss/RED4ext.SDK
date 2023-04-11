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
struct TextWidgetReference : ink::LeafWidgetReference
{
    static constexpr const char* NAME = "inkTextWidgetReference";
    static constexpr const char* ALIAS = "inkTextRef";

};
RED4EXT_ASSERT_SIZE(TextWidgetReference, 0x18);
} // namespace ink
using inkTextWidgetReference = ink::TextWidgetReference;
using inkTextRef = ink::TextWidgetReference;
} // namespace RED4ext

// clang-format on
