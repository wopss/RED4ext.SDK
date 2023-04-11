#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyBoundingBoxSyncParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyMiscAdvancedParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxySurfaceFlattenParams.hpp>

namespace RED4ext
{
namespace world
{
struct ProxyMeshAdvancedBuildParams
{
    static constexpr const char* NAME = "worldProxyMeshAdvancedBuildParams";
    static constexpr const char* ALIAS = NAME;

    world::ProxySurfaceFlattenParams surfaceFlattenParams; // 00
    world::ProxyBoundingBoxSyncParams boundingBoxSyncParams; // 0C
    world::ProxyMiscAdvancedParams misc; // 24
    float rayMaxDistance; // 88
    float rayBias; // 8C
};
RED4EXT_ASSERT_SIZE(ProxyMeshAdvancedBuildParams, 0x90);
} // namespace world
using worldProxyMeshAdvancedBuildParams = world::ProxyMeshAdvancedBuildParams;
} // namespace RED4ext

// clang-format on
