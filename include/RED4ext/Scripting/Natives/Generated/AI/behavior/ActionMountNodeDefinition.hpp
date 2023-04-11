#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionMountHandlingNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct ActionMountNodeDefinition : AI::behavior::ActionMountHandlingNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionMountNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> mountData; // 40
};
RED4EXT_ASSERT_SIZE(ActionMountNodeDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorActionMountNodeDefinition = AI::behavior::ActionMountNodeDefinition;
} // namespace RED4ext

// clang-format on
