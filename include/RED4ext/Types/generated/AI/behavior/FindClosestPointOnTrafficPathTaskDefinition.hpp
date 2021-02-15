#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior { 
struct FindClosestPointOnTrafficPathTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorFindClosestPointOnTrafficPathTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> positionOnPath; // 38
    Handle<AI::ArgumentMapping> enterClosest; // 48
    Handle<AI::ArgumentMapping> pathDirection; // 58
    Handle<AI::ArgumentMapping> avoidedPosition; // 68
    Handle<AI::ArgumentMapping> avoidedPositionDistance; // 78
    Handle<AI::ArgumentMapping> usePreviousPosition; // 88
    Handle<AI::ArgumentMapping> checkRoadIntersection; // 98
    Handle<AI::ArgumentMapping> joinTrafficSettings; // A8
};
RED4EXT_ASSERT_SIZE(FindClosestPointOnTrafficPathTaskDefinition, 0xB8);
} // namespace AI::behavior
} // namespace RED4ext
