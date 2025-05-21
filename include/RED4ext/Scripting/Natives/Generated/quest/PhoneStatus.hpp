#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace quest {
enum class PhoneStatus : int32_t
{
    Available = 0,
    NotAvailable = 1,
    Busy = 2,
    Minimized = 3,
};
} // namespace quest
using questPhoneStatus = quest::PhoneStatus;
} // namespace RED4ext

// clang-format on
