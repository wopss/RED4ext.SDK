#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>

namespace RED4ext
{
namespace game
{
struct StatsComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "gameStatsComponentPS";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(StatsComponentPS, 0x78);
} // namespace game
using gameStatsComponentPS = game::StatsComponentPS;
} // namespace RED4ext

// clang-format on
