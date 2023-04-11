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
struct SaveEventResolverDefinition : AI::behavior::EventResolverDefinition
{
    static constexpr const char* NAME = "AIbehaviorSaveEventResolverDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> eventData; // 30
};
RED4EXT_ASSERT_SIZE(SaveEventResolverDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorSaveEventResolverDefinition = AI::behavior::SaveEventResolverDefinition;
} // namespace RED4ext

// clang-format on
