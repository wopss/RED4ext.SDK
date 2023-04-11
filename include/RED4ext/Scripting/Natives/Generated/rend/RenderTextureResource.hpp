#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct IRenderResourceBlob;

namespace rend
{
struct RenderTextureResource
{
    static constexpr const char* NAME = "rendRenderTextureResource";
    static constexpr const char* ALIAS = NAME;

    Handle<IRenderResourceBlob> renderResourceBlobPC; // 00
};
RED4EXT_ASSERT_SIZE(RenderTextureResource, 0x10);
} // namespace rend
using rendRenderTextureResource = rend::RenderTextureResource;
} // namespace RED4ext

// clang-format on
