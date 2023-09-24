#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct StatsBundle
{
    static constexpr const char* NAME = "gameStatsBundle";
    static constexpr const char* ALIAS = "StatsBundle";

    uint8_t unk00[0x180 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(StatsBundle, 0x180);
} // namespace game
using gameStatsBundle = game::StatsBundle;
using StatsBundle = game::StatsBundle;
} // namespace RED4ext

// clang-format on
