#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ICollisionQueriesSystem.hpp>

namespace RED4ext
{
namespace game
{
struct CollisionQueriesSystem : game::ICollisionQueriesSystem
{
    static constexpr const char* NAME = "gameCollisionQueriesSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x550 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CollisionQueriesSystem, 0x550);
} // namespace game
using gameCollisionQueriesSystem = game::CollisionQueriesSystem;
} // namespace RED4ext

// clang-format on
