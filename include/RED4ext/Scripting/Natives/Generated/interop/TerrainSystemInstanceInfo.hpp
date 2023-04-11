#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace interop
{
struct TerrainSystemInstanceInfo
{
    static constexpr const char* NAME = "interopTerrainSystemInstanceInfo";
    static constexpr const char* ALIAS = NAME;

    uint32_t cellSize; // 00
    uint32_t cellRes; // 04
    uint32_t numUsedCells; // 08
    uint32_t numPatches; // 0C
    uint32_t numPatchesFromTerrainNodes; // 10
    uint32_t numPatchesFromRoadNodes; // 14
    uint32_t gridWidth; // 18
    uint32_t gridHeight; // 1C
    bool isEnabled; // 20
    bool isVisibleCompiled; // 21
    bool useDebugDraw; // 22
    uint8_t unk23[0x28 - 0x23]; // 23
    DynArray<uint32_t> numUsedLODCells; // 28
};
RED4EXT_ASSERT_SIZE(TerrainSystemInstanceInfo, 0x38);
} // namespace interop
using interopTerrainSystemInstanceInfo = interop::TerrainSystemInstanceInfo;
} // namespace RED4ext

// clang-format on
