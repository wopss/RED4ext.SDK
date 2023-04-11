#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeSound.hpp>

namespace RED4ext
{
namespace audio
{
struct FoleyNPCMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioFoleyNPCMetadata";
    static constexpr const char* ALIAS = NAME;

    audio::MeleeSound fastHeavy; // 38
    audio::MeleeSound fastMedium; // 48
    audio::MeleeSound fastLight; // 58
    audio::MeleeSound normalHeavy; // 68
    audio::MeleeSound normalMedium; // 78
    audio::MeleeSound normalLight; // 88
    audio::MeleeSound slowHeavy; // 98
    audio::MeleeSound slowMedium; // A8
    audio::MeleeSound slowLight; // B8
    audio::MeleeSound walk; // C8
    audio::MeleeSound run; // D8
};
RED4EXT_ASSERT_SIZE(FoleyNPCMetadata, 0xE8);
} // namespace audio
using audioFoleyNPCMetadata = audio::FoleyNPCMetadata;
} // namespace RED4ext

// clang-format on
