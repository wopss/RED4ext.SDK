#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentType.hpp>

namespace RED4ext
{
namespace AI
{
struct ArgumentUint64Value : AI::ArgumentDefinition
{
    static constexpr const char* NAME = "AIArgumentUint64Value";
    static constexpr const char* ALIAS = NAME;

    uint64_t defaultValue; // 48
    AI::ArgumentType type; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(ArgumentUint64Value, 0x58);
} // namespace AI
using AIArgumentUint64Value = AI::ArgumentUint64Value;
} // namespace RED4ext

// clang-format on
