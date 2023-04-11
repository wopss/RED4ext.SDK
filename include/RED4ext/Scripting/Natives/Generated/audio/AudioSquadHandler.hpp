#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/BaseAudioSquadHandler.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioSquadHandler : audio::BaseAudioSquadHandler
{
    static constexpr const char* NAME = "audioAudioSquadHandler";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0xA8 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(AudioSquadHandler, 0xA8);
} // namespace audio
using audioAudioSquadHandler = audio::AudioSquadHandler;
} // namespace RED4ext

// clang-format on
