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
struct IPreventionSpawnSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIPreventionSpawnSystem";
    static constexpr const char* ALIAS = "IPreventionSpawnSystem";

};
RED4EXT_ASSERT_SIZE(IPreventionSpawnSystem, 0x48);
} // namespace game
using gameIPreventionSpawnSystem = game::IPreventionSpawnSystem;
using IPreventionSpawnSystem = game::IPreventionSpawnSystem;
} // namespace RED4ext

// clang-format on
