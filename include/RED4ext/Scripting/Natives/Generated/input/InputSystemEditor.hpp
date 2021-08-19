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

    uint8_t unk178[0xE58 - 0x178]; // 178
};
RED4EXT_ASSERT_SIZE(InputSystemEditor, 0xE58);
} // namespace input
} // namespace RED4ext
