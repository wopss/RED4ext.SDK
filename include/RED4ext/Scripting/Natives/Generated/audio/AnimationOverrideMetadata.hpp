#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { struct AnimationOverrideDictionary; }

namespace audio
{
struct AnimationOverrideMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAnimationOverrideMetadata";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::AnimationOverrideDictionary> animationOverrides; // 38
};
RED4EXT_ASSERT_SIZE(AnimationOverrideMetadata, 0x48);
} // namespace audio
using audioAnimationOverrideMetadata = audio::AnimationOverrideMetadata;
} // namespace RED4ext

// clang-format on
