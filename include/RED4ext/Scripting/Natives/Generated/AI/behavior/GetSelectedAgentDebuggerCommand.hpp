#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/IDebuggerCommand.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct GetSelectedAgentDebuggerCommand : AI::behavior::IDebuggerCommand
{
    static constexpr const char* NAME = "AIbehaviorGetSelectedAgentDebuggerCommand";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(GetSelectedAgentDebuggerCommand, 0x30);
} // namespace AI::behavior
using AIbehaviorGetSelectedAgentDebuggerCommand = AI::behavior::GetSelectedAgentDebuggerCommand;
} // namespace RED4ext

// clang-format on
