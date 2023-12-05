#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinimapDynamicEventMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapDynamicEventMappinController";
    static constexpr const char* ALIAS = "MinimapDynamicEventMappinController";

    bool pulseEnabled; // 228
    uint8_t unk229[0x230 - 0x229]; // 229
    ink::WidgetReference pulseWidget; // 230
    float hideAtDistance; // 248
    bool hideInCombat; // 24C
    uint8_t unk24D[0x250 - 0x24D]; // 24D
};
RED4EXT_ASSERT_SIZE(MinimapDynamicEventMappinController, 0x250);
} // namespace game::ui
using gameuiMinimapDynamicEventMappinController = game::ui::MinimapDynamicEventMappinController;
using MinimapDynamicEventMappinController = game::ui::MinimapDynamicEventMappinController;
} // namespace RED4ext

// clang-format on
