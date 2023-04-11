#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_QuaternionValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_QuaternionVariable : anim::AnimNode_QuaternionValue
{
    static constexpr const char* NAME = "animAnimNode_QuaternionVariable";
    static constexpr const char* ALIAS = NAME;

    CName variableName; // 48
    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AnimNode_QuaternionVariable, 0x60);
} // namespace anim
using animAnimNode_QuaternionVariable = anim::AnimNode_QuaternionVariable;
} // namespace RED4ext

// clang-format on
