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
struct MixParamDescription
{
    static constexpr const char* NAME = "audioMixParamDescription";
    static constexpr const char* ALIAS = NAME;

    CName parameter; // 00
    float defaultValue; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(MixParamDescription, 0x10);
} // namespace audio
using audioMixParamDescription = audio::MixParamDescription;
} // namespace RED4ext

// clang-format on
