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
struct LoopedSoundEmitterMetadata : audio::EmitterMetadata
{
    static constexpr const char* NAME = "audioLoopedSoundEmitterMetadata";
    static constexpr const char* ALIAS = NAME;

    CName loopSound; // 38
};
RED4EXT_ASSERT_SIZE(LoopedSoundEmitterMetadata, 0x40);
} // namespace audio
using audioLoopedSoundEmitterMetadata = audio::LoopedSoundEmitterMetadata;
} // namespace RED4ext

// clang-format on
