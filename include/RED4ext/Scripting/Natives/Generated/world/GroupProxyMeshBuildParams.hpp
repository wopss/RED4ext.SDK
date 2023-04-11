#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyMeshBuildParams.hpp>

namespace RED4ext
{
namespace world
{
struct GroupProxyMeshBuildParams : world::ProxyMeshBuildParams
{
    static constexpr const char* NAME = "worldGroupProxyMeshBuildParams";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(GroupProxyMeshBuildParams, 0xE8);
} // namespace world
using worldGroupProxyMeshBuildParams = world::GroupProxyMeshBuildParams;
} // namespace RED4ext

// clang-format on
