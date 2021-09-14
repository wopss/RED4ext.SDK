#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct BasePanelWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkBasePanelWidget";
    static constexpr const char* ALIAS = "inkBasePanel";

    uint8_t unk220[0x230 - 0x220]; // 220
};
RED4EXT_ASSERT_SIZE(BasePanelWidget, 0x230);
} // namespace ink
using inkBasePanel = ink::BasePanelWidget;
} // namespace RED4ext
