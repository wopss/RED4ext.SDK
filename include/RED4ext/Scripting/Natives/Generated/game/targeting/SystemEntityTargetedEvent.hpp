#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game::targeting { 
struct SystemEntityTargetedEvent : red::Event
{
    static constexpr const char* NAME = "gametargetingSystemEntityTargetedEvent";
    static constexpr const char* ALIAS = "EntityTargetedEvent";

    WeakHandle<ent::Entity> targetingEntity; // 40
};
RED4EXT_ASSERT_SIZE(SystemEntityTargetedEvent, 0x50);
} // namespace game::targeting
using EntityTargetedEvent = game::targeting::SystemEntityTargetedEvent;
} // namespace RED4ext
