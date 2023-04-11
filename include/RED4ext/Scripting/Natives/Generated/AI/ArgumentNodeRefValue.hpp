#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentType.hpp>

namespace RED4ext
{
namespace AI
{
struct ArgumentNodeRefValue : AI::ArgumentDefinition
{
    static constexpr const char* NAME = "AIArgumentNodeRefValue";
    static constexpr const char* ALIAS = NAME;

    NodeRef defaultValue; // 48
    AI::ArgumentType type; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(ArgumentNodeRefValue, 0x58);
} // namespace AI
using AIArgumentNodeRefValue = AI::ArgumentNodeRefValue;
} // namespace RED4ext

// clang-format on
