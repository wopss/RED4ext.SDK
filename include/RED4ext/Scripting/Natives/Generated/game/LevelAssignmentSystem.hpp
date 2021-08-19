#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ILevelAssignmentSystem.hpp>

namespace RED4ext
{
namespace game { 
struct LevelAssignmentSystem : game::ILevelAssignmentSystem
{
    static constexpr const char* NAME = "gameLevelAssignmentSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xB0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(LevelAssignmentSystem, 0xB0);
} // namespace game
} // namespace RED4ext
