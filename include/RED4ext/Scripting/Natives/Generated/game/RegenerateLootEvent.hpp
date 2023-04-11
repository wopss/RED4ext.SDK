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
struct RegenerateLootEvent : red::Event
{
    static constexpr const char* NAME = "gameRegenerateLootEvent";
    static constexpr const char* ALIAS = "RegenerateLootEvent";

};
RED4EXT_ASSERT_SIZE(RegenerateLootEvent, 0x40);
} // namespace game
using gameRegenerateLootEvent = game::RegenerateLootEvent;
using RegenerateLootEvent = game::RegenerateLootEvent;
} // namespace RED4ext

// clang-format on
