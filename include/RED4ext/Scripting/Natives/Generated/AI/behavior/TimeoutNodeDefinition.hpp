#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct TimeoutNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorTimeoutNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> time; // 40
};
RED4EXT_ASSERT_SIZE(TimeoutNodeDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorTimeoutNodeDefinition = AI::behavior::TimeoutNodeDefinition;
} // namespace RED4ext

// clang-format on
