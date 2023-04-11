#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAutoSaveSystem.hpp>

namespace RED4ext
{
namespace game
{
struct AutoSaveSystem : game::IAutoSaveSystem
{
    static constexpr const char* NAME = "gameAutoSaveSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xB8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AutoSaveSystem, 0xB8);
} // namespace game
using gameAutoSaveSystem = game::AutoSaveSystem;
} // namespace RED4ext

// clang-format on
