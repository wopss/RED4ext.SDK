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
struct StartTakedownEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsStartTakedownEvent";
    static constexpr const char* ALIAS = "StartTakedownEvent";

    WeakHandle<game::Object> target; // 40
    float slideTime; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(StartTakedownEvent, 0x58);
} // namespace game::events
using StartTakedownEvent = game::events::StartTakedownEvent;
} // namespace RED4ext
