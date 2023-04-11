#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IRuntimeCondition.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimsetVariableCondition : anim::IRuntimeCondition
{
    static constexpr const char* NAME = "animAnimsetVariableCondition";
    static constexpr const char* ALIAS = NAME;

    CName variableToCompare; // 30
};
RED4EXT_ASSERT_SIZE(AnimsetVariableCondition, 0x38);
} // namespace anim
using animAnimsetVariableCondition = anim::AnimsetVariableCondition;
} // namespace RED4ext

// clang-format on
