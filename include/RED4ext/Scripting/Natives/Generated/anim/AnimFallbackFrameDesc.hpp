#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFallbackFrameDesc
{
    static constexpr const char* NAME = "animAnimFallbackFrameDesc";
    static constexpr const char* ALIAS = NAME;

    uint16_t mPositions; // 00
    uint16_t mRotations; // 02
    uint16_t mFloatTracks; // 04
};
RED4EXT_ASSERT_SIZE(AnimFallbackFrameDesc, 0x6);
} // namespace anim
using animAnimFallbackFrameDesc = anim::AnimFallbackFrameDesc;
} // namespace RED4ext

// clang-format on
