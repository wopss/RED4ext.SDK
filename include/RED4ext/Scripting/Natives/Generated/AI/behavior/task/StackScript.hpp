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
struct StackScript : AI::behavior::ScriptBase
{
    static constexpr const char* NAME = "AIbehaviortaskStackScript";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x78 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(StackScript, 0x78);
} // namespace AI::behavior::task
using AIbehaviortaskStackScript = AI::behavior::task::StackScript;
} // namespace RED4ext

// clang-format on
