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
    static constexpr const char* ALIAS = "gameuiGenericNotificationGameController";

    uint8_t unkE0[0x168 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(GenericNotificationGameController, 0x168);
} // namespace game::ui
} // namespace RED4ext
