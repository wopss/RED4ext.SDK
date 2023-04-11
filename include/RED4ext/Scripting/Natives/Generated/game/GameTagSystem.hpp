#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct GameTagSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameGameTagSystem";
    static constexpr const char* ALIAS = "GameTagSystem";

    uint8_t unk48[0xB0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameTagSystem, 0xB0);
} // namespace game
using gameGameTagSystem = game::GameTagSystem;
using GameTagSystem = game::GameTagSystem;
} // namespace RED4ext

// clang-format on
