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
struct ClearActiveNodesDebuggerCommand : AI::behavior::IDebuggerCommand
{
    static constexpr const char* NAME = "AIbehaviorClearActiveNodesDebuggerCommand";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ClearActiveNodesDebuggerCommand, 0x30);
} // namespace AI::behavior
using AIbehaviorClearActiveNodesDebuggerCommand = AI::behavior::ClearActiveNodesDebuggerCommand;
} // namespace RED4ext

// clang-format on
