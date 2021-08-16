#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BasePanelWidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct HorizontalPanelWidgetReference : ink::BasePanelWidgetReference
{
    static constexpr const char* NAME = "inkHorizontalPanelWidgetReference";
    static constexpr const char* ALIAS = "inkHorizontalPanelRef";

};
RED4EXT_ASSERT_SIZE(HorizontalPanelWidgetReference, 0x18);
} // namespace ink
using inkHorizontalPanelRef = ink::HorizontalPanelWidgetReference;
} // namespace RED4ext
