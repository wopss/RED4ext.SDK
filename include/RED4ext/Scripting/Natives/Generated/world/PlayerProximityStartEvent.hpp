#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace world { 
struct PlayerProximityStartEvent : red::Event
{
    static constexpr const char* NAME = "worldPlayerProximityStartEvent";
    static constexpr const char* ALIAS = "PlayerProximityStartEvent";

    CName profile; // 40
};
RED4EXT_ASSERT_SIZE(PlayerProximityStartEvent, 0x48);
} // namespace world
using PlayerProximityStartEvent = world::PlayerProximityStartEvent;
} // namespace RED4ext
