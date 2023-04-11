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
struct GridWidgetReference : ink::CompoundWidgetReference
{
    static constexpr const char* NAME = "inkGridWidgetReference";
    static constexpr const char* ALIAS = "inkGridRef";

};
RED4EXT_ASSERT_SIZE(GridWidgetReference, 0x18);
} // namespace ink
using inkGridWidgetReference = ink::GridWidgetReference;
using inkGridRef = ink::GridWidgetReference;
} // namespace RED4ext

// clang-format on
