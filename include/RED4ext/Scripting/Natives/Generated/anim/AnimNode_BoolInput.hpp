#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_BoolValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_BoolInput : anim::AnimNode_BoolValue
{
    static constexpr const char* NAME = "animAnimNode_BoolInput";
    static constexpr const char* ALIAS = NAME;

    CName group; // 48
    CName name; // 50
    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AnimNode_BoolInput, 0x68);
} // namespace anim
using animAnimNode_BoolInput = anim::AnimNode_BoolInput;
} // namespace RED4ext

// clang-format on
