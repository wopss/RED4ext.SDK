#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SideScrollerMiniGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameController";
    static constexpr const char* ALIAS = NAME;

    CName gameName; // D0
    uint8_t unkD8[0xF0 - 0xD8]; // D8
    ink::WidgetReference gameplayCanvas; // F0
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameController, 0x108);
} // namespace game::ui
} // namespace RED4ext
