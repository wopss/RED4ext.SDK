#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EmptyCallback.hpp>

namespace RED4ext
{
namespace game::ui
{
struct GenericNotificationReceiverGameController : game::ui::WidgetGameController
{
    static constexpr const char* NAME = "gameuiGenericNotificationReceiverGameController";
    static constexpr const char* ALIAS = NAME;

    ink::EmptyCallback ItemChanged; // E0
    ink::EmptyCallback NotificationPaused; // 118
    ink::EmptyCallback NotificationResumed; // 150
    uint8_t unk188[0x198 - 0x188]; // 188
};
RED4EXT_ASSERT_SIZE(GenericNotificationReceiverGameController, 0x198);
} // namespace game::ui
using gameuiGenericNotificationReceiverGameController = game::ui::GenericNotificationReceiverGameController;
} // namespace RED4ext

// clang-format on
