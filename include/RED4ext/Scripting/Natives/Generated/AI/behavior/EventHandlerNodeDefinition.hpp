#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct EventResolverDefinition; }

namespace AI::behavior
{
struct EventHandlerNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorEventHandlerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::EventResolverDefinition> resolver; // 40
    CName eventName; // 50
};
RED4EXT_ASSERT_SIZE(EventHandlerNodeDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorEventHandlerNodeDefinition = AI::behavior::EventHandlerNodeDefinition;
} // namespace RED4ext

// clang-format on
