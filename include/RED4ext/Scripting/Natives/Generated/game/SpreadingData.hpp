#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct SpreadingData
{
    static constexpr const char* NAME = "gameSpreadingData";
    static constexpr const char* ALIAS = "SpreadingData";

    uint32_t count; // 00
    uint32_t targets; // 04
    float damageMultiplier; // 08
    float range; // 0C
    float coneAngle; // 10
};
RED4EXT_ASSERT_SIZE(SpreadingData, 0x14);
} // namespace game
using gameSpreadingData = game::SpreadingData;
using SpreadingData = game::SpreadingData;
} // namespace RED4ext

// clang-format on
