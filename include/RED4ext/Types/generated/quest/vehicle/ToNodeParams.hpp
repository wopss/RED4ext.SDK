#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/quest/VehicleSpecificCommandParams.hpp>

namespace RED4ext
{
namespace vehicle { struct PortalsList; }

namespace quest::vehicle { 
struct ToNodeParams : quest::VehicleSpecificCommandParams
{
    static constexpr const char* NAME = "questvehicleToNodeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef nodeRef; // 38
    bool stopAtEnd; // 40
    bool isPlayer; // 41
    bool useTraffic; // 42
    uint8_t unk43[0x44 - 0x43]; // 43
    float speedInTraffic; // 44
    bool forceGreenLights; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    Handle<vehicle::PortalsList> portals; // 50
    bool trafficTryNeighborsForStart; // 60
    bool trafficTryNeighborsForEnd; // 61
    uint8_t unk62[0x68 - 0x62]; // 62
};
RED4EXT_ASSERT_SIZE(ToNodeParams, 0x68);
} // namespace quest::vehicle
} // namespace RED4ext
