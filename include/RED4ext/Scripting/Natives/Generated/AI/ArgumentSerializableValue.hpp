#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentType.hpp>

namespace RED4ext
{
struct ISerializable;

namespace AI
{
struct ArgumentSerializableValue : AI::ArgumentDefinition
{
    static constexpr const char* NAME = "AIArgumentSerializableValue";
    static constexpr const char* ALIAS = NAME;

    Handle<ISerializable> defaultValue; // 48
    AI::ArgumentType type; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(ArgumentSerializableValue, 0x60);
} // namespace AI
using AIArgumentSerializableValue = AI::ArgumentSerializableValue;
} // namespace RED4ext

// clang-format on
