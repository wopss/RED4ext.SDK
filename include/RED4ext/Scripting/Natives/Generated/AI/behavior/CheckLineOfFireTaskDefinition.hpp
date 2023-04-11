#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct CheckLineOfFireTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorCheckLineOfFireTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> slotName; // 38
    Handle<AI::ArgumentMapping> attachmentName; // 48
    Handle<AI::ArgumentMapping> spread; // 58
    Handle<AI::ArgumentMapping> maxRange; // 68
};
RED4EXT_ASSERT_SIZE(CheckLineOfFireTaskDefinition, 0x78);
} // namespace AI::behavior
using AIbehaviorCheckLineOfFireTaskDefinition = AI::behavior::CheckLineOfFireTaskDefinition;
} // namespace RED4ext

// clang-format on
