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
struct ModdingSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameModdingSystem";
    static constexpr const char* ALIAS = "ModdingSystem";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ModdingSystem, 0x50);
} // namespace game
using gameModdingSystem = game::ModdingSystem;
using ModdingSystem = game::ModdingSystem;
} // namespace RED4ext

// clang-format on
