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
struct __declspec(align(0x10)) AttachEffectToComponentEvent : ent::AttachEffectEvent
{
    static constexpr const char* NAME = "entAttachEffectToComponentEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AttachEffectToComponentEvent, 0xB0);
} // namespace ent
using entAttachEffectToComponentEvent = ent::AttachEffectToComponentEvent;
} // namespace RED4ext

// clang-format on
