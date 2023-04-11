#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SharedVarDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct SharedVarTableDefinition
{
    static constexpr const char* NAME = "AISharedVarTableDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    DynArray<AI::SharedVarDefinition> table; // 08
};
RED4EXT_ASSERT_SIZE(SharedVarTableDefinition, 0x18);
} // namespace AI
using AISharedVarTableDefinition = AI::SharedVarTableDefinition;
} // namespace RED4ext

// clang-format on
