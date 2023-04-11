#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/EventResolverDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior::event { struct ResolverScript; }

namespace AI::behavior
{
struct ScriptEventResolverDefinition : AI::behavior::EventResolverDefinition
{
    static constexpr const char* NAME = "AIbehaviorScriptEventResolverDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::event::ResolverScript> script; // 30
};
RED4EXT_ASSERT_SIZE(ScriptEventResolverDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorScriptEventResolverDefinition = AI::behavior::ScriptEventResolverDefinition;
} // namespace RED4ext

// clang-format on
