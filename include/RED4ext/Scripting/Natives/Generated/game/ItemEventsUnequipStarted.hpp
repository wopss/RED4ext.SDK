#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct ItemEventsUnequipStarted : red::Event
{
    static constexpr const char* NAME = "gameItemEventsUnequipStarted";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ItemEventsUnequipStarted, 0x40);
} // namespace game
} // namespace RED4ext
