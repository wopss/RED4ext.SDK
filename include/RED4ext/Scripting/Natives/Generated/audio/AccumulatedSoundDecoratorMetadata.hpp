#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EmitterMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AccumulatedSoundDecoratorMetadata : audio::EmitterMetadata
{
    static constexpr const char* NAME = "audioAccumulatedSoundDecoratorMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> accumulatedSounds; // 38
    CName loopStart; // 48
    CName loopEnd; // 50
    CName fadeParam; // 58
    float soundTimeout; // 60
    bool inSpammingMode; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
    CName spammingSound; // 68
    float spammingSoundInterval; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(AccumulatedSoundDecoratorMetadata, 0x78);
} // namespace audio
using audioAccumulatedSoundDecoratorMetadata = audio::AccumulatedSoundDecoratorMetadata;
} // namespace RED4ext

// clang-format on
