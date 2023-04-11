#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameRulesSystem.hpp>

namespace RED4ext
{
namespace game
{
struct GameRulesSystem : game::IGameRulesSystem
{
    static constexpr const char* NAME = "gameGameRulesSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameRulesSystem, 0x68);
} // namespace game
using gameGameRulesSystem = game::GameRulesSystem;
} // namespace RED4ext

// clang-format on
