#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GroupProxyMeshBuildParams.hpp>

namespace RED4ext
{
namespace world
{
struct ProxyMeshGroupBuildParams
{
    static constexpr const char* NAME = "worldProxyMeshGroupBuildParams";
    static constexpr const char* ALIAS = NAME;

    bool overridePrefabBuildParams; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    world::GroupProxyMeshBuildParams buildParams; // 08
};
RED4EXT_ASSERT_SIZE(ProxyMeshGroupBuildParams, 0xF0);
} // namespace world
using worldProxyMeshGroupBuildParams = world::ProxyMeshGroupBuildParams;
} // namespace RED4ext

// clang-format on
