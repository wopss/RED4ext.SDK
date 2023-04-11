#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct GlobaltvWidgetGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiGlobaltvWidgetGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0x108 - 0xE0]; // E0
    ink::CompoundWidgetReference overlayContainer; // 108
};
RED4EXT_ASSERT_SIZE(GlobaltvWidgetGameController, 0x120);
} // namespace game::ui
using gameuiGlobaltvWidgetGameController = game::ui::GlobaltvWidgetGameController;
} // namespace RED4ext

// clang-format on
