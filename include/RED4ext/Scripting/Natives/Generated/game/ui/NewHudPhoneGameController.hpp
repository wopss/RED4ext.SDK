#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ExternalPhoneElement.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GenericNotificationGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HudScalingSensitiveWidget.hpp>
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
    game::ui::LocalPhoneElement incomingCallElement; // 210
    game::ui::LocalPhoneElement contactsElement; // 278
    game::ui::ExternalPhoneElement smsMessengerElement; // 2E0
    game::ui::PhoneElementVisibility notificationsElement; // 360
    game::ui::LocalPhoneElement phoneIconElement; // 3A0
    uint8_t unk408[0x438 - 0x408]; // 408
    DynArray<game::ui::ResolutionSensitiveWidget> resolutionSensitiveWidgets; // 438
    DynArray<game::ui::HudScalingSensitiveWidget> hudScalingSensitiveWidgets; // 448
    uint8_t unk458[0x470 - 0x458]; // 458
    ink::WidgetReference phoneIconMarker; // 470
    ink::WidgetReference phoneIconVehicleMarker; // 488
    ink::WidgetReference callMarker; // 4A0
    ink::WidgetReference contactsMarker; // 4B8
    ink::WidgetReference notificationMarker; // 4D0
    uint8_t unk4E8[0x500 - 0x4E8]; // 4E8
};
RED4EXT_ASSERT_SIZE(NewHudPhoneGameController, 0x500);
} // namespace game::ui
using gameuiNewHudPhoneGameController = game::ui::NewHudPhoneGameController;
} // namespace RED4ext

// clang-format on
