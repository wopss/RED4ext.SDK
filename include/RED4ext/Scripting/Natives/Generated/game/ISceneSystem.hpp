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
struct ISceneSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameISceneSystem";
    static constexpr const char* ALIAS = "ISceneSystem";

};
RED4EXT_ASSERT_SIZE(ISceneSystem, 0x48);
} // namespace game
using gameISceneSystem = game::ISceneSystem;
using ISceneSystem = game::ISceneSystem;
} // namespace RED4ext

// clang-format on
