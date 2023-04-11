#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AnimationOverrideDictionaryItem : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioAnimationOverrideDictionaryItem";
    static constexpr const char* ALIAS = NAME;

    CName key; // 38
    CName value; // 40
};
RED4EXT_ASSERT_SIZE(AnimationOverrideDictionaryItem, 0x48);
} // namespace audio
using audioAnimationOverrideDictionaryItem = audio::AnimationOverrideDictionaryItem;
} // namespace RED4ext

// clang-format on
