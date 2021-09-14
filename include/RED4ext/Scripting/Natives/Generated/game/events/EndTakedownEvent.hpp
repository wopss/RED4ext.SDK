#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events { 
struct EndTakedownEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsEndTakedownEvent";
    static constexpr const char* ALIAS = "EndTakedownEvent";

};
RED4EXT_ASSERT_SIZE(EndTakedownEvent, 0x40);
} // namespace game::events
using EndTakedownEvent = game::events::EndTakedownEvent;
} // namespace RED4ext
