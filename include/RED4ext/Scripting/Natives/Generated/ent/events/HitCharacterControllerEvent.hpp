#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace ent { struct IComponent; }

namespace ent::events
{
struct HitCharacterControllerEvent : red::Event
{
    static constexpr const char* NAME = "enteventsHitCharacterControllerEvent";
    static constexpr const char* ALIAS = "HitCharacterControllerEvent";

    WeakHandle<ent::Entity> entity; // 40
    WeakHandle<ent::IComponent> component; // 50
};
RED4EXT_ASSERT_SIZE(HitCharacterControllerEvent, 0x60);
} // namespace ent::events
using enteventsHitCharacterControllerEvent = ent::events::HitCharacterControllerEvent;
using HitCharacterControllerEvent = ent::events::HitCharacterControllerEvent;
} // namespace RED4ext

// clang-format on
