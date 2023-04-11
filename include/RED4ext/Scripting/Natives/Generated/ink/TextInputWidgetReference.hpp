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
struct TextInputWidgetReference : ink::LeafWidgetReference
{
    static constexpr const char* NAME = "inkTextInputWidgetReference";
    static constexpr const char* ALIAS = "inkTextInputRef";

};
RED4EXT_ASSERT_SIZE(TextInputWidgetReference, 0x18);
} // namespace ink
using inkTextInputWidgetReference = ink::TextInputWidgetReference;
using inkTextInputRef = ink::TextInputWidgetReference;
} // namespace RED4ext

// clang-format on
