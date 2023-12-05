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
struct HudEntrySpawnedEvent : red::Event
{
    static constexpr const char* NAME = "inkHudEntrySpawnedEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x170 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(HudEntrySpawnedEvent, 0x170);
} // namespace ink
using inkHudEntrySpawnedEvent = ink::HudEntrySpawnedEvent;
} // namespace RED4ext

// clang-format on
