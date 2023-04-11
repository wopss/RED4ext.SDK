#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/GenericNameEventItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct GenericNameEventDictionary : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioGenericNameEventDictionary";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::GenericNameEventItem> entryType; // 38
    DynArray<audio::GenericNameEventItem> entries; // 48
    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(GenericNameEventDictionary, 0x88);
} // namespace audio
using audioGenericNameEventDictionary = audio::GenericNameEventDictionary;
} // namespace RED4ext

// clang-format on
