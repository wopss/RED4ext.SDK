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
struct MenuInstance_SpawnEvent : red::Event
{
    static constexpr const char* NAME = "inkMenuInstance_SpawnEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MenuInstance_SpawnEvent, 0x58);
} // namespace ink
using inkMenuInstance_SpawnEvent = ink::MenuInstance_SpawnEvent;
} // namespace RED4ext

// clang-format on
