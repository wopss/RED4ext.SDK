#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/VehicleCommand.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace vehicle { struct AudioCurvesParam; }

namespace AI
{
struct VehicleOnSplineCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleOnSplineCommand";
    static constexpr const char* ALIAS = NAME;

    NodeRef splineRef; // 68
    float secureTimeOut; // 70
    bool driveBackwards; // 74
    bool reverseSpline; // 75
    bool startFromClosest; // 76
    uint8_t unk77[0x78 - 0x77]; // 77
    float forcedStartSpeed; // 78
    bool stopAtPathEnd; // 7C
    bool keepDistanceBool; // 7D
    uint8_t unk7E[0x80 - 0x7E]; // 7E
    WeakHandle<game::Object> keepDistanceCompanion; // 80
    float keepDistanceDistance; // 90
    bool rubberBandingBool; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
    WeakHandle<game::Object> rubberBandingTargetRef; // 98
    float rubberBandingTargetForwardOffset; // A8
    float rubberBandingMinDistance; // AC
    float rubberBandingMaxDistance; // B0
    bool rubberBandingStopAndWait; // B4
    bool rubberBandingTeleportToCatchUp; // B5
    bool rubberBandingStayInFront; // B6
    uint8_t unkB7[0xB8 - 0xB7]; // B7
    WeakHandle<vehicle::AudioCurvesParam> audioCurvesParam; // B8
};
RED4EXT_ASSERT_SIZE(VehicleOnSplineCommand, 0xC8);
} // namespace AI
using AIVehicleOnSplineCommand = AI::VehicleOnSplineCommand;
} // namespace RED4ext

// clang-format on
