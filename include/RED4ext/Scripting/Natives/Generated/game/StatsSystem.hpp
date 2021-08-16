#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatsSystem.hpp>

namespace RED4ext
{
namespace game { 
struct StatsSystem : game::IStatsSystem
{
    static constexpr const char* NAME = "gameStatsSystem";
    static constexpr const char* ALIAS = "StatsSystem";

    uint8_t unk48[0x518 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatsSystem, 0x518);
} // namespace game
using StatsSystem = game::StatsSystem;
} // namespace RED4ext
