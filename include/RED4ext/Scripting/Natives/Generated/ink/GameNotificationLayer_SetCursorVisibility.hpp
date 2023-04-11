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
struct GameNotificationLayer_SetCursorVisibility : red::Event
{
    static constexpr const char* NAME = "inkGameNotificationLayer_SetCursorVisibility";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(GameNotificationLayer_SetCursorVisibility, 0x50);
} // namespace ink
using inkGameNotificationLayer_SetCursorVisibility = ink::GameNotificationLayer_SetCursorVisibility;
} // namespace RED4ext

// clang-format on
