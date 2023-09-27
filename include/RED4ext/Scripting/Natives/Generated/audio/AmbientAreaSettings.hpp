#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AmbientAreaGroupingSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AmbientPaletteEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudEventStruct.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudSwitch.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/QuadEmitterSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/SoundBankStruct.hpp>

namespace RED4ext
{
namespace audio
{
struct AmbientAreaSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAmbientAreaSettings";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::AudEventStruct> EventsOnEnter; // 38
    DynArray<audio::AudEventStruct> EventsOnExit; // 48
    DynArray<audio::AudEventStruct> EventsOnActive; // 58
    DynArray<audio::SoundBankStruct> SoundBanks; // 68
    DynArray<audio::AudSwitch> Switches; // 78
    DynArray<audio::AudParameter> Parameters; // 88
    CName Reverb; // 98
    CName VoReverb; // A0
    CName FootstepMaterialOverride; // A8
    CName soundsLimitingSettings; // B0
    CName MetadataParent; // B8
    CName EmitterDecorator; // C0
    audio::AmbientAreaGroupingSettings groupingSettings; // C8
    audio::QuadEmitterSettings quadSettings; // F0
    CName eventOverrides; // 128
    CName mixingContext; // 130
    DynArray<audio::AmbientPaletteEntry> ambientPaletteEntries; // 138
    uint8_t unk148[0x17C - 0x148]; // 148
    float outerDistance; // 17C
    float verticalOuterDistance; // 180
    float insideSourceDistance; // 184
    float outdoorness; // 188
    float reverbTransitionTime; // 18C
    int32_t Priority; // 190
    bool isMusic; // 194
    bool mergeRoomsWithinArea; // 195
    bool outdoornessOverride; // 196
    uint8_t unk197[0x198 - 0x197]; // 197
};
RED4EXT_ASSERT_SIZE(AmbientAreaSettings, 0x198);
} // namespace audio
using audioAmbientAreaSettings = audio::AmbientAreaSettings;
} // namespace RED4ext

// clang-format on
