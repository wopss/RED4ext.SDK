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
struct ActionSlideToObjectNodeDefinition : AI::behavior::ActionSlideNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionSlideToObjectNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> destination; // 70
    Handle<AI::ArgumentMapping> offset; // 80
};
RED4EXT_ASSERT_SIZE(ActionSlideToObjectNodeDefinition, 0x90);
} // namespace AI::behavior
using AIbehaviorActionSlideToObjectNodeDefinition = AI::behavior::ActionSlideToObjectNodeDefinition;
} // namespace RED4ext

// clang-format on
