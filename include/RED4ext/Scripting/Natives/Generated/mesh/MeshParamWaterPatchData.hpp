#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamWaterPatchData : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamWaterPatchData";
    static constexpr const char* ALIAS = NAME;

    bool animLoop; // 30
    uint8_t unk31[0x34 - 0x31]; // 31
    float animLength; // 34
    StaticArray<StaticArray<float, 16>, 4096> nodes; // 38
    uint8_t unk4403C[0x44040 - 0x4403C]; // 4403C
};
RED4EXT_ASSERT_SIZE(MeshParamWaterPatchData, 0x44040);
} // namespace mesh
using meshMeshParamWaterPatchData = mesh::MeshParamWaterPatchData;
} // namespace RED4ext

// clang-format on
