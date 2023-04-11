#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ParameterizedBehavior.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct SimpleParameterizedBehavior : AI::behavior::ParameterizedBehavior
{
    static constexpr const char* NAME = "AIbehaviorSimpleParameterizedBehavior";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SimpleParameterizedBehavior, 0x68);
} // namespace AI::behavior
using AIbehaviorSimpleParameterizedBehavior = AI::behavior::SimpleParameterizedBehavior;
} // namespace RED4ext

// clang-format on
