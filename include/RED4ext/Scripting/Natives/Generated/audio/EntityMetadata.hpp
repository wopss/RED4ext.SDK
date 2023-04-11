#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EntityEmitterSettings.hpp>

namespace RED4ext
{
namespace audio
{
struct EntityMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioEntityMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> fallbackDecorators; // 38
    DynArray<audio::EntityEmitterSettings> emitterDescriptions; // 48
    CName defaultPositionName; // 58
    CName defaultEmitterName; // 60
    uint8_t unk68[0x78 - 0x68]; // 68
    bool preferSoundComponentPosition; // 78
    bool alwaysCreateDefaultEmitter; // 79
    uint8_t unk7A[0x88 - 0x7A]; // 7A
    CName isDefaultForEntityType; // 88
    int32_t priority; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
    CName rigMetadata; // 98
};
RED4EXT_ASSERT_SIZE(EntityMetadata, 0xA0);
} // namespace audio
using audioEntityMetadata = audio::EntityMetadata;
} // namespace RED4ext

// clang-format on
