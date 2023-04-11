#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ink
{
struct MenuLayer_SetCursorVisibility : red::Event
{
    static constexpr const char* NAME = "inkMenuLayer_SetCursorVisibility";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MenuLayer_SetCursorVisibility, 0x50);
} // namespace ink
using inkMenuLayer_SetCursorVisibility = ink::MenuLayer_SetCursorVisibility;
} // namespace RED4ext

// clang-format on
