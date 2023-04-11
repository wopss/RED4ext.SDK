#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/DeathDirection.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct DeathDirectionEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDeathDirectionEvent";
    static constexpr const char* ALIAS = "gameDeathDirectionEvent";

    game::events::DeathDirection direction; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(DeathDirectionEvent, 0x48);
} // namespace game::events
using gameeventsDeathDirectionEvent = game::events::DeathDirectionEvent;
using gameDeathDirectionEvent = game::events::DeathDirectionEvent;
} // namespace RED4ext

// clang-format on
