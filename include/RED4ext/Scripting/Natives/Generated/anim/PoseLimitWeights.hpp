#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim { 
struct PoseLimitWeights
{
    static constexpr const char* NAME = "animPoseLimitWeights";
    static constexpr const char* ALIAS = NAME;

    float min; // 00
    float mid; // 04
    float max; // 08
    int16_t poseTrackIndex; // 0C
    uint8_t type; // 0E
    bool isCachable; // 0F
};
RED4EXT_ASSERT_SIZE(PoseLimitWeights, 0x10);
} // namespace anim
} // namespace RED4ext
