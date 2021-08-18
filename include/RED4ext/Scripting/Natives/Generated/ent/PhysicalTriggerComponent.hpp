#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/TriggerShape.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace ent { 
struct PhysicalTriggerComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entPhysicalTriggerComponent";
    static constexpr const char* ALIAS = "PhysicalTriggerComponent";

    Handle<physics::FilterData> filterData; // 120
    physics::SimulationType simulationType; // 130
    uint8_t unk131[0x140 - 0x131]; // 131
    physics::TriggerShape shape; // 140
    uint8_t unk170[0x180 - 0x170]; // 170
};
RED4EXT_ASSERT_SIZE(PhysicalTriggerComponent, 0x180);
} // namespace ent
using PhysicalTriggerComponent = ent::PhysicalTriggerComponent;
} // namespace RED4ext
