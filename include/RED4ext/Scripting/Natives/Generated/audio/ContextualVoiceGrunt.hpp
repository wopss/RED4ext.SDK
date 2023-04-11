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
struct ContextualVoiceGrunt
{
    static constexpr const char* NAME = "audioContextualVoiceGrunt";
    static constexpr const char* ALIAS = NAME;

    CName regularGrunt; // 00
    CName stealthGrunt; // 08
};
RED4EXT_ASSERT_SIZE(ContextualVoiceGrunt, 0x10);
} // namespace audio
using audioContextualVoiceGrunt = audio::ContextualVoiceGrunt;
} // namespace RED4ext

// clang-format on
