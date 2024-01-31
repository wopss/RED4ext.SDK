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

namespace AI
{
struct VehicleRacingCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleRacingCommand";
    static constexpr const char* ALIAS = NAME;

    NodeRef splineRef; // 68
    float secureTimeOut; // 70
    bool reverseSpline; // 74
    bool driveBackwards; // 75
    bool startFromClosest; // 76
    bool rubberBandingBool; // 77
    WeakHandle<game::Object> rubberBandingTargetRef; // 78
    float rubberBandingTargetForwardOffset; // 88
    float rubberBandingMinDistance; // 8C
    float rubberBandingMaxDistance; // 90
    bool rubberBandingStopAndWait; // 94
    bool rubberBandingTeleportToCatchUp; // 95
    bool rubberBandingStayInFront; // 96
    uint8_t unk97[0x98 - 0x97]; // 97
};
RED4EXT_ASSERT_SIZE(VehicleRacingCommand, 0x98);
} // namespace AI
using AIVehicleRacingCommand = AI::VehicleRacingCommand;
} // namespace RED4ext

// clang-format on
