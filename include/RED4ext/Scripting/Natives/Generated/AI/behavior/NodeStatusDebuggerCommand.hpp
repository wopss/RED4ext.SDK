#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/IDebuggerCommand.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/NodeStatusDebuggerCommandEntry.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct NodeStatusDebuggerCommand : AI::behavior::IDebuggerCommand
{
    static constexpr const char* NAME = "AIbehaviorNodeStatusDebuggerCommand";
    static constexpr const char* ALIAS = NAME;

    uint32_t behaviorResourceHash; // 30
    uint32_t generation; // 34
    DynArray<AI::behavior::NodeStatusDebuggerCommandEntry> entries; // 38
};
RED4EXT_ASSERT_SIZE(NodeStatusDebuggerCommand, 0x48);
} // namespace AI::behavior
using AIbehaviorNodeStatusDebuggerCommand = AI::behavior::NodeStatusDebuggerCommand;
} // namespace RED4ext

// clang-format on
