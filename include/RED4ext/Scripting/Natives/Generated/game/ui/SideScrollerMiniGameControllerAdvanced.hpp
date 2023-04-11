#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SideScrollerMiniGameControllerAdvanced : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiSideScrollerMiniGameControllerAdvanced";
    static constexpr const char* ALIAS = "MinigameControllerAdvanced";

    uint8_t unkE0[0xF8 - 0xE0]; // E0
    ink::WidgetReference gameplayCanvas; // F8
};
RED4EXT_ASSERT_SIZE(SideScrollerMiniGameControllerAdvanced, 0x110);
} // namespace game::ui
using gameuiSideScrollerMiniGameControllerAdvanced = game::ui::SideScrollerMiniGameControllerAdvanced;
using MinigameControllerAdvanced = game::ui::SideScrollerMiniGameControllerAdvanced;
} // namespace RED4ext

// clang-format on
