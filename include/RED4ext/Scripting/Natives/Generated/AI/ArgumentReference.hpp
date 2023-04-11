#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentType.hpp>

namespace RED4ext
{
namespace AI
{
struct ArgumentReference : AI::ArgumentDefinition
{
    static constexpr const char* NAME = "AIArgumentReference";
    static constexpr const char* ALIAS = NAME;

    Variant defaultValue; // 48
    CName rttiClassName; // 60
    AI::ArgumentType type; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(ArgumentReference, 0x70);
} // namespace AI
using AIArgumentReference = AI::ArgumentReference;
} // namespace RED4ext

// clang-format on
