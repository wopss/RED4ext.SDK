#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/MovementTypeSpec.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/CompanionDistancePreset.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CompanionPositions.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/InterruptCapability.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct WithCompanionMoveOnSplineParams
{
    static constexpr const char* NAME = "questWithCompanionMoveOnSplineParams";
    static constexpr const char* ALIAS = NAME;

    AI::MovementTypeSpec movementType; // 00
    Handle<quest::UniversalRef> facingTargetRef; // 08
    bool rotateEntityTowardsFacingTarget; // 18
    bool snapToTerrain; // 19
    uint8_t unk1A[0x20 - 0x1A]; // 1A
    Handle<quest::UniversalRef> shootingTargetRef; // 20
    Handle<quest::UniversalRef> companionRef; // 30
    game::data::CompanionDistancePreset companionDistancePreset; // 40
    quest::CompanionPositions companionPosition; // 44
    bool catchUpWithCompanion; // 48
    bool teleportToCompanion; // 49
    bool useMatchForSpeedForPlayer; // 4A
    bool ignoreNavigation; // 4B
    bool ignoreLineOfSightCheck; // 4C
    bool useOffMeshLinkReservation; // 4D
    uint8_t unk4E[0x50 - 0x4E]; // 4E
    Handle<quest::UniversalRef> lookAtTargetRef; // 50
    float minSearchAngle; // 60
    float maxSearchAngle; // 64
    scn::InterruptCapability interruptCapability; // 68
    float maxCompanionDistanceOnSpline; // 6C
};
RED4EXT_ASSERT_SIZE(WithCompanionMoveOnSplineParams, 0x70);
} // namespace quest
using questWithCompanionMoveOnSplineParams = quest::WithCompanionMoveOnSplineParams;
} // namespace RED4ext

// clang-format on
