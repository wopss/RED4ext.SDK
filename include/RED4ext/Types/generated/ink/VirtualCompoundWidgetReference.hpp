#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct VirtualCompoundWidgetReference : ink::CompoundWidgetReference
{
    static constexpr const char* NAME = "inkVirtualCompoundWidgetReference";
    static constexpr const char* ALIAS = "inkVirtualCompoundRef";

};
RED4EXT_ASSERT_SIZE(VirtualCompoundWidgetReference, 0x18);
} // namespace ink
using inkVirtualCompoundRef = ink::VirtualCompoundWidgetReference;
} // namespace RED4ext
