#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct VoiceTriggerRewireMapItem
{
    static constexpr const char* NAME = "audioVoiceTriggerRewireMapItem";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    uint32_t inputToBeRewiredVariationIndex; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    CName inputToBeActuallyPlayedName; // 10
    uint32_t inputToBeActuallyPlayedVariationIndex; // 18
    bool allowReuse; // 1C
    uint8_t unk1D[0x20 - 0x1D]; // 1D
};
RED4EXT_ASSERT_SIZE(VoiceTriggerRewireMapItem, 0x20);
} // namespace audio
using audioVoiceTriggerRewireMapItem = audio::VoiceTriggerRewireMapItem;
} // namespace RED4ext

// clang-format on
