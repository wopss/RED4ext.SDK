#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak
{
struct StateConditionData
{
    static constexpr const char* NAME = "AIbehaviortweakStateConditionData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xD8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(StateConditionData, 0xD8);
} // namespace AI::behavior::tweak
using AIbehaviortweakStateConditionData = AI::behavior::tweak::StateConditionData;
} // namespace RED4ext

// clang-format on
