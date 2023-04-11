#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior::task { struct StackScript; }

namespace AI::behavior
{
struct StackScriptTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorStackScriptTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::task::StackScript> script; // 38
};
RED4EXT_ASSERT_SIZE(StackScriptTaskDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorStackScriptTaskDefinition = AI::behavior::StackScriptTaskDefinition;
} // namespace RED4ext

// clang-format on
