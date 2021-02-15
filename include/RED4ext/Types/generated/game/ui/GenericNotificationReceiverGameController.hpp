#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Types/generated/ink/EmptyCallback.hpp>

namespace RED4ext
{
namespace game::ui { 
struct GenericNotificationReceiverGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiGenericNotificationReceiverGameController";
    static constexpr const char* ALIAS = "gameuiGenericNotificationReceiverGameController";

    ink::EmptyCallback ItemChanged; // D0
    uint8_t unk108[0x118 - 0x108]; // 108
};
RED4EXT_ASSERT_SIZE(GenericNotificationReceiverGameController, 0x118);
} // namespace game::ui
} // namespace RED4ext
