#pragma once

// clang-format off

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

namespace move
{
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
    uint8_t unk144[0x150 - 0x144]; // 144
    move::CirclingDirection circlingDirection; // 150
    bool stopOnObstacle; // 154
    bool avoidObstacleWithinTolerance; // 155
    bool useCollisionAvoidance; // 156
    bool useDestReservation; // 157
    uint8_t unk158[0x159 - 0x158]; // 158
    bool inRestrictedArea; // 159
    uint8_t unk15A[0x168 - 0x15A]; // 15A
    bool isSpline; // 168
    uint8_t unk169[0x16A - 0x169]; // 169
    bool startFromClosestPoint; // 16A
    uint8_t unk16B[0x180 - 0x16B]; // 16B
    bool ignoreNavigation; // 180
    bool useStart; // 181
    bool useStop; // 182
    uint8_t unk183[0x184 - 0x183]; // 183
    bool isEvaluated; // 184
    uint8_t unk185[0x18C - 0x185]; // 185
    bool useOffMeshAllowedTags; // 18C
    bool useOffMeshBlockedTags; // 18D
    uint8_t unk18E[0x228 - 0x18E]; // 18E
};
RED4EXT_ASSERT_SIZE(Policies, 0x228);
} // namespace move
using movePolicies = move::Policies;
using MovePolicies = move::Policies;
} // namespace RED4ext

// clang-format on
