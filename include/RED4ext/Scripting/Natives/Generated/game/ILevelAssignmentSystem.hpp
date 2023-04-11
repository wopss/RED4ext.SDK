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
struct ILevelAssignmentSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameILevelAssignmentSystem";
    static constexpr const char* ALIAS = "ILevelAssignmentSystem";

};
RED4EXT_ASSERT_SIZE(ILevelAssignmentSystem, 0x48);
} // namespace game
using gameILevelAssignmentSystem = game::ILevelAssignmentSystem;
using ILevelAssignmentSystem = game::ILevelAssignmentSystem;
} // namespace RED4ext

// clang-format on
