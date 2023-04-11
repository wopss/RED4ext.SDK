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
struct VoiceContextAnswer
{
    static constexpr const char* NAME = "audioVoiceContextAnswer";
    static constexpr const char* ALIAS = NAME;

    CName answerContext; // 00
    float radius; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(VoiceContextAnswer, 0x10);
} // namespace audio
using audioVoiceContextAnswer = audio::VoiceContextAnswer;
} // namespace RED4ext

// clang-format on
