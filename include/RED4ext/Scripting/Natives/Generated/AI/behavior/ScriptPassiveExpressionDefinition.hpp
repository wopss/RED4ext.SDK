#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/PassiveExpressionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior::expression { struct Script; }

namespace AI::behavior { 
struct ScriptPassiveExpressionDefinition : AI::behavior::PassiveExpressionDefinition
{
    static constexpr const char* NAME = "AIbehaviorScriptPassiveExpressionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::expression::Script> script; // 40
};
RED4EXT_ASSERT_SIZE(ScriptPassiveExpressionDefinition, 0x50);
} // namespace AI::behavior
} // namespace RED4ext
