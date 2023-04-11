#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ETooltipPlacement.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TooltipSlotData : ink::UserData
{
    static constexpr const char* NAME = "gameuiTooltipSlotData";
    static constexpr const char* ALIAS = NAME;

    ink::Margin margin; // 40
    game::ui::ETooltipPlacement placement; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(TooltipSlotData, 0x58);
} // namespace game::ui
using gameuiTooltipSlotData = game::ui::TooltipSlotData;
} // namespace RED4ext

// clang-format on
