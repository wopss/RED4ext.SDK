#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MinimapDynamicEventMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapDynamicEventMappinController";
    static constexpr const char* ALIAS = "MinimapDynamicEventMappinController";

    bool pulseEnabled; // 210
    uint8_t unk211[0x218 - 0x211]; // 211
    ink::WidgetReference pulseWidget; // 218
    float hideAtDistance; // 230
    bool hideInCombat; // 234
    uint8_t unk235[0x238 - 0x235]; // 235
};
RED4EXT_ASSERT_SIZE(MinimapDynamicEventMappinController, 0x238);
} // namespace game::ui
using MinimapDynamicEventMappinController = game::ui::MinimapDynamicEventMappinController;
} // namespace RED4ext
