#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/BehaviorInstanceCallStack.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct AgentInfoDebuggerCommandEntry
{
    static constexpr const char* NAME = "AIbehaviorAgentInfoDebuggerCommandEntry";
    static constexpr const char* ALIAS = NAME;

    AI::behavior::BehaviorInstanceCallStack callStack; // 00
    CString behaviorResourcePath; // 18
};
RED4EXT_ASSERT_SIZE(AgentInfoDebuggerCommandEntry, 0x38);
} // namespace AI::behavior
using AIbehaviorAgentInfoDebuggerCommandEntry = AI::behavior::AgentInfoDebuggerCommandEntry;
} // namespace RED4ext

// clang-format on
