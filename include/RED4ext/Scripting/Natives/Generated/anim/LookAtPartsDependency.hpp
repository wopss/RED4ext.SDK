#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtPartsDependency
{
    static constexpr const char* NAME = "animLookAtPartsDependency";
    static constexpr const char* ALIAS = "LookAtPartsDependency";

    CName masterPart; // 00
    CName slavePart; // 08
    float angle; // 10
    float speedToTargetFactor; // 14
    CurveData<float> speedToTargetByAngleCurve; // 18
    float verticalPullSpeedFactor; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    CurveData<float> verticalPullSpeedByAngleCurve; // 58
    float horizontalPullSpeedFactor; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
    CurveData<float> horizontalPullSpeedByAngleCurve; // 98
    float pullScaleBySquareSizeFactor; // D0
    uint8_t unkD4[0xD8 - 0xD4]; // D4
    CurveData<float> pullScaleBySquareSizeCurve; // D8
    float innerSquareScale; // 110
    uint8_t unk114[0x118 - 0x114]; // 114
};
RED4EXT_ASSERT_SIZE(LookAtPartsDependency, 0x118);
} // namespace anim
using animLookAtPartsDependency = anim::LookAtPartsDependency;
using LookAtPartsDependency = anim::LookAtPartsDependency;
} // namespace RED4ext

// clang-format on
