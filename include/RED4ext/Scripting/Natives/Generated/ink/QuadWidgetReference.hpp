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
struct QuadWidgetReference : ink::LeafWidgetReference
{
    static constexpr const char* NAME = "inkQuadWidgetReference";
    static constexpr const char* ALIAS = "inkQuadRef";

};
RED4EXT_ASSERT_SIZE(QuadWidgetReference, 0x18);
} // namespace ink
using inkQuadWidgetReference = ink::QuadWidgetReference;
using inkQuadRef = ink::QuadWidgetReference;
} // namespace RED4ext

// clang-format on
