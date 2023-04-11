#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentDefinition; }

namespace AI
{
struct TreeArgumentsDefinition
{
    static constexpr const char* NAME = "AITreeArgumentsDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    DynArray<Handle<AI::ArgumentDefinition>> args; // 08
};
RED4EXT_ASSERT_SIZE(TreeArgumentsDefinition, 0x18);
} // namespace AI
using AITreeArgumentsDefinition = AI::TreeArgumentsDefinition;
} // namespace RED4ext

// clang-format on
