#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events { 
struct DefeatedEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDefeatedEvent";
    static constexpr const char* ALIAS = "DefeatedEvent";

};
RED4EXT_ASSERT_SIZE(DefeatedEvent, 0x40);
} // namespace game::events
using DefeatedEvent = game::events::DefeatedEvent;
} // namespace RED4ext
