#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/RagdollImpactPointData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace ent
{
struct RagdollImpactEvent : red::Event
{
    static constexpr const char* NAME = "entRagdollImpactEvent";
    static constexpr const char* ALIAS = "RagdollImpactEvent";

    WeakHandle<ent::Entity> otherEntity; // 40
    bool triggeredSimulation; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    DynArray<ent::RagdollImpactPointData> impactPoints; // 58
};
RED4EXT_ASSERT_SIZE(RagdollImpactEvent, 0x68);
} // namespace ent
using entRagdollImpactEvent = ent::RagdollImpactEvent;
using RagdollImpactEvent = ent::RagdollImpactEvent;
} // namespace RED4ext

// clang-format on
