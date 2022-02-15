#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BasePanelWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct HorizontalPanelWidget : ink::BasePanelWidget
{
    static constexpr const char* NAME = "inkHorizontalPanelWidget";
    static constexpr const char* ALIAS = "inkHorizontalPanel";

};
RED4EXT_ASSERT_SIZE(HorizontalPanelWidget, 0x240);
} // namespace ink
using inkHorizontalPanel = ink::HorizontalPanelWidget;
} // namespace RED4ext
