#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/MoveCommand.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/MovementTypeSpec.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace AI
{
struct MoveOnSplineCommand : AI::MoveCommand
{
    static constexpr const char* NAME = "AIMoveOnSplineCommand";
    static constexpr const char* ALIAS = NAME;

    NodeRef spline; // 68
    AI::MovementTypeSpec movementType; // 70
    bool rotateEntityTowardsFacingTarget; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    WeakHandle<game::Object> facingTarget; // 80
    WeakHandle<game::Object> shootingTarget; // 90
    WeakHandle<game::Object> companion; // A0
    float desiredDistance; // B0
    float deadZoneRadius; // B4
    bool catchUpWithCompanion; // B8
    bool teleportToCompanion; // B9
    bool useMatchForSpeedForPlayer; // BA
    bool startFromClosestPoint; // BB
    bool splineRecalculation; // BC
    bool ignoreNavigation; // BD
    bool snapToTerrain; // BE
    bool ignoreLineOfSightCheck; // BF
    bool useAlertedState; // C0
    bool useStart; // C1
    bool useStop; // C2
    bool useCombatState; // C3
    bool reverse; // C4
    bool useOMLReservation; // C5
    bool disableFootIK; // C6
    bool allowCrowdOnPath; // C7
    WeakHandle<game::Object> lookAtTarget; // C8
    float minSearchAngle; // D8
    float maxSearchAngle; // DC
    float noWaitToEndDistance; // E0
    float noWaitToEndCompanionDistance; // E4
    float maxCompanionDistanceOnSpline; // E8
    uint8_t unkEC[0xF0 - 0xEC]; // EC
};
RED4EXT_ASSERT_SIZE(MoveOnSplineCommand, 0xF0);
} // namespace AI
using AIMoveOnSplineCommand = AI::MoveOnSplineCommand;
} // namespace RED4ext

// clang-format on
