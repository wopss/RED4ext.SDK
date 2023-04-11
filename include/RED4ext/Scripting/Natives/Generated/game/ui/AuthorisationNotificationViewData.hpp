#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/AuthorisationNotificationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GenericNotificationViewData.hpp>

namespace RED4ext
{
namespace game::ui
{
struct AuthorisationNotificationViewData : game::ui::GenericNotificationViewData
{
    static constexpr const char* NAME = "gameuiAuthorisationNotificationViewData";
    static constexpr const char* ALIAS = "AuthorisationNotificationViewData";

    game::ui::AuthorisationNotificationType authType; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(AuthorisationNotificationViewData, 0x98);
} // namespace game::ui
using gameuiAuthorisationNotificationViewData = game::ui::AuthorisationNotificationViewData;
using AuthorisationNotificationViewData = game::ui::AuthorisationNotificationViewData;
} // namespace RED4ext

// clang-format on
