#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/input/InputSystemWin32Base.hpp>

namespace RED4ext
{
namespace input { 
struct InputSystemWin32Game : input::InputSystemWin32Base
{
    static constexpr const char* NAME = "inputInputSystemWin32Game";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk178[0x1270 - 0x178]; // 178
};
RED4EXT_ASSERT_SIZE(InputSystemWin32Game, 0x1270);
} // namespace input
} // namespace RED4ext
