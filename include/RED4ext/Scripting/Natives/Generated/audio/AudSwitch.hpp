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
struct AudSwitch
{
    static constexpr const char* NAME = "audioAudSwitch";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName value; // 08
};
RED4EXT_ASSERT_SIZE(AudSwitch, 0x10);
} // namespace audio
using audioAudSwitch = audio::AudSwitch;
} // namespace RED4ext

// clang-format on
