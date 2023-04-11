#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace quest
{
struct AnimMoveOnSplineParams
{
    static constexpr const char* NAME = "questAnimMoveOnSplineParams";
    static constexpr const char* ALIAS = NAME;

    CName controllersSetupName; // 00
    float blendTime; // 08
    float globalInBlendTime; // 0C
    float globalOutBlendTime; // 10
    bool turnCharacterToMatchVelocity; // 14
    uint8_t unk15[0x18 - 0x15]; // 15
    CName customStartAnimationName; // 18
    CName customMainAnimationName; // 20
    CName customStopAnimationName; // 28
    bool startSnapToTerrain; // 30
    bool mainSnapToTerrain; // 31
    bool stopSnapToTerrain; // 32
    uint8_t unk33[0x34 - 0x33]; // 33
    float startSnapToTerrainBlendTime; // 34
    float stopSnapToTerrainBlendTime; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(AnimMoveOnSplineParams, 0x40);
} // namespace quest
using questAnimMoveOnSplineParams = quest::AnimMoveOnSplineParams;
} // namespace RED4ext

// clang-format on
