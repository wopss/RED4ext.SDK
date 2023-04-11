#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_VectorValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_VectorVariable : anim::AnimNode_VectorValue
{
    static constexpr const char* NAME = "animAnimNode_VectorVariable";
    static constexpr const char* ALIAS = NAME;

    CName variableName; // 48
    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AnimNode_VectorVariable, 0x60);
} // namespace anim
using animAnimNode_VectorVariable = anim::AnimNode_VectorVariable;
} // namespace RED4ext

// clang-format on
