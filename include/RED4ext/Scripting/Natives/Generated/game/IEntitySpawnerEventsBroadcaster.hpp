#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IEntitySpawnerEventsBroadcaster : game::IGameSystem
{
    static constexpr const char* NAME = "gameIEntitySpawnerEventsBroadcaster";
    static constexpr const char* ALIAS = "IEntitySpawnerEventsBroadcaster";

};
RED4EXT_ASSERT_SIZE(IEntitySpawnerEventsBroadcaster, 0x48);
} // namespace game
using IEntitySpawnerEventsBroadcaster = game::IEntitySpawnerEventsBroadcaster;
} // namespace RED4ext
