#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGodModeSystem.hpp>

namespace RED4ext
{
namespace game
{
struct GodModeSystem : game::IGodModeSystem
{
    static constexpr const char* NAME = "gameGodModeSystem";
    static constexpr const char* ALIAS = "GodModeSystem";

    uint8_t unk58[0xD8 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(GodModeSystem, 0xD8);
} // namespace game
using gameGodModeSystem = game::GodModeSystem;
using GodModeSystem = game::GodModeSystem;
} // namespace RED4ext

// clang-format on
