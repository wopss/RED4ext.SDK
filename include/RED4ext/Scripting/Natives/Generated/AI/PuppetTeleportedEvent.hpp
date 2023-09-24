#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace AI
{
struct PuppetTeleportedEvent : red::Event
{
    static constexpr const char* NAME = "AIPuppetTeleportedEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PuppetTeleportedEvent, 0x40);
} // namespace AI
using AIPuppetTeleportedEvent = AI::PuppetTeleportedEvent;
} // namespace RED4ext

// clang-format on
