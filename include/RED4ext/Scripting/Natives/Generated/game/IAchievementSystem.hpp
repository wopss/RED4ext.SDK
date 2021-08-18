#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IAchievementSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIAchievementSystem";
    static constexpr const char* ALIAS = "IAchievementSystem";

};
RED4EXT_ASSERT_SIZE(IAchievementSystem, 0x48);
} // namespace game
using IAchievementSystem = game::IAchievementSystem;
} // namespace RED4ext
