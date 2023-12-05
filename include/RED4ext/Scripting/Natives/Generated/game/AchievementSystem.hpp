#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAchievementSystem.hpp>

namespace RED4ext
{
namespace game
{
struct AchievementSystem : game::IAchievementSystem
{
    static constexpr const char* NAME = "gameAchievementSystem";
    static constexpr const char* ALIAS = "AchievementSystem";

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AchievementSystem, 0x68);
} // namespace game
using gameAchievementSystem = game::AchievementSystem;
using AchievementSystem = game::AchievementSystem;
} // namespace RED4ext

// clang-format on
