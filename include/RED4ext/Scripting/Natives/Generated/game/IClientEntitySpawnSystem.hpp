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
struct IClientEntitySpawnSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIClientEntitySpawnSystem";
    static constexpr const char* ALIAS = "IClientEntitySpawnSystem";

};
RED4EXT_ASSERT_SIZE(IClientEntitySpawnSystem, 0x48);
} // namespace game
using gameIClientEntitySpawnSystem = game::IClientEntitySpawnSystem;
using IClientEntitySpawnSystem = game::IClientEntitySpawnSystem;
} // namespace RED4ext

// clang-format on
