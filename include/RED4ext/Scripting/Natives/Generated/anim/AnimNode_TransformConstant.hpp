#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_TransformValue.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_TransformConstant : anim::AnimNode_TransformValue
{
    static constexpr const char* NAME = "animAnimNode_TransformConstant";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    Quaternion rotation; // 50
    Vector4 pos; // 60
    Vector4 scale; // 70
};
RED4EXT_ASSERT_SIZE(AnimNode_TransformConstant, 0x80);
} // namespace anim
using animAnimNode_TransformConstant = anim::AnimNode_TransformConstant;
} // namespace RED4ext

// clang-format on
