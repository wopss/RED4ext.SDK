#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimDataChunk
{
    static constexpr const char* NAME = "animAnimDataChunk";
    static constexpr const char* ALIAS = NAME;

    DeferredDataBuffer buffer; // 00
};
RED4EXT_ASSERT_SIZE(AnimDataChunk, 0x58);
} // namespace anim
using animAnimDataChunk = anim::AnimDataChunk;
} // namespace RED4ext

// clang-format on
