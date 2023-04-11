#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct ReevaluateOnEventNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorReevaluateOnEventNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 40
};
RED4EXT_ASSERT_SIZE(ReevaluateOnEventNodeDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorReevaluateOnEventNodeDefinition = AI::behavior::ReevaluateOnEventNodeDefinition;
} // namespace RED4ext

// clang-format on
