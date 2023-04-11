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
struct PredictTargetMovementDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorPredictTargetMovementDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> target; // 38
    Handle<AI::ArgumentMapping> timeInterval; // 48
    Handle<AI::ArgumentMapping> result; // 58
};
RED4EXT_ASSERT_SIZE(PredictTargetMovementDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorPredictTargetMovementDefinition = AI::behavior::PredictTargetMovementDefinition;
} // namespace RED4ext

// clang-format on
