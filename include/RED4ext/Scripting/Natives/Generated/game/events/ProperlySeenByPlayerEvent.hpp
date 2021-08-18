#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events { 
struct ProperlySeenByPlayerEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsProperlySeenByPlayerEvent";
    static constexpr const char* ALIAS = "gameProperlySeenByPlayerEvent";

};
RED4EXT_ASSERT_SIZE(ProperlySeenByPlayerEvent, 0x40);
} // namespace game::events
using gameProperlySeenByPlayerEvent = game::events::ProperlySeenByPlayerEvent;
} // namespace RED4ext
