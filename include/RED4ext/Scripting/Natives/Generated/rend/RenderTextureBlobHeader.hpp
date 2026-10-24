#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/eTextureFormat.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/HistogramBias.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderTextureBlobMipMapInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderTextureBlobSizeInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderTextureBlobTextureInfo.hpp>

namespace RED4ext
{
namespace rend
{
struct RenderTextureBlobHeader
{
    static constexpr const char* NAME = "rendRenderTextureBlobHeader";
    static constexpr const char* ALIAS = NAME;

    uint32_t version; // 00
    rend::RenderTextureBlobSizeInfo sizeInfo; // 04
    uint8_t unk0A[0xC - 0xA]; // A
    rend::RenderTextureBlobTextureInfo textureInfo; // 0C
    DynArray<rend::RenderTextureBlobMipMapInfo> mipMapInfo; // 20
    DynArray<rend::HistogramBias> histogramData; // 30
    uint32_t flags; // 40
    GpuWrapApi::eTextureFormat formatOverride; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(RenderTextureBlobHeader, 0x48);
} // namespace rend
using rendRenderTextureBlobHeader = rend::RenderTextureBlobHeader;
} // namespace RED4ext

// clang-format on
