#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EmptyCallback.hpp>

namespace RED4ext
{
namespace game::ui { 
struct GenericNotificationReceiverGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiGenericNotificationReceiverGameController";
    static constexpr const char* ALIAS = "gameuiGenericNotificationReceiverGameController";

    ink::EmptyCallback ItemChanged; // E0
    uint8_t unk118[0x128 - 0x118]; // 118
};
RED4EXT_ASSERT_SIZE(GenericNotificationReceiverGameController, 0x128);
} // namespace game::ui
} // namespace RED4ext
