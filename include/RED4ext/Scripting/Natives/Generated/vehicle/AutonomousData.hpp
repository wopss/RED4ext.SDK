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
    float rubberBandingTargetForwardOffset; // 128
    float rubberBandingMinDistance; // 12C
    float rubberBandingMaxDistance; // 130
    bool rubberBandingStopAndWait; // 134
    bool rubberBandingTeleportToCatchUp; // 135
    bool rubberBandingStayInFront; // 136
    uint8_t unk137[0x148 - 0x137]; // 137
    float secureTimeOut; // 148
    uint8_t unk14C[0x150 - 0x14C]; // 14C
    Handle<vehicle::PortalsList> portalsList; // 150
    bool trafficTryNeighborsForStart; // 160
    bool trafficTryNeighborsForEnd; // 161
    bool ignoreNoAIDrivingLanes; // 162
    uint8_t unk163[0x164 - 0x163]; // 163
    bool allowSimplifiedMovement; // 164
    bool ignoreTickets; // 165
    bool disableStuckDetection; // 166
    bool useSpeedBasedLookupRange; // 167
    bool tryDriveAwayFromPlayer; // 168
    uint8_t unk169[0x174 - 0x169]; // 169
    bool clearTrafficOnPath; // 174
    uint8_t unk175[0x1A8 - 0x175]; // 175
    bool emergencyPatrol; // 1A8
    uint8_t unk1A9[0x1AC - 0x1A9]; // 1A9
    uint32_t numPatrolLoops; // 1AC
    bool aggressiveRammingEnabled; // 1B0
    bool ignoreChaseVehiclesLimit; // 1B1
    bool boostDrivingStats; // 1B2
    uint8_t unk1B3[0x1C0 - 0x1B3]; // 1B3
};
RED4EXT_ASSERT_SIZE(AutonomousData, 0x1C0);
} // namespace vehicle
using vehicleAutonomousData = vehicle::AutonomousData;
} // namespace RED4ext

// clang-format on
