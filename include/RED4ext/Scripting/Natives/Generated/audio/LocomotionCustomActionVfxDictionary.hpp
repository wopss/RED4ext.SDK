#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/LocomotionCustomActionVfxDictionaryItem.hpp>

namespace RED4ext
{
namespace audio
{
struct LocomotionCustomActionVfxDictionary : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioLocomotionCustomActionVfxDictionary";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::LocomotionCustomActionVfxDictionaryItem> entryType; // 38
    DynArray<audio::LocomotionCustomActionVfxDictionaryItem> entries; // 48
    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(LocomotionCustomActionVfxDictionary, 0x88);
} // namespace audio
using audioLocomotionCustomActionVfxDictionary = audio::LocomotionCustomActionVfxDictionary;
} // namespace RED4ext

// clang-format on
