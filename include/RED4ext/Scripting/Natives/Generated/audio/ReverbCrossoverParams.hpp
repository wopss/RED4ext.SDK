#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace audio
{
struct ReverbCrossoverParams
{
    static constexpr const char* NAME = "audioReverbCrossoverParams";
    static constexpr const char* ALIAS = NAME;

    float dist; // 00
    float fade; // 04
};
RED4EXT_ASSERT_SIZE(ReverbCrossoverParams, 0x8);
} // namespace audio
using audioReverbCrossoverParams = audio::ReverbCrossoverParams;
} // namespace RED4ext

// clang-format on
