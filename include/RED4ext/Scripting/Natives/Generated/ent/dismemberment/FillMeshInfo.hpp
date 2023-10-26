#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/DangleInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/MeshInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/PlacementE.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/SimulationTypeE.hpp>

namespace RED4ext
{
namespace ent::dismemberment
{
struct __declspec(align(0x10)) FillMeshInfo : ent::dismemberment::MeshInfo
{
    static constexpr const char* NAME = "entdismembermentFillMeshInfo";
    static constexpr const char* ALIAS = NAME;

    ent::dismemberment::PlacementE Placement; // 80
    ent::dismemberment::SimulationTypeE Simulation; // 82
    ent::dismemberment::DangleInfo Dangle; // 84
    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(FillMeshInfo, 0xA0);
} // namespace ent::dismemberment
using entdismembermentFillMeshInfo = ent::dismemberment::FillMeshInfo;
} // namespace RED4ext

// clang-format on
