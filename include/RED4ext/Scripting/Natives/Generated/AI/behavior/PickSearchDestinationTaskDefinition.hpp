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
struct PickSearchDestinationTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorPickSearchDestinationTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> destinationPosition; // 38
    Handle<AI::ArgumentMapping> desiredDistance; // 48
    Handle<AI::ArgumentMapping> maxDistance; // 58
    Handle<AI::ArgumentMapping> clearedAreaRadius; // 68
    Handle<AI::ArgumentMapping> clearedAreaDistance; // 78
    Handle<AI::ArgumentMapping> clearedAreaAngle; // 88
    Handle<AI::ArgumentMapping> ignoreRestrictMovementArea; // 98
};
RED4EXT_ASSERT_SIZE(PickSearchDestinationTaskDefinition, 0xA8);
} // namespace AI::behavior
using AIbehaviorPickSearchDestinationTaskDefinition = AI::behavior::PickSearchDestinationTaskDefinition;
} // namespace RED4ext

// clang-format on
