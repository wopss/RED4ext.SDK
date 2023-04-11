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
struct ICollisionQueriesSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameICollisionQueriesSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ICollisionQueriesSystem, 0x48);
} // namespace game
using gameICollisionQueriesSystem = game::ICollisionQueriesSystem;
} // namespace RED4ext

// clang-format on
