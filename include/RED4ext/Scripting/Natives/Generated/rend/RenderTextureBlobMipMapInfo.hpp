#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderTextureBlobMemoryLayout.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderTextureBlobPlacement.hpp>

namespace RED4ext
{
namespace rend
{
struct RenderTextureBlobMipMapInfo
{
    static constexpr const char* NAME = "rendRenderTextureBlobMipMapInfo";
    static constexpr const char* ALIAS = NAME;

    rend::RenderTextureBlobMemoryLayout layout; // 00
    rend::RenderTextureBlobPlacement placement; // 08
};
RED4EXT_ASSERT_SIZE(RenderTextureBlobMipMapInfo, 0x10);
} // namespace rend
using rendRenderTextureBlobMipMapInfo = rend::RenderTextureBlobMipMapInfo;
} // namespace RED4ext

// clang-format on
