#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace vehicle { struct BaseObject; }
namespace vehicle { struct PortalsList; }

namespace vehicle
{
struct AutonomousData : ISerializable
{
    static constexpr const char* NAME = "vehicleAutonomousData";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<vehicle::BaseObject> owner; // 30
    bool useKinematic; // 40
    bool needDriver; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
    WeakHandle<game::Object> targetObjToReach; // 48
    WeakHandle<game::Object> targetObjToFollow; // 58
    NodeRef targetRef; // 68
    NodeRef splineRef; // 70
    NodeRef splineRefBackwards; // 78
    game::EntityReference vehicleRef; // 80
    Vector3 targetPosition; // B8
    uint8_t unkC4[0xD8 - 0xC4]; // C4
    TweakDBID drivingID; // D8
    float distanceMin; // E0
    float distanceMax; // E4
    bool wantToStop; // E8
    uint8_t unkE9[0xEB - 0xE9]; // E9
    bool stopHasReachedTarget; // EB
    bool driveBackwards; // EC
    bool reverseSpline; // ED
    bool startFromClosest; // EE
    uint8_t unkEF[0xFC - 0xEF]; // EF
    bool canClearActions; // FC
    uint8_t unkFD[0xFE - 0xFD]; // FD
    bool keepDistanceParamBool; // FE
    uint8_t unkFF[0x100 - 0xFF]; // FF
    WeakHandle<game::Object> keepDistanceParamCompanion; // 100
    float keepDistanceParamDistance; // 110
    bool rubberBandingBool; // 114
    uint8_t unk115[0x118 - 0x115]; // 115
    WeakHandle<game::Object> rubberBandingTargetRef; // 118
    float rubberBandingMinDistance; // 128
    float rubberBandingMaxDistance; // 12C
    bool rubberBandingStopAndWait; // 130
    bool rubberBandingTeleportToCatchUp; // 131
    bool rubberBandingStayInFront; // 132
    uint8_t unk133[0x148 - 0x133]; // 133
    float secureTimeOut; // 148
    uint8_t unk14C[0x150 - 0x14C]; // 14C
    Handle<vehicle::PortalsList> portalsList; // 150
    bool trafficTryNeighborsForStart; // 160
    bool trafficTryNeighborsForEnd; // 161
    uint8_t unk162[0x163 - 0x162]; // 162
    bool allowSimplifiedMovement; // 163
    bool ignoreTickets; // 164
    bool disableStuckDetection; // 165
    bool useSpeedBasedLookupRange; // 166
    bool tryDriveAwayFromPlayer; // 167
    uint8_t unk168[0x170 - 0x168]; // 168
    bool clearTrafficOnPath; // 170
    uint8_t unk171[0x1A0 - 0x171]; // 171
    bool emergencyPatrol; // 1A0
    uint8_t unk1A1[0x1A4 - 0x1A1]; // 1A1
    uint32_t numPatrolLoops; // 1A4
    bool aggressiveRammingEnabled; // 1A8
    bool ignoreChaseVehiclesLimit; // 1A9
    bool boostDrivingStats; // 1AA
    uint8_t unk1AB[0x1B0 - 0x1AB]; // 1AB
};
RED4EXT_ASSERT_SIZE(AutonomousData, 0x1B0);
} // namespace vehicle
using vehicleAutonomousData = vehicle::AutonomousData;
} // namespace RED4ext

// clang-format on
