#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_TransformValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TransformVariable : anim::AnimNode_TransformValue
{
    static constexpr const char* NAME = "animAnimNode_TransformVariable";
    static constexpr const char* ALIAS = NAME;

    CName variableName; // 48
    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AnimNode_TransformVariable, 0x60);
} // namespace anim
using animAnimNode_TransformVariable = anim::AnimNode_TransformVariable;
} // namespace RED4ext

// clang-format on
