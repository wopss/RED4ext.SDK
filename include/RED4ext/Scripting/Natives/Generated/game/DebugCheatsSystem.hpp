#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDebugCheatsSystem.hpp>

namespace RED4ext
{
namespace game
{
struct DebugCheatsSystem : game::IDebugCheatsSystem
{
    static constexpr const char* NAME = "gameDebugCheatsSystem";
    static constexpr const char* ALIAS = "DebugCheatsSystem";

    uint8_t unk58[0x78 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(DebugCheatsSystem, 0x78);
} // namespace game
using gameDebugCheatsSystem = game::DebugCheatsSystem;
using DebugCheatsSystem = game::DebugCheatsSystem;
} // namespace RED4ext

// clang-format on
