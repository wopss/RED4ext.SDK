#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events { 
struct SetListenerOverride : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsSetListenerOverride";
    static constexpr const char* ALIAS = "SetAudioOverrideEvent";

    bool enable; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(SetListenerOverride, 0x48);
} // namespace game::audio::events
using SetAudioOverrideEvent = game::audio::events::SetListenerOverride;
} // namespace RED4ext
