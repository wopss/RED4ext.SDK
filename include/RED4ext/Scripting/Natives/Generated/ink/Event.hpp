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
struct Event : red::Event
{
    static constexpr const char* NAME = "inkEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(Event, 0x68);
} // namespace ink
using inkEvent = ink::Event;
} // namespace RED4ext

// clang-format on
