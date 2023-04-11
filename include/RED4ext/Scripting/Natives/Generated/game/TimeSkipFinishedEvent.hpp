#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct TimeSkipFinishedEvent : red::Event
{
    static constexpr const char* NAME = "gameTimeSkipFinishedEvent";
    static constexpr const char* ALIAS = "TimeSkipFinishedEvent";

};
RED4EXT_ASSERT_SIZE(TimeSkipFinishedEvent, 0x40);
} // namespace game
using gameTimeSkipFinishedEvent = game::TimeSkipFinishedEvent;
using TimeSkipFinishedEvent = game::TimeSkipFinishedEvent;
} // namespace RED4ext

// clang-format on
