#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class FocusCause : int8_t
{
    Mouse = 0,
    Navigation = 1,
    SetDirectly = 2,
    Cleared = 3,
    OtherWidgetLostFocus = 4,
    WindowActivate = 5,
};
} // namespace ink
using inkFocusCause = ink::FocusCause;
} // namespace RED4ext

// clang-format on
