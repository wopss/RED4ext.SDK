#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct GenericNotificationGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiGenericNotificationGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0x158 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(GenericNotificationGameController, 0x158);
} // namespace game::ui
} // namespace RED4ext
