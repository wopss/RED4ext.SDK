#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct AssignTaskItem
{
    static constexpr const char* NAME = "AIbehaviorAssignTaskItem";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> leftHandSide; // 00
    Handle<AI::ArgumentMapping> rightHandSide; // 10
};
RED4EXT_ASSERT_SIZE(AssignTaskItem, 0x20);
} // namespace AI::behavior
using AIbehaviorAssignTaskItem = AI::behavior::AssignTaskItem;
} // namespace RED4ext

// clang-format on
