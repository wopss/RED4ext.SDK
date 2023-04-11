#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace anim { struct AnimNode_FloatValue; }

namespace anim
{
struct FloatLink
{
    static constexpr const char* NAME = "animFloatLink";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    WeakHandle<anim::AnimNode_FloatValue> node; // 08
    uint8_t unk18[0x20 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(FloatLink, 0x20);
} // namespace anim
using animFloatLink = anim::FloatLink;
} // namespace RED4ext

// clang-format on
