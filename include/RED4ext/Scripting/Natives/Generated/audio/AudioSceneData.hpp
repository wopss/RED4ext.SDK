#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AnyStateTransitionEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioSceneSignalOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioSceneStateOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioStateData.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoLineSignal.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioSceneData : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAudioSceneData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x48 - 0x38]; // 38
    NativeArray<audio::AudioStateData, 1> anyStateArray; // 48
    DynArray<audio::AudioStateData> states; // A0
    DynArray<audio::AnyStateTransitionEntry> anyStateTransitionsTable; // B0
    DynArray<audio::VoLineSignal> voLineSignals; // C0
    CName signalLeadingToShutdown; // D0
    CName templateScene; // D8
    DynArray<audio::AudioSceneStateOverride> templateSceneStateOverrides; // E0
    DynArray<audio::AudioSceneSignalOverride> templateSceneSignalOverrides; // F0
    uint8_t unk100[0x110 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(AudioSceneData, 0x110);
} // namespace audio
using audioAudioSceneData = audio::AudioSceneData;
} // namespace RED4ext

// clang-format on
