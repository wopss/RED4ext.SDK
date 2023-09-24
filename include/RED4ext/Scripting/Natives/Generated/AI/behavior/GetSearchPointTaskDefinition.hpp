#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct GetSearchPointTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorGetSearchPointTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> inPlayerPositionDelay; // 38
    Handle<AI::ArgumentMapping> inSearchPositionMaxRadius; // 48
    Handle<AI::ArgumentMapping> inNearestNavmeshPolyExtent; // 58
    Handle<AI::ArgumentMapping> inPavementsOnly; // 68
    Handle<AI::ArgumentMapping> inLastKnownPosition; // 78
    Handle<AI::ArgumentMapping> outSearchPosition; // 88
};
RED4EXT_ASSERT_SIZE(GetSearchPointTaskDefinition, 0x98);
} // namespace AI::behavior
using AIbehaviorGetSearchPointTaskDefinition = AI::behavior::GetSearchPointTaskDefinition;
} // namespace RED4ext

// clang-format on
