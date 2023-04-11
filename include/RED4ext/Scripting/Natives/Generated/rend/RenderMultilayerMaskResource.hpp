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
struct RenderMultilayerMaskResource
{
    static constexpr const char* NAME = "rendRenderMultilayerMaskResource";
    static constexpr const char* ALIAS = NAME;

    Handle<IRenderResourceBlob> renderResourceBlobPC; // 00
};
RED4EXT_ASSERT_SIZE(RenderMultilayerMaskResource, 0x10);
} // namespace rend
using rendRenderMultilayerMaskResource = rend::RenderMultilayerMaskResource;
} // namespace RED4ext

// clang-format on
