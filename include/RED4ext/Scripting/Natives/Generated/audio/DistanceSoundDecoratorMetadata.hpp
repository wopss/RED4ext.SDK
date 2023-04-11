#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EmitterMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct DistanceSoundDecoratorMetadata : audio::EmitterMetadata
{
    static constexpr const char* NAME = "audioDistanceSoundDecoratorMetadata";
    static constexpr const char* ALIAS = NAME;

    CName onEnter; // 38
    CName onLeave; // 40
    float triggerDistance; // 48
    bool stopOnlyVirtualSounds; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
};
RED4EXT_ASSERT_SIZE(DistanceSoundDecoratorMetadata, 0x50);
} // namespace audio
using audioDistanceSoundDecoratorMetadata = audio::DistanceSoundDecoratorMetadata;
} // namespace RED4ext

// clang-format on
