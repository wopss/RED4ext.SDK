#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace rend
{
struct RenderTextureBlobPlacement
{
    static constexpr const char* NAME = "rendRenderTextureBlobPlacement";
    static constexpr const char* ALIAS = NAME;

    uint32_t offset; // 00
    uint32_t size; // 04
};
RED4EXT_ASSERT_SIZE(RenderTextureBlobPlacement, 0x8);
} // namespace rend
using rendRenderTextureBlobPlacement = rend::RenderTextureBlobPlacement;
} // namespace RED4ext

// clang-format on
