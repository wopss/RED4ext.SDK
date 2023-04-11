#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/EventResolverDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct StoryEventResolverDefinition : AI::behavior::EventResolverDefinition
{
    static constexpr const char* NAME = "AIbehaviorStoryEventResolverDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> storyTier; // 30
};
RED4EXT_ASSERT_SIZE(StoryEventResolverDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorStoryEventResolverDefinition = AI::behavior::StoryEventResolverDefinition;
} // namespace RED4ext

// clang-format on
