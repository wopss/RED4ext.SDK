#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DebugNodeStatus.hpp>

namespace RED4ext
{
namespace game::debug { struct Failure; }

namespace AI::behavior
{
struct NodeStatusDebuggerCommandEntry
{
    static constexpr const char* NAME = "AIbehaviorNodeStatusDebuggerCommandEntry";
    static constexpr const char* ALIAS = NAME;

    CGUID nodeId; // 00
    AI::behavior::DebugNodeStatus status; // 10
    uint8_t unk11[0x14 - 0x11]; // 11
    uint32_t generation; // 14
    Handle<game::debug::Failure> failure; // 18
};
RED4EXT_ASSERT_SIZE(NodeStatusDebuggerCommandEntry, 0x28);
} // namespace AI::behavior
using AIbehaviorNodeStatusDebuggerCommandEntry = AI::behavior::NodeStatusDebuggerCommandEntry;
} // namespace RED4ext

// clang-format on
