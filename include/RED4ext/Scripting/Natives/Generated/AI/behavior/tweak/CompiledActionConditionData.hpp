#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak
{
struct CompiledActionConditionData
{
    static constexpr const char* NAME = "AIbehaviortweakCompiledActionConditionData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(CompiledActionConditionData, 0x18);
} // namespace AI::behavior::tweak
using AIbehaviortweakCompiledActionConditionData = AI::behavior::tweak::CompiledActionConditionData;
} // namespace RED4ext

// clang-format on
