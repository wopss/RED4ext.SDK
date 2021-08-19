#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimFallbackFrameDesc
{
    static constexpr const char* NAME = "animAnimFallbackFrameDesc";
    static constexpr const char* ALIAS = NAME;

    uint16_t mPositions; // 00
    uint16_t mRotations; // 02
};
RED4EXT_ASSERT_SIZE(AnimFallbackFrameDesc, 0x4);
} // namespace anim
} // namespace RED4ext
