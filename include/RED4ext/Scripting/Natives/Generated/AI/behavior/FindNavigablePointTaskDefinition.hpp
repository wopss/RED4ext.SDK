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
struct FindNavigablePointTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorFindNavigablePointTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> destination; // 38
    Handle<AI::ArgumentMapping> outAdjustedDestination; // 48
    Handle<AI::ArgumentMapping> outWasAdjusted; // 58
};
RED4EXT_ASSERT_SIZE(FindNavigablePointTaskDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorFindNavigablePointTaskDefinition = AI::behavior::FindNavigablePointTaskDefinition;
} // namespace RED4ext

// clang-format on
