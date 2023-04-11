#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeID.hpp>

namespace RED4ext
{
namespace AI
{
struct ArgumentGlobalNodeIdValue : AI::ArgumentDefinition
{
    static constexpr const char* NAME = "AIArgumentGlobalNodeIdValue";
    static constexpr const char* ALIAS = NAME;

    world::GlobalNodeID defaultValue; // 48
    AI::ArgumentType type; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(ArgumentGlobalNodeIdValue, 0x58);
} // namespace AI
using AIArgumentGlobalNodeIdValue = AI::ArgumentGlobalNodeIdValue;
} // namespace RED4ext

// clang-format on
