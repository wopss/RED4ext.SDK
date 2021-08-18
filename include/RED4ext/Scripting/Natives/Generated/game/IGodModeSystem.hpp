#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IReplicatedGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IGodModeSystem : game::IReplicatedGameSystem
{
    static constexpr const char* NAME = "gameIGodModeSystem";
    static constexpr const char* ALIAS = "IGodModeSystem";

};
RED4EXT_ASSERT_SIZE(IGodModeSystem, 0x58);
} // namespace game
using IGodModeSystem = game::IGodModeSystem;
} // namespace RED4ext
