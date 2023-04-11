#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ParameterizedBehavior; }
namespace quest { struct ForcedBehaviorReference; }

namespace quest
{
struct ForcedBehaviourNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questForcedBehaviourNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ForcedBehaviorReference> tree; // 48
    game::EntityReference puppet; // 58
    Handle<AI::behavior::ParameterizedBehavior> behavior; // 90
};
RED4EXT_ASSERT_SIZE(ForcedBehaviourNodeDefinition, 0xA0);
} // namespace quest
using questForcedBehaviourNodeDefinition = quest::ForcedBehaviourNodeDefinition;
} // namespace RED4ext

// clang-format on
