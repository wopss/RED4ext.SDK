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
struct NewHudSpawnedEvent : red::Event
{
    static constexpr const char* NAME = "inkNewHudSpawnedEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(NewHudSpawnedEvent, 0x40);
} // namespace ink
using inkNewHudSpawnedEvent = ink::NewHudSpawnedEvent;
} // namespace RED4ext

// clang-format on
