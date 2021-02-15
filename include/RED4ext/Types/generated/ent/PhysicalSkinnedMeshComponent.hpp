#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/ent/SkinnedMeshComponent.hpp>
#include <RED4ext/Types/generated/physics/FilterDataSource.hpp>
#include <RED4ext/Types/generated/physics/SimulationType.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace ent { 
struct PhysicalSkinnedMeshComponent : ent::SkinnedMeshComponent
{
    static constexpr const char* NAME = "entPhysicalSkinnedMeshComponent";
    static constexpr const char* ALIAS = "PhysicalSkinnedMeshComponent";

    uint8_t unk260[0x298 - 0x260]; // 260
    Handle<physics::FilterData> filterData; // 298
    uint8_t unk2A8[0x2BC - 0x2A8]; // 2A8
    physics::SimulationType simulationType; // 2BC
    physics::FilterDataSource filterDataSource; // 2BD
    bool startInactive; // 2BE
    uint8_t unk2BF[0x2C0 - 0x2BF]; // 2BF
    bool useResourceSimulationType; // 2C0
    uint8_t unk2C1[0x2D0 - 0x2C1]; // 2C1
};
RED4EXT_ASSERT_SIZE(PhysicalSkinnedMeshComponent, 0x2D0);
} // namespace ent
using PhysicalSkinnedMeshComponent = ent::PhysicalSkinnedMeshComponent;
} // namespace RED4ext
