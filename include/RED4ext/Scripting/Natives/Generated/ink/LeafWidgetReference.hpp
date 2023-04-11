#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct LeafWidgetReference : ink::WidgetReference
{
    static constexpr const char* NAME = "inkLeafWidgetReference";
    static constexpr const char* ALIAS = "inkLeafRef";

};
RED4EXT_ASSERT_SIZE(LeafWidgetReference, 0x18);
} // namespace ink
using inkLeafWidgetReference = ink::LeafWidgetReference;
using inkLeafRef = ink::LeafWidgetReference;
} // namespace RED4ext

// clang-format on
