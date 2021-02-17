#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/audio/RadioStationSongEventStruct.hpp>
#include <RED4ext/Types/generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct RadioSongNodeType : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questRadioSongNodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::RadioStationSongEventStruct> radioStationEvents; // 40
    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(RadioSongNodeType, 0x70);
} // namespace quest
} // namespace RED4ext
