#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace rend
{
struct RenderTextureBlobSizeInfo
{
    static constexpr const char* NAME = "rendRenderTextureBlobSizeInfo";
    static constexpr const char* ALIAS = NAME;

    uint16_t width; // 00
    uint16_t height; // 02
    uint16_t depth; // 04
};
RED4EXT_ASSERT_SIZE(RenderTextureBlobSizeInfo, 0x6);
} // namespace rend
using rendRenderTextureBlobSizeInfo = rend::RenderTextureBlobSizeInfo;
} // namespace RED4ext

// clang-format on
