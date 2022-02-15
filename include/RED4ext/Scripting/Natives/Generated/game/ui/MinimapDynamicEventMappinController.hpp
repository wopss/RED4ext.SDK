#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MinimapDynamicEventMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapDynamicEventMappinController";
    static constexpr const char* ALIAS = "MinimapDynamicEventMappinController";

    bool pulseEnabled; // 220
    uint8_t unk221[0x228 - 0x221]; // 221
    ink::WidgetReference pulseWidget; // 228
    float hideAtDistance; // 240
    bool hideInCombat; // 244
    uint8_t unk245[0x248 - 0x245]; // 245
};
RED4EXT_ASSERT_SIZE(MinimapDynamicEventMappinController, 0x248);
} // namespace game::ui
using MinimapDynamicEventMappinController = game::ui::MinimapDynamicEventMappinController;
} // namespace RED4ext
