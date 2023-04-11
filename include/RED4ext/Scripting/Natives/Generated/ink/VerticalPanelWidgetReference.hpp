#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BasePanelWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct VerticalPanelWidgetReference : ink::BasePanelWidgetReference
{
    static constexpr const char* NAME = "inkVerticalPanelWidgetReference";
    static constexpr const char* ALIAS = "inkVerticalPanelRef";

};
RED4EXT_ASSERT_SIZE(VerticalPanelWidgetReference, 0x18);
} // namespace ink
using inkVerticalPanelWidgetReference = ink::VerticalPanelWidgetReference;
using inkVerticalPanelRef = ink::VerticalPanelWidgetReference;
} // namespace RED4ext

// clang-format on
