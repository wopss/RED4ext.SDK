#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentType.hpp>

namespace RED4ext
{
namespace AI
{
struct ArgumentCNameValue : AI::ArgumentDefinition
{
    static constexpr const char* NAME = "AIArgumentCNameValue";
    static constexpr const char* ALIAS = NAME;

    CName defaultValue; // 48
    AI::ArgumentType type; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(ArgumentCNameValue, 0x58);
} // namespace AI
using AIArgumentCNameValue = AI::ArgumentCNameValue;
} // namespace RED4ext

// clang-format on
