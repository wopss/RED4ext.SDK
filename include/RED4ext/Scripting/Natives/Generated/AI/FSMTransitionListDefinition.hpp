#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI
{
struct FSMTransitionListDefinition
{
    static constexpr const char* NAME = "AIFSMTransitionListDefinition";
    static constexpr const char* ALIAS = NAME;

    uint16_t firstTransitionIndex; // 00
    uint16_t transitionsCount; // 02
};
RED4EXT_ASSERT_SIZE(FSMTransitionListDefinition, 0x4);
} // namespace AI
using AIFSMTransitionListDefinition = AI::FSMTransitionListDefinition;
} // namespace RED4ext

// clang-format on
