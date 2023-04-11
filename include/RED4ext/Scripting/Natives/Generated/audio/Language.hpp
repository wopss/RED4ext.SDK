#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace audio
{
struct Language
{
    static constexpr const char* NAME = "audioLanguage";
    static constexpr const char* ALIAS = NAME;

    CString longName; // 00
    CString codeName; // 20
    bool hasVO; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(Language, 0x48);
} // namespace audio
using audioLanguage = audio::Language;
} // namespace RED4ext

// clang-format on
