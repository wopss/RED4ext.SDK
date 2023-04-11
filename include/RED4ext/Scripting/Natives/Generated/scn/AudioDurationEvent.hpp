#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AudioPlaybackDirectionSupportFlag.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn
{
struct AudioDurationEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnAudioDurationEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    CName audioEventName; // 60
    scn::AudioPlaybackDirectionSupportFlag playbackDirectionSupport; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(AudioDurationEvent, 0x70);
} // namespace scn
using scnAudioDurationEvent = scn::AudioDurationEvent;
} // namespace RED4ext

// clang-format on
