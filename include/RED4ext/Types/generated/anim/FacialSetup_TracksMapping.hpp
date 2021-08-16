#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim { 
struct FacialSetup_TracksMapping
{
    static constexpr const char* NAME = "animFacialSetup_TracksMapping";
    static constexpr const char* ALIAS = NAME;

    uint16_t numEnvelopes; // 00
    uint16_t numMainPoses; // 02
    uint16_t numLipsyncOverrides; // 04
    uint16_t numWrinkles; // 06
};
RED4EXT_ASSERT_SIZE(FacialSetup_TracksMapping, 0x8);
} // namespace anim
} // namespace RED4ext
