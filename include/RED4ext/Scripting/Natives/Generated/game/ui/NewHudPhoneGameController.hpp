#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ExternalPhoneElement.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GenericNotificationGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/LocalPhoneElement.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PhoneElementVisibility.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ResolutionSensitiveWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct NewHudPhoneGameController : game::ui::GenericNotificationGameController
{
    static constexpr const char* NAME = "gameuiNewHudPhoneGameController";
    static constexpr const char* ALIAS = NAME;

    game::ui::LocalPhoneElement holoAudioCallElement; // 1A8
    game::ui::LocalPhoneElement incomingCallElement; // 208
    game::ui::LocalPhoneElement contactsElement; // 268
    game::ui::ExternalPhoneElement smsMessengerElement; // 2C8
    game::ui::PhoneElementVisibility notificationsElement; // 340
    game::ui::LocalPhoneElement phoneIconElement; // 378
    uint8_t unk3D8[0x408 - 0x3D8]; // 3D8
    DynArray<game::ui::ResolutionSensitiveWidget> resolutionSensitiveWidgets; // 408
    uint8_t unk418[0x430 - 0x418]; // 418
    ink::WidgetReference phoneIconMarker; // 430
    uint8_t unk448[0x450 - 0x448]; // 448
};
RED4EXT_ASSERT_SIZE(NewHudPhoneGameController, 0x450);
} // namespace game::ui
using gameuiNewHudPhoneGameController = game::ui::NewHudPhoneGameController;
} // namespace RED4ext

// clang-format on
