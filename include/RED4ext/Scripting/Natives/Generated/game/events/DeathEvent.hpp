#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::events { 
struct DeathEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDeathEvent";
    static constexpr const char* ALIAS = "gameDeathEvent";

    WeakHandle<game::Object> instigator; // 40
};
RED4EXT_ASSERT_SIZE(DeathEvent, 0x50);
} // namespace game::events
using gameDeathEvent = game::events::DeathEvent;
} // namespace RED4ext
