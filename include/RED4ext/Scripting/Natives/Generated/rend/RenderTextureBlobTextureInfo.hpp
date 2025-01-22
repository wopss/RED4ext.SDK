#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GpuWrapApi/eTextureType.hpp>

namespace RED4ext
{
namespace rend
{
struct RenderTextureBlobTextureInfo
{
    static constexpr const char* NAME = "rendRenderTextureBlobTextureInfo";
    static constexpr const char* ALIAS = NAME;

    GpuWrapApi::eTextureType type; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    uint32_t textureDataSize; // 04
    uint32_t sliceSize; // 08
    uint32_t dataAlignment; // 0C
    uint16_t sliceCount; // 10
    uint8_t mipCount; // 12
    uint8_t unk13[0x14 - 0x13]; // 13
};
RED4EXT_ASSERT_SIZE(RenderTextureBlobTextureInfo, 0x14);
} // namespace rend
using rendRenderTextureBlobTextureInfo = rend::RenderTextureBlobTextureInfo;
} // namespace RED4ext

// clang-format on
