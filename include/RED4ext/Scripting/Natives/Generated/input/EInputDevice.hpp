#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace input {
enum class EInputDevice : int32_t
{
    INVALID = 0,
    KBD_MOUSE = 1,
    ORBIS = 2,
    DURANGO = 3,
    STEAM = 4,
    XINPUT_PAD = 5,
    STADIA = 6,
    NINTENDO_SWITCH = 7,
    SCARLETT_GAMEPAD = 8,
    PROSPERO = 9,
    EID_COUNT = 10,
};
} // namespace input
using inputEInputDevice = input::EInputDevice;
} // namespace RED4ext

// clang-format on
