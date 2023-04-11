#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IRenderResourceBlob.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RenderTextureBlobHeader.hpp>

namespace RED4ext
{
namespace rend
{
struct IRenderTextureBlob : IRenderResourceBlob
{
    static constexpr const char* NAME = "rendIRenderTextureBlob";
    static constexpr const char* ALIAS = NAME;

    rend::RenderTextureBlobHeader header; // 30
    DeferredDataBuffer textureData; // 78
};
RED4EXT_ASSERT_SIZE(IRenderTextureBlob, 0xD0);
} // namespace rend
using rendIRenderTextureBlob = rend::IRenderTextureBlob;
} // namespace RED4ext

// clang-format on
