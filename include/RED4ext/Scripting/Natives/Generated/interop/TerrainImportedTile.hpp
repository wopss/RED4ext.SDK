#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Point.hpp>

namespace RED4ext
{
namespace interop
{
struct TerrainImportedTile
{
    static constexpr const char* NAME = "interopTerrainImportedTile";
    static constexpr const char* ALIAS = NAME;

    CString heightMapAbsolutePath; // 00
    CString controlMapAbsolutePath; // 20
    CString colorMapAbsolutePath; // 40
    Point position; // 60
};
RED4EXT_ASSERT_SIZE(TerrainImportedTile, 0x68);
} // namespace interop
using interopTerrainImportedTile = interop::TerrainImportedTile;
} // namespace RED4ext

// clang-format on
