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
struct LocomotionCustomActionEventDictionaryItem : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioLocomotionCustomActionEventDictionaryItem";
    static constexpr const char* ALIAS = NAME;

    CName key; // 38
    CName value; // 40
};
RED4EXT_ASSERT_SIZE(LocomotionCustomActionEventDictionaryItem, 0x48);
} // namespace audio
using audioLocomotionCustomActionEventDictionaryItem = audio::LocomotionCustomActionEventDictionaryItem;
} // namespace RED4ext

// clang-format on
