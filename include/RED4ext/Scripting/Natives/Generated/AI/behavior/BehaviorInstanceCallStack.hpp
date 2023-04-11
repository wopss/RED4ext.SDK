#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct BehaviorInstanceCallStack
{
    static constexpr const char* NAME = "AIbehaviorBehaviorInstanceCallStack";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint32_t> resourceHashes; // 00
    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(BehaviorInstanceCallStack, 0x18);
} // namespace AI::behavior
using AIbehaviorBehaviorInstanceCallStack = AI::behavior::BehaviorInstanceCallStack;
} // namespace RED4ext

// clang-format on
