#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/AI/behavior/ScriptBase.hpp>

namespace RED4ext
{
namespace AI::behavior::condition { 
struct Script : AI::behavior::ScriptBase
{
    static constexpr const char* NAME = "AIbehaviorconditionScript";
    static constexpr const char* ALIAS = "AIScriptCondition";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(Script, 0x48);
} // namespace AI::behavior::condition
using AIScriptCondition = AI::behavior::condition::Script;
} // namespace RED4ext
