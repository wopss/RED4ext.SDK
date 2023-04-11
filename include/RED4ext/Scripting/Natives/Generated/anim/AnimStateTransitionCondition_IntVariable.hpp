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
struct AnimStateTransitionCondition_IntVariable : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_IntVariable";
    static constexpr const char* ALIAS = NAME;

    int32_t compareValue; // 30
    anim::CompareFunc compareFunc; // 34
    CName variableName; // 38
    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_IntVariable, 0x50);
} // namespace anim
using animAnimStateTransitionCondition_IntVariable = anim::AnimStateTransitionCondition_IntVariable;
} // namespace RED4ext

// clang-format on
