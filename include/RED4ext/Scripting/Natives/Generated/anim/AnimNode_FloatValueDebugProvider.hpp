#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatValueDebugProvider
{
    static constexpr const char* NAME = "animAnimNode_FloatValueDebugProvider";
    static constexpr const char* ALIAS = NAME;

    float min; // 00
    float max; // 04
    float progress; // 08
    float speed; // 0C
    bool isEnabled; // 10
    bool auto; // 11
    bool wrap; // 12
    uint8_t unk13[0x38 - 0x13]; // 13
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatValueDebugProvider, 0x38);
} // namespace anim
using animAnimNode_FloatValueDebugProvider = anim::AnimNode_FloatValueDebugProvider;
} // namespace RED4ext

// clang-format on
