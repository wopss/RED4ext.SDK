#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>

namespace RED4ext
{
struct CResource;

namespace audio
{
struct LocomotionStateVfxDictionaryItem : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioLocomotionStateVfxDictionaryItem";
    static constexpr const char* ALIAS = NAME;

    CName key; // 38
    RaRef<CResource> value; // 40
};
RED4EXT_ASSERT_SIZE(LocomotionStateVfxDictionaryItem, 0x48);
} // namespace audio
using audioLocomotionStateVfxDictionaryItem = audio::LocomotionStateVfxDictionaryItem;
} // namespace RED4ext

// clang-format on
