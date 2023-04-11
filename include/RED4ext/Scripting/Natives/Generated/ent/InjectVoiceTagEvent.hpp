#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct InjectVoiceTagEvent : red::Event
{
    static constexpr const char* NAME = "entInjectVoiceTagEvent";
    static constexpr const char* ALIAS = NAME;

    CName voiceTagName; // 40
    bool forceInjection; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(InjectVoiceTagEvent, 0x50);
} // namespace ent
using entInjectVoiceTagEvent = ent::InjectVoiceTagEvent;
} // namespace RED4ext

// clang-format on
