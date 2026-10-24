#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/input/IInputSystem.hpp>

namespace RED4ext
{
namespace input
{
struct InputSystemWin32Base : input::IInputSystem
{
    static constexpr const char* NAME = "inputInputSystemWin32Base";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1B0[0x1E8 - 0x1B0]; // 1B0
};
RED4EXT_ASSERT_SIZE(InputSystemWin32Base, 0x1E8);
} // namespace input
using inputInputSystemWin32Base = input::InputSystemWin32Base;
} // namespace RED4ext

// clang-format on
