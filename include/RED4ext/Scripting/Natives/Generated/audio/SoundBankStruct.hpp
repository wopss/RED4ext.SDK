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
struct SoundBankStruct
{
    static constexpr const char* NAME = "audioSoundBankStruct";
    static constexpr const char* ALIAS = NAME;

    CName soundBank; // 00
};
RED4EXT_ASSERT_SIZE(SoundBankStruct, 0x8);
} // namespace audio
using audioSoundBankStruct = audio::SoundBankStruct;
} // namespace RED4ext

// clang-format on
