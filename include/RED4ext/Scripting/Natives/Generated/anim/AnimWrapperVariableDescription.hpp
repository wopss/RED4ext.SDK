#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimWrapperVariableDescription
{
    static constexpr const char* NAME = "animAnimWrapperVariableDescription";
    static constexpr const char* ALIAS = NAME;

    CName variableName; // 00
    float defaultValue; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(AnimWrapperVariableDescription, 0x10);
} // namespace anim
using animAnimWrapperVariableDescription = anim::AnimWrapperVariableDescription;
} // namespace RED4ext

// clang-format on
