#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct RadioBlip
{
    static constexpr const char* NAME = "audioRadioBlip";
    static constexpr const char* ALIAS = NAME;

    CName blipEventName; // 00
};
RED4EXT_ASSERT_SIZE(RadioBlip, 0x8);
} // namespace audio
using audioRadioBlip = audio::RadioBlip;
} // namespace RED4ext

// clang-format on
