#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/LocomotionCustomActionEventDictionaryItem.hpp>

namespace RED4ext
{
namespace audio
{
struct LocomotionCustomActionEventDictionary : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioLocomotionCustomActionEventDictionary";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::LocomotionCustomActionEventDictionaryItem> entryType; // 38
    DynArray<audio::LocomotionCustomActionEventDictionaryItem> entries; // 48
    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(LocomotionCustomActionEventDictionary, 0x88);
} // namespace audio
using audioLocomotionCustomActionEventDictionary = audio::LocomotionCustomActionEventDictionary;
} // namespace RED4ext

// clang-format on
