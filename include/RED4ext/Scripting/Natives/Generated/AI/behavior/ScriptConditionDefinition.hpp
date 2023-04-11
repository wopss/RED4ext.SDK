#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior::condition { struct Script; }

namespace AI::behavior
{
struct ScriptConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorScriptConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::condition::Script> script; // 38
    bool disableLazyInitialization; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(ScriptConditionDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorScriptConditionDefinition = AI::behavior::ScriptConditionDefinition;
} // namespace RED4ext

// clang-format on
