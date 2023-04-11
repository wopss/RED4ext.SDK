#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAudioNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/RadioStationAnnouncementEventStruct.hpp>

namespace RED4ext
{
namespace quest
{
struct RadioAnnouncementNodeType : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questRadioAnnouncementNodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::RadioStationAnnouncementEventStruct> radioStationEvents; // 40
};
RED4EXT_ASSERT_SIZE(RadioAnnouncementNodeType, 0x50);
} // namespace quest
using questRadioAnnouncementNodeType = quest::RadioAnnouncementNodeType;
} // namespace RED4ext

// clang-format on
