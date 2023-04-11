#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak
{
struct TargetStates
{
    static constexpr const char* NAME = "AIbehaviortweakTargetStates";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xB0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(TargetStates, 0xB0);
} // namespace AI::behavior::tweak
using AIbehaviortweakTargetStates = AI::behavior::tweak::TargetStates;
} // namespace RED4ext

// clang-format on
