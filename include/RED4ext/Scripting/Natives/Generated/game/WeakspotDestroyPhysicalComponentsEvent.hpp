#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/WeakspotPhysicalDestructionComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct WeakspotDestroyPhysicalComponentsEvent : red::Event
{
    static constexpr const char* NAME = "gameWeakspotDestroyPhysicalComponentsEvent";
    static constexpr const char* ALIAS = "WeakspotDestroyPhysicalComponentsEvent";

    DynArray<game::WeakspotPhysicalDestructionComponent> components; // 40
};
RED4EXT_ASSERT_SIZE(WeakspotDestroyPhysicalComponentsEvent, 0x50);
} // namespace game
using gameWeakspotDestroyPhysicalComponentsEvent = game::WeakspotDestroyPhysicalComponentsEvent;
using WeakspotDestroyPhysicalComponentsEvent = game::WeakspotDestroyPhysicalComponentsEvent;
} // namespace RED4ext

// clang-format on
