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
namespace quest { struct ParamKeepDistance; }
namespace quest { struct ParamRubberbanding; }
namespace vehicle { struct AudioCurvesParam; }

namespace quest::vehicle
{
struct OnSplineParams : quest::VehicleSpecificCommandParams
{
    static constexpr const char* NAME = "questvehicleOnSplineParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef splineRef; // 38
    uint8_t unk40[0x44 - 0x40]; // 40
    bool reverseSpline; // 44
    bool backwards; // 45
    bool closest; // 46
    uint8_t unk47[0x48 - 0x47]; // 47
    float forcedStartSpeed; // 48
    bool stopAtEnd; // 4C
    bool keepDistance; // 4D
    uint8_t unk4E[0x50 - 0x4E]; // 4E
    Handle<quest::ParamKeepDistance> keepDistanceParam; // 50
    bool rubberBanding; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
    Handle<quest::ParamRubberbanding> rubberBandingParam; // 68
    Handle<vehicle::AudioCurvesParam> audioCurvesParam; // 78
};
RED4EXT_ASSERT_SIZE(OnSplineParams, 0x88);
} // namespace quest::vehicle
using questvehicleOnSplineParams = quest::vehicle::OnSplineParams;
} // namespace RED4ext

// clang-format on
