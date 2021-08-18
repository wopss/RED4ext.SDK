#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { 
struct StatsUnit : ISerializable
{
    static constexpr const char* NAME = "gameStatsUnit";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x70 - 0x30]; // 30
    TweakDBID recordID; // 70
    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(StatsUnit, 0x80);
} // namespace game
} // namespace RED4ext
