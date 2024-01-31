#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDynamicSpawnSystem.hpp>

namespace RED4ext
{
namespace game
{
struct DynamicSpawnSystem : game::IDynamicSpawnSystem
{
    static constexpr const char* NAME = "gameDynamicSpawnSystem";
    static constexpr const char* ALIAS = "DynamicSpawnSystem";

    uint8_t unk48[0x150 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DynamicSpawnSystem, 0x150);
} // namespace game
using gameDynamicSpawnSystem = game::DynamicSpawnSystem;
using DynamicSpawnSystem = game::DynamicSpawnSystem;
} // namespace RED4ext

// clang-format on
