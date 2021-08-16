#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio { 
struct AudioFoliageMaterial
{
    static constexpr const char* NAME = "audioAudioFoliageMaterial";
    static constexpr const char* ALIAS = NAME;

    CName loopStart; // 00
    CName loopEnd; // 08
};
RED4EXT_ASSERT_SIZE(AudioFoliageMaterial, 0x10);
} // namespace audio
} // namespace RED4ext
