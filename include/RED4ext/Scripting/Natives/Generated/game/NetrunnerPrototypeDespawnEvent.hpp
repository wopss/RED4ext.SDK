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
struct NetrunnerPrototypeDespawnEvent : red::Event
{
    static constexpr const char* NAME = "gameNetrunnerPrototypeDespawnEvent";
    static constexpr const char* ALIAS = "NetrunnerPrototypeDespawnEvent";

};
RED4EXT_ASSERT_SIZE(NetrunnerPrototypeDespawnEvent, 0x40);
} // namespace game
using gameNetrunnerPrototypeDespawnEvent = game::NetrunnerPrototypeDespawnEvent;
using NetrunnerPrototypeDespawnEvent = game::NetrunnerPrototypeDespawnEvent;
} // namespace RED4ext

// clang-format on
