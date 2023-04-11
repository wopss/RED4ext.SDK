#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/CompareFunc.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimStateTransitionCondition.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimStateTransitionCondition_ModifiedFloatVariable : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_ModifiedFloatVariable";
    static constexpr const char* ALIAS = NAME;

    float compareValue; // 30
    anim::CompareFunc compareFunc; // 34
    CName variableName; // 38
    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_ModifiedFloatVariable, 0x70);
} // namespace anim
using animAnimStateTransitionCondition_ModifiedFloatVariable = anim::AnimStateTransitionCondition_ModifiedFloatVariable;
} // namespace RED4ext

// clang-format on
