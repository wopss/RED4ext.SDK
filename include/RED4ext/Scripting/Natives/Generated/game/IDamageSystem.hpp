#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IReplicatedGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IDamageSystem : game::IReplicatedGameSystem
{
    static constexpr const char* NAME = "gameIDamageSystem";
    static constexpr const char* ALIAS = "IDamageSystem";

};
RED4EXT_ASSERT_SIZE(IDamageSystem, 0x58);
} // namespace game
using IDamageSystem = game::IDamageSystem;
} // namespace RED4ext
