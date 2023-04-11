#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI
{
struct FSMTransitionDefinition
{
    static constexpr const char* NAME = "AIFSMTransitionDefinition";
    static constexpr const char* ALIAS = NAME;

    uint16_t destination; // 00
    uint16_t condition; // 02
};
RED4EXT_ASSERT_SIZE(FSMTransitionDefinition, 0x4);
} // namespace AI
using AIFSMTransitionDefinition = AI::FSMTransitionDefinition;
} // namespace RED4ext

// clang-format on
