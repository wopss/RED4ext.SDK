#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/events/EmitterEvent.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct PlaySoundOnEmitter : game::audio::events::EmitterEvent
{
    static constexpr const char* NAME = "gameaudioeventsPlaySoundOnEmitter";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 58
};
RED4EXT_ASSERT_SIZE(PlaySoundOnEmitter, 0x60);
} // namespace game::audio::events
using gameaudioeventsPlaySoundOnEmitter = game::audio::events::PlaySoundOnEmitter;
} // namespace RED4ext

// clang-format on
