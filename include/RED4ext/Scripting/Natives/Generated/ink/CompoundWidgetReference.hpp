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
struct CompoundWidgetReference : ink::WidgetReference
{
    static constexpr const char* NAME = "inkCompoundWidgetReference";
    static constexpr const char* ALIAS = "inkCompoundRef";

};
RED4EXT_ASSERT_SIZE(CompoundWidgetReference, 0x18);
} // namespace ink
using inkCompoundWidgetReference = ink::CompoundWidgetReference;
using inkCompoundRef = ink::CompoundWidgetReference;
} // namespace RED4ext

// clang-format on
