#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ContextualVoiceGrunt.hpp>

namespace RED4ext
{
namespace audio
{
struct ContextualVoiceGruntSettings
{
    static constexpr const char* NAME = "audioContextualVoiceGruntSettings";
    static constexpr const char* ALIAS = NAME;

    audio::ContextualVoiceGrunt painShort; // 00
    audio::ContextualVoiceGrunt effort; // 10
};
RED4EXT_ASSERT_SIZE(ContextualVoiceGruntSettings, 0x20);
} // namespace audio
using audioContextualVoiceGruntSettings = audio::ContextualVoiceGruntSettings;
} // namespace RED4ext

// clang-format on
