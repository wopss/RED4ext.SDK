#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ObjectId.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/CirclingDirection.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/StrafingTarget.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace game { struct SetupWorkspotActionEvent; }

namespace move { 
struct Policies : IScriptable
{
    static constexpr const char* NAME = "movePolicies";
    static constexpr const char* ALIAS = "MovePolicies";

    Vector3 destination; // 40
    Vector3 destinationTangent; // 4C
    Vector3 startTangent; // 58
    uint8_t unk64[0x68 - 0x64]; // 64
    AI::ObjectId targetSmartObject; // 68
    uint64_t targetSmartObjectHash; // 70
    Handle<game::SetupWorkspotActionEvent> targetWorkspot; // 78
    WeakHandle<game::Object> targetObject; // 88
    move::StrafingTarget strafingTarget; // 98
    bool useFollowSlots; // C0
    uint8_t unkC1[0xC4 - 0xC1]; // C1
    StaticArray<Vector3, 4> followSlotOverrides; // C4
    bool hasLocalTargetOffset; // F8
    uint8_t unkF9[0xFC - 0xF9]; // F9
    Vector3 localTargetOffset; // FC
    float desiredDistance; // 108
    float minMovementDistance; // 10C
    uint8_t unk110[0x114 - 0x110]; // 110
    float toleranceRadius; // 114
    float minFollowerDistance; // 118
    float maxFollowerDistance; // 11C
    float strafingRotationOffset; // 120
    uint8_t unk124[0x140 - 0x124]; // 124
    move::MovementType movementType; // 140
    uint8_t unk144[0x14C - 0x144]; // 144
    move::CirclingDirection circlingDirection; // 14C
    bool stopOnObstacle; // 150
    bool avoidObstacleWithinTolerance; // 151
    bool useCollisionAvoidance; // 152
    bool useDestReservation; // 153
    uint8_t unk154[0x155 - 0x154]; // 154
    bool inRestrictedArea; // 155
    uint8_t unk156[0x164 - 0x156]; // 156
    bool isSpline; // 164
    uint8_t unk165[0x166 - 0x165]; // 165
    bool startFromClosestPoint; // 166
    uint8_t unk167[0x178 - 0x167]; // 167
    bool ignoreNavigation; // 178
    bool useStart; // 179
    bool useStop; // 17A
    uint8_t unk17B[0x17C - 0x17B]; // 17B
    bool isEvaluated; // 17C
    uint8_t unk17D[0x184 - 0x17D]; // 17D
    bool useOffMeshAllowedTags; // 184
    bool useOffMeshBlockedTags; // 185
    uint8_t unk186[0x220 - 0x186]; // 186
};
RED4EXT_ASSERT_SIZE(Policies, 0x220);
} // namespace move
using MovePolicies = move::Policies;
} // namespace RED4ext
