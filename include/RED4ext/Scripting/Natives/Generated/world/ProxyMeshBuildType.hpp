#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world {
enum class ProxyMeshBuildType : int8_t
{
    ProxyFromProxy = 0,
    ProxyFromScratch = 1,
    OnlyFromChildProxies = 2,
};
} // namespace world
using worldProxyMeshBuildType = world::ProxyMeshBuildType;
} // namespace RED4ext

// clang-format on
