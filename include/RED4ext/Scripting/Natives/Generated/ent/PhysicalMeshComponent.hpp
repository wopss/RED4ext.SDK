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

    uint8_t unk1D0[0x200 - 0x1D0]; // 1D0
    Handle<physics::FilterData> filterData; // 200
    uint8_t unk210[0x218 - 0x210]; // 210
    CName visibilityAnimationParam; // 218
    uint8_t unk220[0x228 - 0x220]; // 220
    physics::FilterDataSource filterDataSource; // 228
    physics::SimulationType simulationType; // 229
    bool startInactive; // 22A
    bool useResourceSimulationType; // 22B
    uint8_t unk22C[0x230 - 0x22C]; // 22C
};
RED4EXT_ASSERT_SIZE(PhysicalMeshComponent, 0x230);
} // namespace ent
using PhysicalMeshComponent = ent::PhysicalMeshComponent;
} // namespace RED4ext
