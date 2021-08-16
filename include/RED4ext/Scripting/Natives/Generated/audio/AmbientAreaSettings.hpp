#pragma once

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
namespace audio { 
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
    CName MetadataParent; // B0
    CName EmitterDecorator; // B8
    audio::AmbientAreaGroupingSettings groupingSettings; // C0
    audio::QuadEmitterSettings quadSettings; // E8
    CName eventOverrides; // 120
    CName mixingContext; // 128
    DynArray<audio::AmbientPaletteEntry> ambientPaletteEntries; // 130
    uint8_t unk140[0x174 - 0x140]; // 140
    float outerDistance; // 174
    float verticalOuterDistance; // 178
    float insideSourceDistance; // 17C
    float outdoorness; // 180
    float reverbTransitionTime; // 184
    int32_t Priority; // 188
    bool isMusic; // 18C
    bool mergeRoomsWithinArea; // 18D
    bool outdoornessOverride; // 18E
    uint8_t unk18F[0x190 - 0x18F]; // 18F
};
RED4EXT_ASSERT_SIZE(AmbientAreaSettings, 0x190);
} // namespace audio
} // namespace RED4ext
