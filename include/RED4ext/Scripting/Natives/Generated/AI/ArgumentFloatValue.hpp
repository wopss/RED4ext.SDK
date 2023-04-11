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
struct ArgumentFloatValue : AI::ArgumentDefinition
{
    static constexpr const char* NAME = "AIArgumentFloatValue";
    static constexpr const char* ALIAS = NAME;

    float defaultValue; // 48
    AI::ArgumentType type; // 4C
};
RED4EXT_ASSERT_SIZE(ArgumentFloatValue, 0x50);
} // namespace AI
using AIArgumentFloatValue = AI::ArgumentFloatValue;
} // namespace RED4ext

// clang-format on
