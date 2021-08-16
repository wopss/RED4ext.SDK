#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/events/EmitterEvent.hpp>

namespace RED4ext
{
namespace game::audio::events { 
struct StopSoundOnEmitter : game::audio::events::EmitterEvent
{
    static constexpr const char* NAME = "gameaudioeventsStopSoundOnEmitter";
    static constexpr const char* ALIAS = NAME;

    CName soundName; // 58
};
RED4EXT_ASSERT_SIZE(StopSoundOnEmitter, 0x60);
} // namespace game::audio::events
} // namespace RED4ext
