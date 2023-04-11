#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace anim { struct AnimNode_TransformValue; }

namespace anim
{
struct TransformLink
{
    static constexpr const char* NAME = "animTransformLink";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    WeakHandle<anim::AnimNode_TransformValue> node; // 08
    uint8_t unk18[0x20 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(TransformLink, 0x20);
} // namespace anim
using animTransformLink = anim::TransformLink;
} // namespace RED4ext

// clang-format on
