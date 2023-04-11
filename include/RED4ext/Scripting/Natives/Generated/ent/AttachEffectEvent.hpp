#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AttachEffectEvent : red::Event
{
    static constexpr const char* NAME = "entAttachEffectEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xB0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AttachEffectEvent, 0xB0);
} // namespace ent
using entAttachEffectEvent = ent::AttachEffectEvent;
} // namespace RED4ext

// clang-format on
