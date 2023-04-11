#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/MaybeNodeAction.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct MaybeNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorMaybeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::behavior::MaybeNodeAction onChildSuccess; // 40
    AI::behavior::MaybeNodeAction onChildFailure; // 44
};
RED4EXT_ASSERT_SIZE(MaybeNodeDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorMaybeNodeDefinition = AI::behavior::MaybeNodeDefinition;
} // namespace RED4ext

// clang-format on
