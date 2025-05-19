#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class ELayerType : int8_t
{
    Watermarks = 0,
    WaitingSign = 1,
    SystemNotifications = 2,
    Loading = 3,
    GameNotifications = 4,
    Menu = 5,
    Video = 6,
    HUD = 7,
    Editor = 8,
    World = 9,
    Offscreen = 10,
    Advertisements = 11,
    StreetSigns = 12,
    PhotoMode = 13,
    Debug = 14,
    MAX = 15,
};
} // namespace ink
using inkELayerType = ink::ELayerType;
} // namespace RED4ext

// clang-format on
