#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct HudSafezonesEditorGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiHudSafezonesEditorGameController";
    static constexpr const char* ALIAS = NAME;

    ink::CompoundWidgetReference rootWidget; // F0
    ink::CompoundWidgetReference flexWidget; // 108
    uint8_t unk120[0x138 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(HudSafezonesEditorGameController, 0x138);
} // namespace game::ui
using gameuiHudSafezonesEditorGameController = game::ui::HudSafezonesEditorGameController;
} // namespace RED4ext

// clang-format on
