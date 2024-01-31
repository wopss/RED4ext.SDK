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
namespace vehicle { struct PortalsList; }

namespace AI
{
struct VehicleToNodeCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleToNodeCommand";
    static constexpr const char* ALIAS = NAME;

    NodeRef nodeRef; // 68
    bool stopAtPathEnd; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    float secureTimeOut; // 74
    bool isPlayer; // 78
    bool useTraffic; // 79
    uint8_t unk7A[0x7C - 0x7A]; // 7A
    float speedInTraffic; // 7C
    bool forceGreenLights; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
    Handle<vehicle::PortalsList> portals; // 88
    bool trafficTryNeighborsForStart; // 98
    bool trafficTryNeighborsForEnd; // 99
    bool ignoreNoAIDrivingLanes; // 9A
    uint8_t unk9B[0xA0 - 0x9B]; // 9B
};
RED4EXT_ASSERT_SIZE(VehicleToNodeCommand, 0xA0);
} // namespace AI
using AIVehicleToNodeCommand = AI::VehicleToNodeCommand;
} // namespace RED4ext

// clang-format on
