#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionSlideNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct ActionSlideToLocalPositionNodeDefinition : AI::behavior::ActionSlideNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionSlideToLocalPositionNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> localOffset; // 70
};
RED4EXT_ASSERT_SIZE(ActionSlideToLocalPositionNodeDefinition, 0x80);
} // namespace AI::behavior
using AIbehaviorActionSlideToLocalPositionNodeDefinition = AI::behavior::ActionSlideToLocalPositionNodeDefinition;
} // namespace RED4ext

// clang-format on
