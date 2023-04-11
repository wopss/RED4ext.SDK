#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentType.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentDefinition; }

namespace AI
{
struct ArgumentOverrideWrapper
{
    static constexpr const char* NAME = "AIArgumentOverrideWrapper";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    AI::ArgumentType type; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    Handle<AI::ArgumentDefinition> definition; // 10
};
RED4EXT_ASSERT_SIZE(ArgumentOverrideWrapper, 0x20);
} // namespace AI
using AIArgumentOverrideWrapper = AI::ArgumentOverrideWrapper;
} // namespace RED4ext

// clang-format on
