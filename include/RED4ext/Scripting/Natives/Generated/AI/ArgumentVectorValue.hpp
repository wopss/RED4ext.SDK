#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentType.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace AI
{
struct ArgumentVectorValue : AI::ArgumentDefinition
{
    static constexpr const char* NAME = "AIArgumentVectorValue";
    static constexpr const char* ALIAS = NAME;

    Vector3 defaultValue; // 48
    AI::ArgumentType type; // 54
};
RED4EXT_ASSERT_SIZE(ArgumentVectorValue, 0x58);
} // namespace AI
using AIArgumentVectorValue = AI::ArgumentVectorValue;
} // namespace RED4ext

// clang-format on
