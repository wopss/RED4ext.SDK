#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PersistentState.hpp>

namespace RED4ext
{
namespace game
{
struct ObjectPS : game::PersistentState
{
    static constexpr const char* NAME = "gameObjectPS";
    static constexpr const char* ALIAS = "GameObjectPS";

};
RED4EXT_ASSERT_SIZE(ObjectPS, 0x68);
} // namespace game
using gameObjectPS = game::ObjectPS;
using GameObjectPS = game::ObjectPS;
} // namespace RED4ext

// clang-format on
