#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/interop/TerrainEditToolCreationSlotInfo.hpp>

namespace RED4ext
{
namespace interop
{
struct TerrainEditToolInfo
{
    static constexpr const char* NAME = "interopTerrainEditToolInfo";
    static constexpr const char* ALIAS = NAME;

    int32_t defaultHeightmapMode; // 00
    int32_t defaultEmptyHeightmapWidth; // 04
    int32_t defaultEmptyHeightmapHeight; // 08
    float defaultEmptyHeightmapMaskFalloff; // 0C
    float defaultEmptyHeightmapMaskRoundness; // 10
    uint32_t defaultEmptyHeightmapZeroMaskMargin; // 14
    CString defaultHeightmap1; // 18
    CString defaultHeightmap2; // 38
    CString defaultColormap1; // 58
    CString defaultColormap2; // 78
    DynArray<interop::TerrainEditToolCreationSlotInfo> creationSlots; // 98
};
RED4EXT_ASSERT_SIZE(TerrainEditToolInfo, 0xA8);
} // namespace interop
using interopTerrainEditToolInfo = interop::TerrainEditToolInfo;
} // namespace RED4ext

// clang-format on
