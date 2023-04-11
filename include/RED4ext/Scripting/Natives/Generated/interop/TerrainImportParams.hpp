#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/EditorObjectIDPath.hpp>

namespace RED4ext
{
namespace interop
{
struct TerrainImportParams
{
    static constexpr const char* NAME = "interopTerrainImportParams";
    static constexpr const char* ALIAS = NAME;

    uint32_t cellRes; // 00
    uint32_t cellSize; // 04
    Vector3 scale; // 08
    Vector3 position; // 14
    Vector2 extraOffset; // 20
    uint32_t tileWidth; // 28
    uint32_t tileHeight; // 2C
    uint32_t prefabPlacementInterval; // 30
    bool importHeightMaps; // 34
    bool importColorMaps; // 35
    bool importControlMaps; // 36
    bool overwriteTransformsOfExistingNodes; // 37
    CString nodesNamingPattern; // 38
    CString prefabsNamingPattern; // 58
    CString prefabsDestinationPath; // 78
    tools::EditorObjectIDPath dstPrefabNodePath; // 98
};
RED4EXT_ASSERT_SIZE(TerrainImportParams, 0xA8);
} // namespace interop
using interopTerrainImportParams = interop::TerrainImportParams;
} // namespace RED4ext

// clang-format on
