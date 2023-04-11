#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct TaskDefinition : ISerializable
{
    static constexpr const char* NAME = "AIbehaviorTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    bool ignoreTaskCompletion; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(TaskDefinition, 0x38);
} // namespace AI::behavior
using AIbehaviorTaskDefinition = AI::behavior::TaskDefinition;
} // namespace RED4ext

// clang-format on
