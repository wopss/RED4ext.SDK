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
struct AdvancedParameterizedBehavior : AI::behavior::ParameterizedBehavior
{
    static constexpr const char* NAME = "AIbehaviorAdvancedParameterizedBehavior";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AdvancedParameterizedBehavior, 0x68);
} // namespace AI::behavior
using AIbehaviorAdvancedParameterizedBehavior = AI::behavior::AdvancedParameterizedBehavior;
} // namespace RED4ext

// clang-format on
