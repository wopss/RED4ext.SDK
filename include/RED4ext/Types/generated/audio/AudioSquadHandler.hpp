#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/audio/BaseAudioSquadHandler.hpp>

namespace RED4ext
{
namespace audio { 
struct AudioSquadHandler : audio::BaseAudioSquadHandler
{
    static constexpr const char* NAME = "audioAudioSquadHandler";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0xC0 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(AudioSquadHandler, 0xC0);
} // namespace audio
} // namespace RED4ext
