#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/VehicleSpecificCommandParams.hpp>

namespace RED4ext
{
namespace quest { struct ParamRubberbanding; }

namespace quest::vehicle
{
struct RacingParams : quest::VehicleSpecificCommandParams
{
    static constexpr const char* NAME = "questvehicleRacingParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef splineRef; // 38
    float preciseLevel; // 40
    bool reverseSpline; // 44
    bool backwards; // 45
    bool closest; // 46
    bool rubberBanding; // 47
    Handle<quest::ParamRubberbanding> rubberBandingParam; // 48
};
RED4EXT_ASSERT_SIZE(RacingParams, 0x58);
} // namespace quest::vehicle
using questvehicleRacingParams = quest::vehicle::RacingParams;
} // namespace RED4ext

// clang-format on
