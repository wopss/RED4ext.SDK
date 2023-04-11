#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace audio
{
struct BaseAudioSquadHandler
{
    static constexpr const char* NAME = "audioBaseAudioSquadHandler";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(BaseAudioSquadHandler, 0x8);
} // namespace audio
using audioBaseAudioSquadHandler = audio::BaseAudioSquadHandler;
} // namespace RED4ext

// clang-format on
