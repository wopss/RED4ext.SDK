#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ILevelAssignmentSystem.hpp>

namespace RED4ext
{
namespace game
{
struct LevelAssignmentSystem : game::ILevelAssignmentSystem
{
    static constexpr const char* NAME = "gameLevelAssignmentSystem";
    static constexpr const char* ALIAS = "LevelAssignmentSystem";

    uint8_t unk48[0xC0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(LevelAssignmentSystem, 0xC0);
} // namespace game
using gameLevelAssignmentSystem = game::LevelAssignmentSystem;
using LevelAssignmentSystem = game::LevelAssignmentSystem;
} // namespace RED4ext

// clang-format on
