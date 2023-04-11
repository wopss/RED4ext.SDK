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
struct CircleWidgetReference : ink::LeafWidgetReference
{
    static constexpr const char* NAME = "inkCircleWidgetReference";
    static constexpr const char* ALIAS = "inkCircleRef";

};
RED4EXT_ASSERT_SIZE(CircleWidgetReference, 0x18);
} // namespace ink
using inkCircleWidgetReference = ink::CircleWidgetReference;
using inkCircleRef = ink::CircleWidgetReference;
} // namespace RED4ext

// clang-format on
