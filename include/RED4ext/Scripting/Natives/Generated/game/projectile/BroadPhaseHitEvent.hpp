#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/TraceResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace ent { struct IComponent; }

namespace game::projectile
{
struct __declspec(align(0x10)) BroadPhaseHitEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileBroadPhaseHitEvent";
    static constexpr const char* ALIAS = NAME;

    physics::TraceResult traceResult; // 40
    Vector4 position; // A0
    WeakHandle<ent::Entity> hitObject; // B0
    WeakHandle<ent::IComponent> hitComponent; // C0
};
RED4EXT_ASSERT_SIZE(BroadPhaseHitEvent, 0xD0);
} // namespace game::projectile
using gameprojectileBroadPhaseHitEvent = game::projectile::BroadPhaseHitEvent;
} // namespace RED4ext

// clang-format on
