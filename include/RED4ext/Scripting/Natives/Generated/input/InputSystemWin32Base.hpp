#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/input/IInputSystem.hpp>

namespace RED4ext
{
namespace input { 
struct InputSystemWin32Base : input::IInputSystem
{
    static constexpr const char* NAME = "inputInputSystemWin32Base";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk140[0x178 - 0x140]; // 140
};
RED4EXT_ASSERT_SIZE(InputSystemWin32Base, 0x178);
} // namespace input
} // namespace RED4ext
