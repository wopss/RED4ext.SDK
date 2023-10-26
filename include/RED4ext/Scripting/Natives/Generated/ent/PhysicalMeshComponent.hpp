#pragma once

// clang-format off

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

namespace ent
{
struct __declspec(align(0x10)) PhysicalMeshComponent : ent::MeshComponent
{
    static constexpr const char* NAME = "entPhysicalMeshComponent";
    static constexpr const char* ALIAS = "PhysicalMeshComponent";

    uint8_t unk1E0[0x210 - 0x1E0]; // 1E0
    Handle<physics::FilterData> filterData; // 210
    CName visibilityAnimationParam; // 220
    uint8_t unk228[0x230 - 0x228]; // 228
    physics::FilterDataSource filterDataSource; // 230
    physics::SimulationType simulationType; // 231
    bool startInactive; // 232
    bool useResourceSimulationType; // 233
    uint8_t unk234[0x240 - 0x234]; // 234
};
RED4EXT_ASSERT_SIZE(PhysicalMeshComponent, 0x240);
} // namespace ent
using entPhysicalMeshComponent = ent::PhysicalMeshComponent;
using PhysicalMeshComponent = ent::PhysicalMeshComponent;
} // namespace RED4ext

// clang-format on
