#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct StatsBundle
{
    static constexpr const char* NAME = "gameStatsBundle";
    static constexpr const char* ALIAS = "StatsBundle";

    uint8_t unk00[0x170 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(StatsBundle, 0x170);
} // namespace game
using StatsBundle = game::StatsBundle;
} // namespace RED4ext
