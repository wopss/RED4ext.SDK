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
struct ArgumentIntValue : AI::ArgumentDefinition
{
    static constexpr const char* NAME = "AIArgumentIntValue";
    static constexpr const char* ALIAS = NAME;

    int32_t defaultValue; // 48
    AI::ArgumentType type; // 4C
};
RED4EXT_ASSERT_SIZE(ArgumentIntValue, 0x50);
} // namespace AI
using AIArgumentIntValue = AI::ArgumentIntValue;
} // namespace RED4ext

// clang-format on
