#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatIDType.hpp>

namespace RED4ext
{
namespace game
{
struct StatsObjectID
{
    static constexpr const char* NAME = "gameStatsObjectID";
    static constexpr const char* ALIAS = "StatsObjectID";

    uint64_t entityHash; // 00
    game::StatIDType idType; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(StatsObjectID, 0x10);
} // namespace game
using gameStatsObjectID = game::StatsObjectID;
using StatsObjectID = game::StatsObjectID;
} // namespace RED4ext

// clang-format on
