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
struct RectangleWidgetReference : ink::LeafWidgetReference
{
    static constexpr const char* NAME = "inkRectangleWidgetReference";
    static constexpr const char* ALIAS = "inkRectangleRef";

};
RED4EXT_ASSERT_SIZE(RectangleWidgetReference, 0x18);
} // namespace ink
using inkRectangleWidgetReference = ink::RectangleWidgetReference;
using inkRectangleRef = ink::RectangleWidgetReference;
} // namespace RED4ext

// clang-format on
