#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct LocomotionEventMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioLocomotionEventMetadata";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LocomotionEventMetadata, 0x38);
} // namespace audio
using audioLocomotionEventMetadata = audio::LocomotionEventMetadata;
} // namespace RED4ext

// clang-format on
