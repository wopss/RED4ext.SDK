#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct RicochetData
{
    static constexpr const char* NAME = "gameRicochetData";
    static constexpr const char* ALIAS = "RicochetData";

    int32_t count; // 00
    float range; // 04
    float targetSearchAngle; // 08
    float minAngle; // 0C
    float maxAngle; // 10
    float chance; // 14
};
RED4EXT_ASSERT_SIZE(RicochetData, 0x18);
} // namespace game
using gameRicochetData = game::RicochetData;
using RicochetData = game::RicochetData;
} // namespace RED4ext

// clang-format on
