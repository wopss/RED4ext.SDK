#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world { 
enum class ProxyMeshBuildType : uint8_t
{
    ProxyFromProxy = 0,
    ProxyFromScratch = 1,
    OnlyFromChildProxies = 2,
};
} // namespace world
} // namespace RED4ext
