#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak
{
struct ExecutionContext
{
    static constexpr const char* NAME = "AIbehaviortweakExecutionContext";
    static constexpr const char* ALIAS = "TweakExecutionContext";

    uint8_t unk00[0x30 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ExecutionContext, 0x30);
} // namespace AI::behavior::tweak
using AIbehaviortweakExecutionContext = AI::behavior::tweak::ExecutionContext;
using TweakExecutionContext = AI::behavior::tweak::ExecutionContext;
} // namespace RED4ext

// clang-format on
