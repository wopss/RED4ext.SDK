#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::ui {
enum class ActivePhoneElement : int32_t
{
    Call = 1,
    IncomingCall = 2,
    Contacts = 4,
    SmsMessenger = 8,
    Notifications = 16,
    InVehicle = 32,
    None = 64,
};
} // namespace game::ui
using gameuiActivePhoneElement = game::ui::ActivePhoneElement;
} // namespace RED4ext

// clang-format on
