#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct SpiralParams : IScriptable
{
    static constexpr const char* NAME = "gameprojectileSpiralParams";
    static constexpr const char* ALIAS = "SpiralControllerParams";

    bool enabled; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    float radius; // 44
    float cycleTimeMin; // 48
    float cycleTimeMax; // 4C
    float rampUpDistanceStart; // 50
    float rampUpDistanceEnd; // 54
    float rampDownDistanceStart; // 58
    float rampDownDistanceEnd; // 5C
    float rampDownFactor; // 60
    bool randomizePhase; // 64
    bool randomizeDirection; // 65
    uint8_t unk66[0x68 - 0x66]; // 66
};
RED4EXT_ASSERT_SIZE(SpiralParams, 0x68);
} // namespace game::projectile
using gameprojectileSpiralParams = game::projectile::SpiralParams;
using SpiralControllerParams = game::projectile::SpiralParams;
} // namespace RED4ext

// clang-format on
