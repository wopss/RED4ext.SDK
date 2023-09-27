#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle
{
struct Audio
{
    static constexpr const char* NAME = "vehicleAudio";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x580 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(Audio, 0x580);
} // namespace vehicle
using vehicleAudio = vehicle::Audio;
} // namespace RED4ext

// clang-format on
