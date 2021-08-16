#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AttachEffectEvent.hpp>

namespace RED4ext
{
namespace ent { 
struct AttachEffectToComponentEvent : ent::AttachEffectEvent
{
    static constexpr const char* NAME = "entAttachEffectToComponentEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AttachEffectToComponentEvent, 0xB0);
} // namespace ent
} // namespace RED4ext
