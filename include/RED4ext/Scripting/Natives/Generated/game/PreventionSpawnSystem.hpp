#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPreventionSpawnSystem.hpp>

namespace RED4ext
{
namespace game
{
struct PreventionSpawnSystem : game::IPreventionSpawnSystem
{
    static constexpr const char* NAME = "gamePreventionSpawnSystem";
    static constexpr const char* ALIAS = "PreventionSpawnSystem";

    uint8_t unk48[0x368 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PreventionSpawnSystem, 0x368);
} // namespace game
using gamePreventionSpawnSystem = game::PreventionSpawnSystem;
using PreventionSpawnSystem = game::PreventionSpawnSystem;
} // namespace RED4ext

// clang-format on
