#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/BehaviorIncludedDebuggerCommandEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/IDebuggerCommand.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct BehaviorIncludedDebuggerCommand : AI::behavior::IDebuggerCommand
{
    static constexpr const char* NAME = "AIbehaviorBehaviorIncludedDebuggerCommand";
    static constexpr const char* ALIAS = NAME;

    DynArray<AI::behavior::BehaviorIncludedDebuggerCommandEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(BehaviorIncludedDebuggerCommand, 0x40);
} // namespace AI::behavior
using AIbehaviorBehaviorIncludedDebuggerCommand = AI::behavior::BehaviorIncludedDebuggerCommand;
} // namespace RED4ext

// clang-format on
