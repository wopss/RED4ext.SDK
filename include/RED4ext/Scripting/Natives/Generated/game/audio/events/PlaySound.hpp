#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct PlaySound : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsPlaySound";
    static constexpr const char* ALIAS = "SoundPlayEvent";

    CName soundName; // 40
    CName emitterName; // 48
    CName audioTag; // 50
    float seekTime; // 58
    bool playUnique; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
};
RED4EXT_ASSERT_SIZE(PlaySound, 0x60);
} // namespace game::audio::events
using gameaudioeventsPlaySound = game::audio::events::PlaySound;
using SoundPlayEvent = game::audio::events::PlaySound;
} // namespace RED4ext

// clang-format on
