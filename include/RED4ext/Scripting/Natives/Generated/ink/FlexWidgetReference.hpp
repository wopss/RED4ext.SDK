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
struct FlexWidgetReference : ink::CompoundWidgetReference
{
    static constexpr const char* NAME = "inkFlexWidgetReference";
    static constexpr const char* ALIAS = "inkFlexRef";

};
RED4EXT_ASSERT_SIZE(FlexWidgetReference, 0x18);
} // namespace ink
using inkFlexWidgetReference = ink::FlexWidgetReference;
using inkFlexRef = ink::FlexWidgetReference;
} // namespace RED4ext

// clang-format on
