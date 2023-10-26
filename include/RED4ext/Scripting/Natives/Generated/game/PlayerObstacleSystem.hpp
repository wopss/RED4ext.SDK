#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) PlayerObstacleSystem : IScriptable
{
    static constexpr const char* NAME = "gamePlayerObstacleSystem";
    static constexpr const char* ALIAS = "PlayerObstacleSystem";

    uint8_t unk40[0x2710 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PlayerObstacleSystem, 0x2710);
} // namespace game
using gamePlayerObstacleSystem = game::PlayerObstacleSystem;
using PlayerObstacleSystem = game::PlayerObstacleSystem;
} // namespace RED4ext

// clang-format on
