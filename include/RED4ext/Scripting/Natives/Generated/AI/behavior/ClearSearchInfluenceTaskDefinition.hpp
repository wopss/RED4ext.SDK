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
struct ClearSearchInfluenceTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorClearSearchInfluenceTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> clearedAreaRadius; // 38
    Handle<AI::ArgumentMapping> clearedAreaDistance; // 48
    Handle<AI::ArgumentMapping> clearedAreaAngle; // 58
};
RED4EXT_ASSERT_SIZE(ClearSearchInfluenceTaskDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorClearSearchInfluenceTaskDefinition = AI::behavior::ClearSearchInfluenceTaskDefinition;
} // namespace RED4ext

// clang-format on
