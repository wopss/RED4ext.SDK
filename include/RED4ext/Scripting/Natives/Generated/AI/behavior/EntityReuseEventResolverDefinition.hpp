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
struct EntityReuseEventResolverDefinition : AI::behavior::EventResolverDefinition
{
    static constexpr const char* NAME = "AIbehaviorEntityReuseEventResolverDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> destination; // 30
    Handle<AI::ArgumentMapping> fastForwardAfterTeleport; // 40
};
RED4EXT_ASSERT_SIZE(EntityReuseEventResolverDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorEntityReuseEventResolverDefinition = AI::behavior::EntityReuseEventResolverDefinition;
} // namespace RED4ext

// clang-format on
