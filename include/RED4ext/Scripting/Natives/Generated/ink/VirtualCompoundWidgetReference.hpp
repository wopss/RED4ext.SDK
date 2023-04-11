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
struct VirtualCompoundWidgetReference : ink::CompoundWidgetReference
{
    static constexpr const char* NAME = "inkVirtualCompoundWidgetReference";
    static constexpr const char* ALIAS = "inkVirtualCompoundRef";

};
RED4EXT_ASSERT_SIZE(VirtualCompoundWidgetReference, 0x18);
} // namespace ink
using inkVirtualCompoundWidgetReference = ink::VirtualCompoundWidgetReference;
using inkVirtualCompoundRef = ink::VirtualCompoundWidgetReference;
} // namespace RED4ext

// clang-format on
