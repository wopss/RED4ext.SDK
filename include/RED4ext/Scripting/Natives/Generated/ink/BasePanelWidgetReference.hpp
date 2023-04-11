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
struct BasePanelWidgetReference : ink::CompoundWidgetReference
{
    static constexpr const char* NAME = "inkBasePanelWidgetReference";
    static constexpr const char* ALIAS = "inkBasePanelRef";

};
RED4EXT_ASSERT_SIZE(BasePanelWidgetReference, 0x18);
} // namespace ink
using inkBasePanelWidgetReference = ink::BasePanelWidgetReference;
using inkBasePanelRef = ink::BasePanelWidgetReference;
} // namespace RED4ext

// clang-format on
