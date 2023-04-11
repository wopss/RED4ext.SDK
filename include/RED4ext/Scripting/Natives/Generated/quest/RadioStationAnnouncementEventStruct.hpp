#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/RadioSpeakerType.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace quest
{
struct RadioStationAnnouncementEventStruct
{
    static constexpr const char* NAME = "questRadioStationAnnouncementEventStruct";
    static constexpr const char* ALIAS = NAME;

    CName radioStationName; // 00
    RaRef<scn::SceneResource> announcementScene; // 08
    CName sceneInput; // 10
    bool queueAnnouncement; // 18
    bool blockSignal; // 19
    uint8_t unk1A[0x1C - 0x1A]; // 1A
    audio::RadioSpeakerType speaker; // 1C
};
RED4EXT_ASSERT_SIZE(RadioStationAnnouncementEventStruct, 0x20);
} // namespace quest
using questRadioStationAnnouncementEventStruct = quest::RadioStationAnnouncementEventStruct;
} // namespace RED4ext

// clang-format on
