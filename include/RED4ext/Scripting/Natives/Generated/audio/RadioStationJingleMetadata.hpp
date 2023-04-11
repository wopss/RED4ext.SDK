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
struct RadioStationJingleMetadata
{
    static constexpr const char* NAME = "audioRadioStationJingleMetadata";
    static constexpr const char* ALIAS = NAME;

    CName introJingleEvent; // 00
    float introDuration; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    CName middleJingleEvent; // 10
    CName endJingleEvent; // 18
    float outroDuration; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(RadioStationJingleMetadata, 0x28);
} // namespace audio
using audioRadioStationJingleMetadata = audio::RadioStationJingleMetadata;
} // namespace RED4ext

// clang-format on
