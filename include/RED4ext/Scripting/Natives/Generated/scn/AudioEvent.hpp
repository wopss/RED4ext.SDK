#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AudioFastForwardSupport.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn
{
struct AudioEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnAudioEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    CName audioEventName; // 60
    CName ambientUniqueName; // 68
    CName emitterName; // 70
    scn::AudioFastForwardSupport fastForwardSupport; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(AudioEvent, 0x80);
} // namespace scn
using scnAudioEvent = scn::AudioEvent;
} // namespace RED4ext

// clang-format on
