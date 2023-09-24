#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct ActionMoveOnSplineNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionMoveOnSplineNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> spline; // 40
    Handle<AI::ArgumentMapping> strafingTarget; // 50
    Handle<AI::ArgumentMapping> movementType; // 60
    Handle<AI::ArgumentMapping> ignoreNavigation; // 70
    Handle<AI::ArgumentMapping> snapToTerrain; // 80
    Handle<AI::ArgumentMapping> rotateEntity; // 90
    Handle<AI::ArgumentMapping> startFromClosestPoint; // A0
    Handle<AI::ArgumentMapping> splineRecalculation; // B0
    Handle<AI::ArgumentMapping> useStart; // C0
    Handle<AI::ArgumentMapping> useStop; // D0
    Handle<AI::ArgumentMapping> reverse; // E0
    uint8_t unkF0[0x100 - 0xF0]; // F0
    Handle<AI::ArgumentMapping> isBackAndForth; // 100
    Handle<AI::ArgumentMapping> isInfinite; // 110
    Handle<AI::ArgumentMapping> numberOfLoops; // 120
    Handle<AI::ArgumentMapping> useOffMeshLinkReservation; // 130
    Handle<AI::ArgumentMapping> disableFootIK; // 140
    Handle<AI::ArgumentMapping> allowCrowdOnPath; // 150
};
RED4EXT_ASSERT_SIZE(ActionMoveOnSplineNodeDefinition, 0x160);
} // namespace AI::behavior
using AIbehaviorActionMoveOnSplineNodeDefinition = AI::behavior::ActionMoveOnSplineNodeDefinition;
} // namespace RED4ext

// clang-format on
