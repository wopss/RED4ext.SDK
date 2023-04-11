#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/LocomotionStateVfxDictionaryItem.hpp>

namespace RED4ext
{
namespace audio
{
struct LocomotionStateVfxDictionary : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioLocomotionStateVfxDictionary";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::LocomotionStateVfxDictionaryItem> entryType; // 38
    DynArray<audio::LocomotionStateVfxDictionaryItem> entries; // 48
    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(LocomotionStateVfxDictionary, 0x88);
} // namespace audio
using audioLocomotionStateVfxDictionary = audio::LocomotionStateVfxDictionary;
} // namespace RED4ext

// clang-format on
