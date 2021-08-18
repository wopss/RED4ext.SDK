#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct PlayerObstacleSystem : IScriptable
{
    static constexpr const char* NAME = "gamePlayerObstacleSystem";
    static constexpr const char* ALIAS = "PlayerObstacleSystem";

    uint8_t unk40[0x20E0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PlayerObstacleSystem, 0x20E0);
} // namespace game
using PlayerObstacleSystem = game::PlayerObstacleSystem;
} // namespace RED4ext
