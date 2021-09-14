#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace ent { 
struct PhysicalMeshComponent : ent::MeshComponent
{
    static constexpr const char* NAME = "entPhysicalMeshComponent";
    static constexpr const char* ALIAS = "PhysicalMeshComponent";

    uint8_t unk1E0[0x210 - 0x1E0]; // 1E0
    Handle<physics::FilterData> filterData; // 210
    uint8_t unk220[0x228 - 0x220]; // 220
    CName visibilityAnimationParam; // 228
    uint8_t unk230[0x238 - 0x230]; // 230
    physics::FilterDataSource filterDataSource; // 238
    physics::SimulationType simulationType; // 239
    bool startInactive; // 23A
    bool useResourceSimulationType; // 23B
    uint8_t unk23C[0x240 - 0x23C]; // 23C
};
RED4EXT_ASSERT_SIZE(PhysicalMeshComponent, 0x240);
} // namespace ent
using PhysicalMeshComponent = ent::PhysicalMeshComponent;
} // namespace RED4ext
