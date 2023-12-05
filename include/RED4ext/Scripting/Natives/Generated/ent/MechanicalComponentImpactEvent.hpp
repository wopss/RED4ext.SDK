#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ImpactPointData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace ent
{
struct MechanicalComponentImpactEvent : red::Event
{
    static constexpr const char* NAME = "entMechanicalComponentImpactEvent";
    static constexpr const char* ALIAS = "MechanicalComponentImpactEvent";

    WeakHandle<ent::Entity> otherEntity; // 40
    DynArray<ent::ImpactPointData> impactPoints; // 50
};
RED4EXT_ASSERT_SIZE(MechanicalComponentImpactEvent, 0x60);
} // namespace ent
using entMechanicalComponentImpactEvent = ent::MechanicalComponentImpactEvent;
using MechanicalComponentImpactEvent = ent::MechanicalComponentImpactEvent;
} // namespace RED4ext

// clang-format on
