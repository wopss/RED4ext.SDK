#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct ScriptBase : IScriptable
{
    static constexpr const char* NAME = "AIbehaviorScriptBase";
    static constexpr const char* ALIAS = "AIBehaviorScriptBase";

};
RED4EXT_ASSERT_SIZE(ScriptBase, 0x40);
} // namespace AI::behavior
using AIBehaviorScriptBase = AI::behavior::ScriptBase;
} // namespace RED4ext
