#pragma once

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

namespace vehicle { 
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
    uint8_t unkE9[0xEA - 0xE9]; // E9
    bool stopHasReachedTarget; // EA
    bool driveBackwards; // EB
    bool reverseSpline; // EC
    bool startFromClosest; // ED
    uint8_t unkEE[0xFC - 0xEE]; // EE
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
    uint8_t unk133[0x134 - 0x133]; // 133
    float secureTimeOut; // 134
    Handle<vehicle::PortalsList> portalsList; // 138
    bool trafficTryNeighborsForStart; // 148
    bool trafficTryNeighborsForEnd; // 149
    uint8_t unk14A[0x150 - 0x14A]; // 14A
};
RED4EXT_ASSERT_SIZE(AutonomousData, 0x150);
} // namespace vehicle
} // namespace RED4ext
