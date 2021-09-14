#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/SkinnedMeshComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace ent { 
struct PhysicalSkinnedMeshComponent : ent::SkinnedMeshComponent
{
    static constexpr const char* NAME = "entPhysicalSkinnedMeshComponent";
    static constexpr const char* ALIAS = "PhysicalSkinnedMeshComponent";

    uint8_t unk270[0x2A8 - 0x270]; // 270
    Handle<physics::FilterData> filterData; // 2A8
    uint8_t unk2B8[0x2CC - 0x2B8]; // 2B8
    physics::SimulationType simulationType; // 2CC
    physics::FilterDataSource filterDataSource; // 2CD
    bool startInactive; // 2CE
    uint8_t unk2CF[0x2D0 - 0x2CF]; // 2CF
    bool useResourceSimulationType; // 2D0
    uint8_t unk2D1[0x2E0 - 0x2D1]; // 2D1
};
RED4EXT_ASSERT_SIZE(PhysicalSkinnedMeshComponent, 0x2E0);
} // namespace ent
using PhysicalSkinnedMeshComponent = ent::PhysicalSkinnedMeshComponent;
} // namespace RED4ext
