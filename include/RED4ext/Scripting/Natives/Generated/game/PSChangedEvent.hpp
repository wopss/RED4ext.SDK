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
struct PSChangedEvent : red::Event
{
    static constexpr const char* NAME = "gamePSChangedEvent";
    static constexpr const char* ALIAS = "PSChangedEvent";

};
RED4EXT_ASSERT_SIZE(PSChangedEvent, 0x40);
} // namespace game
using gamePSChangedEvent = game::PSChangedEvent;
using PSChangedEvent = game::PSChangedEvent;
} // namespace RED4ext

// clang-format on
