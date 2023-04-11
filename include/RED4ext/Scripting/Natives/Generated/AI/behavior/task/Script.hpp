#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ScriptBase.hpp>

namespace RED4ext
{
namespace AI::behavior::task
{
struct Script : AI::behavior::ScriptBase
{
    static constexpr const char* NAME = "AIbehaviortaskScript";
    static constexpr const char* ALIAS = "AIScriptTask";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(Script, 0x48);
} // namespace AI::behavior::task
using AIbehaviortaskScript = AI::behavior::task::Script;
using AIScriptTask = AI::behavior::task::Script;
} // namespace RED4ext

// clang-format on
