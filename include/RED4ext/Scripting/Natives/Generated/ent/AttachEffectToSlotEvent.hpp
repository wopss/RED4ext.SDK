#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AttachEffectEvent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) AttachEffectToSlotEvent : ent::AttachEffectEvent
{
    static constexpr const char* NAME = "entAttachEffectToSlotEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB0[0xC0 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(AttachEffectToSlotEvent, 0xC0);
} // namespace ent
using entAttachEffectToSlotEvent = ent::AttachEffectToSlotEvent;
} // namespace RED4ext

// clang-format on
