#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IRenderResourceBlob.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderMultilayerMaskBlobHeader.hpp>

namespace RED4ext
{
namespace rend
{
struct RenderMultilayerMaskBlob : IRenderResourceBlob
{
    static constexpr const char* NAME = "rendRenderMultilayerMaskBlob";
    static constexpr const char* ALIAS = NAME;

    rend::RenderMultilayerMaskBlobHeader header; // 30
    DeferredDataBuffer atlasData; // 58
    DeferredDataBuffer tilesData; // B0
};
RED4EXT_ASSERT_SIZE(RenderMultilayerMaskBlob, 0x108);
} // namespace rend
using rendRenderMultilayerMaskBlob = rend::RenderMultilayerMaskBlob;
} // namespace RED4ext

// clang-format on
