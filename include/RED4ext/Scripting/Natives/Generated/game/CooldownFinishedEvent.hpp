#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CooldownSystemEvent.hpp>

namespace RED4ext
{
namespace game
{
struct CooldownFinishedEvent : game::CooldownSystemEvent
{
    static constexpr const char* NAME = "gameCooldownFinishedEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CooldownFinishedEvent, 0x40);
} // namespace game
using gameCooldownFinishedEvent = game::CooldownFinishedEvent;
} // namespace RED4ext

// clang-format on
