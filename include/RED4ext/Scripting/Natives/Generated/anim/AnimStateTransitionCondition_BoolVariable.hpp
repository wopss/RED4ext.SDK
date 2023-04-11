#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimStateTransitionCondition.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimStateTransitionCondition_BoolVariable : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_BoolVariable";
    static constexpr const char* ALIAS = NAME;

    bool compareValue; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    CName variableName; // 38
    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_BoolVariable, 0x50);
} // namespace anim
using animAnimStateTransitionCondition_BoolVariable = anim::AnimStateTransitionCondition_BoolVariable;
} // namespace RED4ext

// clang-format on
