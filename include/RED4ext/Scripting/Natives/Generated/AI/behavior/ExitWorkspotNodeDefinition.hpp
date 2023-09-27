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
struct ExitWorkspotNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorExitWorkspotNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> skipExitAnimation; // 40
    Handle<AI::ArgumentMapping> useSlowExitAnimation; // 50
    Handle<AI::ArgumentMapping> doSlowIfFastExitFails; // 60
    Handle<AI::ArgumentMapping> stayInWorkspotIfExitFails; // 70
    Handle<AI::ArgumentMapping> tryBlendFastExitToWalk; // 80
    Handle<AI::ArgumentMapping> dontRequestExit; // 90
    Handle<AI::ArgumentMapping> cancelQueuedCommand; // A0
    Handle<AI::ArgumentMapping> target; // B0
};
RED4EXT_ASSERT_SIZE(ExitWorkspotNodeDefinition, 0xC0);
} // namespace AI::behavior
using AIbehaviorExitWorkspotNodeDefinition = AI::behavior::ExitWorkspotNodeDefinition;
} // namespace RED4ext

// clang-format on
