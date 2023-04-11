#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct BehaviorIncludedDebuggerCommandEntry
{
    static constexpr const char* NAME = "AIbehaviorBehaviorIncludedDebuggerCommandEntry";
    static constexpr const char* ALIAS = NAME;

    CGUID nodeId; // 00
    CString includedBehaviorResourcePath; // 10
};
RED4EXT_ASSERT_SIZE(BehaviorIncludedDebuggerCommandEntry, 0x30);
} // namespace AI::behavior
using AIbehaviorBehaviorIncludedDebuggerCommandEntry = AI::behavior::BehaviorIncludedDebuggerCommandEntry;
} // namespace RED4ext

// clang-format on
