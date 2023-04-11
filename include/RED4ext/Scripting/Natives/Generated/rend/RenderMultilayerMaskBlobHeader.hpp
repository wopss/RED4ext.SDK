#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace rend
{
struct RenderMultilayerMaskBlobHeader
{
    static constexpr const char* NAME = "rendRenderMultilayerMaskBlobHeader";
    static constexpr const char* ALIAS = NAME;

    uint32_t version; // 00
    uint32_t atlasWidth; // 04
    uint32_t atlasHeight; // 08
    uint32_t numLayers; // 0C
    uint32_t maskWidth; // 10
    uint32_t maskHeight; // 14
    uint32_t maskWidthLow; // 18
    uint32_t maskHeightLow; // 1C
    uint32_t maskTileSize; // 20
    uint32_t flags; // 24
};
RED4EXT_ASSERT_SIZE(RenderMultilayerMaskBlobHeader, 0x28);
} // namespace rend
using rendRenderMultilayerMaskBlobHeader = rend::RenderMultilayerMaskBlobHeader;
} // namespace RED4ext

// clang-format on
