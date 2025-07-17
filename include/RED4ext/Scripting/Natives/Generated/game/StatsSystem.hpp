#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatsSystem.hpp>

namespace RED4ext
{
namespace game
{
struct StatsSystem : game::IStatsSystem
{
    static constexpr const char* NAME = "gameStatsSystem";
    static constexpr const char* ALIAS = "StatsSystem";

    uint8_t unk48[0x538 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatsSystem, 0x538);
} // namespace game
using gameStatsSystem = game::StatsSystem;
using StatsSystem = game::StatsSystem;
} // namespace RED4ext

// clang-format on
