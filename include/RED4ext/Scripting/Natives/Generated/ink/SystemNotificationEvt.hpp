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
struct SystemNotificationEvt : red::Event
{
    static constexpr const char* NAME = "inkSystemNotificationEvt";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SystemNotificationEvt, 0x50);
} // namespace ink
using inkSystemNotificationEvt = ink::SystemNotificationEvt;
} // namespace RED4ext

// clang-format on
