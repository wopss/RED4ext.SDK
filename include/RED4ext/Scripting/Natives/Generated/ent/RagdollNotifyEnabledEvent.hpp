#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct RagdollNotifyEnabledEvent : red::Event
{
    static constexpr const char* NAME = "entRagdollNotifyEnabledEvent";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID instigator; // 40
};
RED4EXT_ASSERT_SIZE(RagdollNotifyEnabledEvent, 0x48);
} // namespace ent
} // namespace RED4ext
