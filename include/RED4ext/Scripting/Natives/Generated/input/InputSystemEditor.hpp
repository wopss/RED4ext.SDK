#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/input/InputSystemWin32Base.hpp>

namespace RED4ext
{
namespace input { 
struct InputSystemEditor : input::InputSystemWin32Base
{
    static constexpr const char* NAME = "inputInputSystemEditor";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk180[0xE60 - 0x180]; // 180
};
RED4EXT_ASSERT_SIZE(InputSystemEditor, 0xE60);
} // namespace input
} // namespace RED4ext
