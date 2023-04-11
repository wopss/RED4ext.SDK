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
struct ArgumentBoolValue : AI::ArgumentDefinition
{
    static constexpr const char* NAME = "AIArgumentBoolValue";
    static constexpr const char* ALIAS = NAME;

    bool defaultValue; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    AI::ArgumentType type; // 4C
};
RED4EXT_ASSERT_SIZE(ArgumentBoolValue, 0x50);
} // namespace AI
using AIArgumentBoolValue = AI::ArgumentBoolValue;
} // namespace RED4ext

// clang-format on
