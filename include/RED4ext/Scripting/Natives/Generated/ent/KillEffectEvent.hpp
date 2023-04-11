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
struct KillEffectEvent : red::Event
{
    static constexpr const char* NAME = "entKillEffectEvent";
    static constexpr const char* ALIAS = NAME;

    CName effectName; // 40
    bool breakAllLoops; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(KillEffectEvent, 0x50);
} // namespace ent
using entKillEffectEvent = ent::KillEffectEvent;
} // namespace RED4ext

// clang-format on
