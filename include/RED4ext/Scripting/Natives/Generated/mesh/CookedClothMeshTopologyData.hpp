#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace mesh
{
struct CookedClothMeshTopologyData
{
    static constexpr const char* NAME = "meshCookedClothMeshTopologyData";
    static constexpr const char* ALIAS = NAME;

    DataBuffer cookedData; // 00
    DynArray<uint32_t> gfxIndexToTriangles; // 28
    DynArray<uint32_t> phxIndexToTriangles; // 38
    DynArray<uint32_t> gfxBarycentrics; // 48
    DynArray<uint32_t> phxBarycentrics; // 58
    DynArray<uint32_t> phxLodSwitchData; // 68
    DynArray<uint32_t> phxSimulated; // 78
    uint32_t gfxNumIndicesToTriangles; // 88
    uint32_t phxNumIndicesToTriangles; // 8C
    uint32_t gfxNumBarycentrics; // 90
    uint32_t phxNumBarycentrics; // 94
    uint32_t phxNumLodSwitchData; // 98
    uint32_t phxNumSimulated; // 9C
};
RED4EXT_ASSERT_SIZE(CookedClothMeshTopologyData, 0xA0);
} // namespace mesh
using meshCookedClothMeshTopologyData = mesh::CookedClothMeshTopologyData;
} // namespace RED4ext

// clang-format on
