#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SideScrollerMiniGameControllerAdvanced : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameControllerAdvanced";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xE8 - 0xD0]; // D0
    ink::WidgetReference gameplayCanvas; // E8
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameControllerAdvanced, 0x100);
} // namespace game::ui
} // namespace RED4ext
