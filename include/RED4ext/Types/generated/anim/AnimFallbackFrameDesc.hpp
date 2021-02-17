#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimFallbackFrameDesc
{
    static constexpr const char* NAME = "animAnimFallbackFrameDesc";
    static constexpr const char* ALIAS = NAME;

    uint16_t rsion; // 00
    uint16_t pe; // 02
    uint16_t mPositions; // 04
    uint16_t mRotations; // 06
};
RED4EXT_ASSERT_SIZE(AnimFallbackFrameDesc, 0x8);
} // namespace anim
} // namespace RED4ext
