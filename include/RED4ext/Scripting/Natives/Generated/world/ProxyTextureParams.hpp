#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyMeshTexRes.hpp>

namespace RED4ext
{
namespace world
{
struct ProxyTextureParams
{
    static constexpr const char* NAME = "worldProxyTextureParams";
    static constexpr const char* ALIAS = NAME;

    world::ProxyMeshTexRes albedoTextureResolution; // 00
    bool generateAlbedo; // 01
    world::ProxyMeshTexRes normalTextureResolution; // 02
    bool generateNormal; // 03
    world::ProxyMeshTexRes roughnessTextureResolution; // 04
    bool generateRoughness; // 05
    world::ProxyMeshTexRes metalnessTextureResolution; // 06
    bool generateMetalness; // 07
    bool exportVertexColor; // 08
    bool disableTextureFilter; // 09
    bool diffuseAlphaAsEmissive; // 0A
};
RED4EXT_ASSERT_SIZE(ProxyTextureParams, 0xB);
} // namespace world
using worldProxyTextureParams = world::ProxyTextureParams;
} // namespace RED4ext

// clang-format on
