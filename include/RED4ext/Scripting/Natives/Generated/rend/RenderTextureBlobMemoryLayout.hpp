#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace rend
{
struct RenderTextureBlobMemoryLayout
{
    static constexpr const char* NAME = "rendRenderTextureBlobMemoryLayout";
    static constexpr const char* ALIAS = NAME;

    uint32_t rowPitch; // 00
    uint32_t slicePitch; // 04
};
RED4EXT_ASSERT_SIZE(RenderTextureBlobMemoryLayout, 0x8);
} // namespace rend
using rendRenderTextureBlobMemoryLayout = rend::RenderTextureBlobMemoryLayout;
} // namespace RED4ext

// clang-format on
