#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/RadioStationSongEventStruct.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct RadioSongNodeType : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questRadioSongNodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::RadioStationSongEventStruct> radioStationEvents; // 40
    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(RadioSongNodeType, 0x70);
} // namespace quest
using questRadioSongNodeType = quest::RadioSongNodeType;
} // namespace RED4ext

// clang-format on
