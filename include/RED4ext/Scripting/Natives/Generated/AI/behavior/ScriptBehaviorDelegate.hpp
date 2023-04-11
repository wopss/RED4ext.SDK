#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/BehaviorDelegate.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct ScriptBehaviorDelegate : AI::behavior::BehaviorDelegate
{
    static constexpr const char* NAME = "AIbehaviorScriptBehaviorDelegate";
    static constexpr const char* ALIAS = "ScriptBehaviorDelegate";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ScriptBehaviorDelegate, 0x58);
} // namespace AI::behavior
using AIbehaviorScriptBehaviorDelegate = AI::behavior::ScriptBehaviorDelegate;
using ScriptBehaviorDelegate = AI::behavior::ScriptBehaviorDelegate;
} // namespace RED4ext

// clang-format on
