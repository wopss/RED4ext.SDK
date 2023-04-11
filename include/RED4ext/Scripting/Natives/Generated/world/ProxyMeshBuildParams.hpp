#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyCoreAxis.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyCustomGeometryParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyGroupingNormals.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyMeshAdvancedBuildParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyMeshBuildType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyMeshOutputType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyTextureParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyWindowsParams.hpp>

namespace RED4ext
{
namespace world
{
struct ProxyMeshBuildParams
{
    static constexpr const char* NAME = "worldProxyMeshBuildParams";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    bool buildProxy; // 08
    world::ProxyMeshBuildType type; // 09
    world::ProxyMeshOutputType usedMesh; // 0A
    uint8_t unk0B[0xC - 0xB]; // B
    uint32_t polycount; // 0C
    float polycountPercentage; // 10
    uint32_t resolution; // 14
    world::ProxyCoreAxis coreAxis; // 18
    world::ProxyGroupingNormals groupingNormals; // 19
    bool forceSurfaceFlattening; // 1A
    bool forceSeamlessModule; // 1B
    bool enableAlphaMask; // 1C
    uint8_t unk1D[0x20 - 0x1D]; // 1D
    world::ProxyWindowsParams windows; // 20
    world::ProxyTextureParams textures; // 44
    world::ProxyCustomGeometryParams customGeometry; // 4F
    uint8_t unk51[0x54 - 0x51]; // 51
    world::ProxyMeshAdvancedBuildParams advancedParams; // 54
    uint8_t unkE4[0xE8 - 0xE4]; // E4
};
RED4EXT_ASSERT_SIZE(ProxyMeshBuildParams, 0xE8);
} // namespace world
using worldProxyMeshBuildParams = world::ProxyMeshBuildParams;
} // namespace RED4ext

// clang-format on
