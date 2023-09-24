#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectSpawnerSaveSystem.hpp>

namespace RED4ext
{
namespace game
{
struct EffectSpawnerSaveSystem : game::IEffectSpawnerSaveSystem
{
    static constexpr const char* NAME = "gameEffectSpawnerSaveSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xA8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(EffectSpawnerSaveSystem, 0xA8);
} // namespace game
using gameEffectSpawnerSaveSystem = game::EffectSpawnerSaveSystem;
} // namespace RED4ext

// clang-format on
