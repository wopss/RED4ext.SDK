#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/AgentInfoDebuggerCommandEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/IDebuggerCommand.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct AgentInfoDebuggerCommand : AI::behavior::IDebuggerCommand
{
    static constexpr const char* NAME = "AIbehaviorAgentInfoDebuggerCommand";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID entityId; // 30
    CString agentName; // 38
    bool isSelected; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
    DynArray<AI::behavior::AgentInfoDebuggerCommandEntry> entries; // 60
};
RED4EXT_ASSERT_SIZE(AgentInfoDebuggerCommand, 0x70);
} // namespace AI::behavior
using AIbehaviorAgentInfoDebuggerCommand = AI::behavior::AgentInfoDebuggerCommand;
} // namespace RED4ext

// clang-format on
