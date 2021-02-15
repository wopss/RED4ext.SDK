#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace vehicle { 
struct Audio
{
    static constexpr const char* NAME = "vehicleAudio";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x3F0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(Audio, 0x3F0);
} // namespace vehicle
} // namespace RED4ext
