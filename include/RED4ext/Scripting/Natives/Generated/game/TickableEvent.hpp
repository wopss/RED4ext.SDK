#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TickableEventState.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct TickableEvent : red::Event
{
    static constexpr const char* NAME = "gameTickableEvent";
    static constexpr const char* ALIAS = "TickableEvent";

    game::TickableEventState state; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(TickableEvent, 0x50);
} // namespace game
using gameTickableEvent = game::TickableEvent;
using TickableEvent = game::TickableEvent;
} // namespace RED4ext

// clang-format on
