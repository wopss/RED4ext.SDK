#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MenuInstance_SpawnEvent.hpp>

namespace RED4ext
{
namespace ink
{
struct MenuInstance_SpawnAddressedEvent : ink::MenuInstance_SpawnEvent
{
    static constexpr const char* NAME = "inkMenuInstance_SpawnAddressedEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(MenuInstance_SpawnAddressedEvent, 0x60);
} // namespace ink
using inkMenuInstance_SpawnAddressedEvent = ink::MenuInstance_SpawnAddressedEvent;
} // namespace RED4ext

// clang-format on
