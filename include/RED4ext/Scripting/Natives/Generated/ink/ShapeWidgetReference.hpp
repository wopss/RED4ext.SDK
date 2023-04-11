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
struct ShapeWidgetReference : ink::LeafWidgetReference
{
    static constexpr const char* NAME = "inkShapeWidgetReference";
    static constexpr const char* ALIAS = "inkShapeRef";

};
RED4EXT_ASSERT_SIZE(ShapeWidgetReference, 0x18);
} // namespace ink
using inkShapeWidgetReference = ink::ShapeWidgetReference;
using inkShapeRef = ink::ShapeWidgetReference;
} // namespace RED4ext

// clang-format on
