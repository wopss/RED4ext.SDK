#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct StatsUnit : ISerializable
{
    static constexpr const char* NAME = "gameStatsUnit";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x80 - 0x30]; // 30
    TweakDBID recordID; // 80
    uint8_t unk88[0x90 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(StatsUnit, 0x90);
} // namespace game
using gameStatsUnit = game::StatsUnit;
} // namespace RED4ext

// clang-format on
