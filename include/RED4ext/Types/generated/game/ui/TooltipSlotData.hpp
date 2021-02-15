#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/ETooltipPlacement.hpp>
#include <RED4ext/Types/generated/ink/Margin.hpp>
#include <RED4ext/Types/generated/ink/UserData.hpp>

namespace RED4ext
{
namespace game::ui { 
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
} // namespace RED4ext
