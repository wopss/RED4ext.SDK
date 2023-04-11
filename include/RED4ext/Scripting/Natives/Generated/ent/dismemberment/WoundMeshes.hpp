#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/FillMeshInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/MeshInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/ResourceSetE.hpp>

namespace RED4ext
{
namespace ent::dismemberment
{
struct WoundMeshes
{
    static constexpr const char* NAME = "entdismembermentWoundMeshes";
    static constexpr const char* ALIAS = NAME;

    ent::dismemberment::ResourceSetE ResourceSet; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    DynArray<ent::dismemberment::MeshInfo> Meshes; // 08
    DynArray<ent::dismemberment::FillMeshInfo> FillMeshes; // 18
};
RED4EXT_ASSERT_SIZE(WoundMeshes, 0x28);
} // namespace ent::dismemberment
using entdismembermentWoundMeshes = ent::dismemberment::WoundMeshes;
} // namespace RED4ext

// clang-format on
