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
struct EngineTurnedOffEvent : red::Event
{
    static constexpr const char* NAME = "gameEngineTurnedOffEvent";
    static constexpr const char* ALIAS = "EngineTurnedOffEvent";

};
RED4EXT_ASSERT_SIZE(EngineTurnedOffEvent, 0x40);
} // namespace game
using gameEngineTurnedOffEvent = game::EngineTurnedOffEvent;
using EngineTurnedOffEvent = game::EngineTurnedOffEvent;
} // namespace RED4ext

// clang-format on
