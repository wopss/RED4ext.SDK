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
struct ChangeGuardAreaTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorChangeGuardAreaTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> guardAreaNodeRef; // 38
};
RED4EXT_ASSERT_SIZE(ChangeGuardAreaTaskDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorChangeGuardAreaTaskDefinition = AI::behavior::ChangeGuardAreaTaskDefinition;
} // namespace RED4ext

// clang-format on
