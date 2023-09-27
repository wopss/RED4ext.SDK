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
struct IDynamicSpawnSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIDynamicSpawnSystem";
    static constexpr const char* ALIAS = "IDynamicSpawnSystem";

};
RED4EXT_ASSERT_SIZE(IDynamicSpawnSystem, 0x48);
} // namespace game
using gameIDynamicSpawnSystem = game::IDynamicSpawnSystem;
using IDynamicSpawnSystem = game::IDynamicSpawnSystem;
} // namespace RED4ext

// clang-format on
