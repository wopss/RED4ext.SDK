#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/AI/behavior/IDebuggerCommand.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct ClearActiveNodesDebuggerCommand : AI::behavior::IDebuggerCommand
{
    static constexpr const char* NAME = "AIbehaviorClearActiveNodesDebuggerCommand";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ClearActiveNodesDebuggerCommand, 0x30);
} // namespace AI::behavior
} // namespace RED4ext
