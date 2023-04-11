#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct ScrollAreaWidgetReference : ink::CompoundWidgetReference
{
    static constexpr const char* NAME = "inkScrollAreaWidgetReference";
    static constexpr const char* ALIAS = "inkScrollAreaRef";

};
RED4EXT_ASSERT_SIZE(ScrollAreaWidgetReference, 0x18);
} // namespace ink
using inkScrollAreaWidgetReference = ink::ScrollAreaWidgetReference;
using inkScrollAreaRef = ink::ScrollAreaWidgetReference;
} // namespace RED4ext

// clang-format on
