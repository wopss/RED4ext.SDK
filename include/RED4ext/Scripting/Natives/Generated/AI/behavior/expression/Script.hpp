#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ScriptBase.hpp>

namespace RED4ext
{
namespace AI::behavior::expression
{
struct Script : AI::behavior::ScriptBase
{
    static constexpr const char* NAME = "AIbehaviorexpressionScript";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(Script, 0x48);
} // namespace AI::behavior::expression
using AIbehaviorexpressionScript = AI::behavior::expression::Script;
} // namespace RED4ext

// clang-format on
