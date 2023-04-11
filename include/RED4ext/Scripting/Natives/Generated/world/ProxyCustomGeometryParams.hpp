#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyMeshUVType.hpp>

namespace RED4ext
{
namespace world
{
struct ProxyCustomGeometryParams
{
    static constexpr const char* NAME = "worldProxyCustomGeometryParams";
    static constexpr const char* ALIAS = NAME;

    bool useLimiterHelper; // 00
    world::ProxyMeshUVType uvType; // 01
};
RED4EXT_ASSERT_SIZE(ProxyCustomGeometryParams, 0x2);
} // namespace world
using worldProxyCustomGeometryParams = world::ProxyCustomGeometryParams;
} // namespace RED4ext

// clang-format on
