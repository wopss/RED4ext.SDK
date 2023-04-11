#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct BehaviorBlackboard : IScriptable
{
    static constexpr const char* NAME = "AIbehaviorBehaviorBlackboard";
    static constexpr const char* ALIAS = "BehaviorBlackboard";

};
RED4EXT_ASSERT_SIZE(BehaviorBlackboard, 0x40);
} // namespace AI::behavior
using AIbehaviorBehaviorBlackboard = AI::behavior::BehaviorBlackboard;
using BehaviorBlackboard = AI::behavior::BehaviorBlackboard;
} // namespace RED4ext

// clang-format on
