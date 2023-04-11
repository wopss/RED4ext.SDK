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
struct EmitterEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsEmitterEvent";
    static constexpr const char* ALIAS = NAME;

    CName emitterName; // 40
    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(EmitterEvent, 0x58);
} // namespace game::audio::events
using gameaudioeventsEmitterEvent = game::audio::events::EmitterEvent;
} // namespace RED4ext

// clang-format on
