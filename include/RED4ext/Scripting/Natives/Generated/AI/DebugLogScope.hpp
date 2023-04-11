#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI
{
struct DebugLogScope
{
    static constexpr const char* NAME = "AIDebugLogScope";
    static constexpr const char* ALIAS = NAME;

    uint32_t index; // 00
    uint32_t id; // 04
};
RED4EXT_ASSERT_SIZE(DebugLogScope, 0x8);
} // namespace AI
using AIDebugLogScope = AI::DebugLogScope;
} // namespace RED4ext

// clang-format on
